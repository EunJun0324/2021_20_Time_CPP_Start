#include "C_Player.h"
#include "Global.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/ArrowComponent.h"

#include "Camera/CameraComponent.h"

#include "Materials/MaterialInstanceDynamic.h"

#include "07_TPS/C_Rifle.h"
#include "07_TPS/C_UserWidget.h"
#include "08_Parkour/ParkourComponent.h"


AC_Player::AC_Player()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USpringArmComponent>(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent<UCameraComponent>(this, &Camera, "Camera", SpringArm);
	CHelpers::CreateActorComponent<UParkourComponent>(this, &Parkour, "Parkour");

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 400;


	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Player/BP_CAnimInstance.BP_CAnimInstance_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);


	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SocketOffset = FVector(0, 60, 0);

	CHelpers::GetClass<UC_UserWidget>(&AutoFireClass, "WidgetBlueprint'/Game/07_TPS/BP_CAutoFire.BP_CAutoFire_C'");

	CHelpers::CreateComponent<USceneComponent>(this, &ArrowGroup, "ArrowGroup", GetCapsuleComponent());
	for (int32 i = 0; i < (int32)EParkourArrowType::Max; i++)
	{
		FName name = FName(*CHelpers::GetStringFromEnum("EParkourArrowType", i));
		CHelpers::CreateComponent<UArrowComponent>(this, &Arrows[i], name, ArrowGroup);

		switch ((EParkourArrowType)i)
		{
		case EParkourArrowType::Center : 
			Arrows[i]->ArrowColor = FColor::Red;
			break;
		case EParkourArrowType::Ceil   :
			Arrows[i]->ArrowColor = FColor::Green;
			Arrows[i]->SetRelativeLocation(FVector(0, 0, 100));
			break;
		case EParkourArrowType::Floor:
			Arrows[i]->ArrowColor = FColor::Blue;
			Arrows[i]->SetRelativeLocation(FVector(0, 0, -80));
			break;
		case EParkourArrowType::Left:
			Arrows[i]->ArrowColor = FColor::Magenta;
			Arrows[i]->SetRelativeLocation(FVector(0, -30, 0));
			break;
		case EParkourArrowType::Right:
			Arrows[i]->ArrowColor = FColor::Magenta;
			Arrows[i]->SetRelativeLocation(FVector(0, 30, 0));
			break;
		case EParkourArrowType::Land:
			Arrows[i]->ArrowColor = FColor::Yellow;
			Arrows[i]->SetRelativeLocation(FVector(200, 0, 100));
			Arrows[i]->SetRelativeRotation(FRotator(-90, 0, 0));
			break;
		}
	}
}

void AC_Player::BeginPlay()
{
	Super::BeginPlay();
	
	Rifle = AC_Rifle::Spawn(GetWorld(), this);
	AutoFire = CreateWidget<UC_UserWidget, APlayerController>(GetController<APlayerController>(), AutoFireClass);
	AutoFire->AddToViewport();
}

void AC_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",    this, &AC_Player::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight",      this, &AC_Player::OnMoveRight);
	PlayerInputComponent->BindAxis("HorizontalLook", this, &AC_Player::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook",   this, &AC_Player::OnVerticalLook);
	PlayerInputComponent->BindAxis("Zoom",           this, &AC_Player::OnZoom);

	PlayerInputComponent->BindAction("Run",       EInputEvent::IE_Pressed,  this, &AC_Player::OnRun);
	PlayerInputComponent->BindAction("Run",       EInputEvent::IE_Released, this, &AC_Player::OffRun);
	PlayerInputComponent->BindAction("Rifle",     EInputEvent::IE_Pressed,  this, &AC_Player::OnRifle_Equip);
	PlayerInputComponent->BindAction("Aim",       EInputEvent::IE_Pressed,  this, &AC_Player::OnAim);
	PlayerInputComponent->BindAction("Aim",       EInputEvent::IE_Released, this, &AC_Player::OffAim);
	PlayerInputComponent->BindAction("Fire",      EInputEvent::IE_Pressed,  this, &AC_Player::OnFire);
	PlayerInputComponent->BindAction("Fire",      EInputEvent::IE_Released, this, &AC_Player::OffFire);
	PlayerInputComponent->BindAction("AutoFire",  EInputEvent::IE_Pressed,  this, &AC_Player::OnAutoFire);


}

void AC_Player::OnMoveForward(float AxisValue)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector().GetSafeNormal();

	AddMovementInput(direction, AxisValue);
}

void AC_Player::OnMoveRight(float AxisValue)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector().GetSafeNormal();

	AddMovementInput(direction, AxisValue);
}

void AC_Player::OnHorizontalLook(float AxisValue)
{ AddControllerYawInput(AxisValue); }

void AC_Player::OnVerticalLook(float AxisValue)
{ AddControllerPitchInput(AxisValue); }

void AC_Player::OnZoom(float AxisValue)
{
	SpringArm->TargetArmLength += (ZoomSpeed * AxisValue * GetWorld()->GetDeltaSeconds());
	SpringArm->TargetArmLength = FMath::Clamp(SpringArm->TargetArmLength, ZoomRange.X, ZoomRange.Y);
}

void AC_Player::OnRun()
{ GetCharacterMovement()->MaxWalkSpeed = 600; }

void AC_Player::OffRun()
{ GetCharacterMovement()->MaxWalkSpeed = 400; }

void AC_Player::OnRifle_Equip()
{ Rifle->Equip(); }

void AC_Player::OnAim()
{ Rifle->Begin_Aim(); }

void AC_Player::OffAim()
{ Rifle->End_Aim(); }

void AC_Player::OnFire()
{ Rifle->Begin_Fire(); }

void AC_Player::OffFire()
{ Rifle->End_Fire(); }

void AC_Player::OnAutoFire()
{ 
	Rifle->ToggleAutoFire(); 
	Rifle->GetAutoFire() ? AutoFire->On() : AutoFire->Off();
}

void AC_Player::Begin_Equip_Rifle()
{ Rifle->Begin_Equip(); }

void AC_Player::End_Equip_Rifle()
{ Rifle->End_Equip(); }

void AC_Player::Begin_UnEquip_Rifle()
{ Rifle->Begin_UnEquip(); }

void AC_Player::End_UnEquip_Rifle()
{ Rifle->End_UnEquip(); }

bool AC_Player::Get_Equip_Rifle()
{ return Rifle->GetEquipped(); }

bool AC_Player::Get_Aim_Rifle()
{ return Rifle->GetAiming(); }



