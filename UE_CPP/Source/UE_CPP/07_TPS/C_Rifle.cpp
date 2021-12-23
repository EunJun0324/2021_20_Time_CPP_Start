#include "07_TPS/C_Rifle.h"
#include "Global.h"

#include "Gameframework/Character.h"
#include "Gameframework/CharacterMovementComponent.h"
#include "Gameframework/SpringArmComponent.h"

#include "Components/SkeletalMeshComponent.h"

#include "Camera/CameraComponent.h"

AC_Rifle::AC_Rifle()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Mesh, "Mesh");

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Weapons/Meshes/SK_AR4.SK_AR4'");
	Mesh->SetSkeletalMesh(mesh);

	CHelpers::GetAsset<UAnimMontage>(&GrabMontage,   "AnimMontage'/Game/Character/Montages/Rifle_Grab_Montage.Rifle_Grab_Montage'");
	CHelpers::GetAsset<UAnimMontage>(&UngrabMontage, "AnimMontage'/Game/Character/Montages/Rifle_UnGrab_Montage.Rifle_UnGrab_Montage'");
	CHelpers::GetAsset<UCurveFloat>(&Curve,          "CurveFloat'/Game/07_TPS/Curve_Aim.Curve_Aim'");
}

void AC_Rifle::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSocket);

	OnTimelineFloat.BindUFunction(this, "Zooming");
	Timeline.AddInterpFloat(Curve, OnTimelineFloat);
	Timeline.SetPlayRate   (200);
}

void AC_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Timeline.TickTimeline(DeltaTime);

}

AC_Rifle* AC_Rifle::Spawn(UWorld* InWorld, ACharacter* InOwnerCharacter)
{
	FActorSpawnParameters params;
	params.Owner = InOwnerCharacter;

	return InWorld->SpawnActor<AC_Rifle>(params);
}

void AC_Rifle::Zooming(float Output)
{
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);
	camera->FieldOfView      = Output;
}

void AC_Rifle::Firing()
{
}

void AC_Rifle::Equip()
{
	if (bEquipping) return;

	bEquipping = true;
	if (bEquipped == true)
	{
		UnEquip();
		return;
	}

	OwnerCharacter->PlayAnimMontage(GrabMontage, 2);
}

void AC_Rifle::Begin_Equip()
{
	bEquipped = true;

	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HandSocket);
}

void AC_Rifle::End_Equip()
{ bEquipping = false; }

void AC_Rifle::UnEquip()
{ OwnerCharacter->PlayAnimMontage(UngrabMontage, 2); }

void AC_Rifle::Begin_UnEquip()
{ 
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSocket);
	bEquipped = false; 
}

void AC_Rifle::End_UnEquip()
{ bEquipping = false; }

void AC_Rifle::Begin_Aim()
{
	if (!bEquipped)        return;
	if (bEquipping)        return;
	if (!IsAvaliableAim()) return;

	bAiming = true;

	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);

	OwnerCharacter->bUseControllerRotationYaw                         = true;
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;

	springArm->TargetArmLength = 100;
	springArm->SocketOffset    = FVector(0, 30, 10);

	Timeline.PlayFromStart();
}

void AC_Rifle::End_Aim()
{
	if (!bAiming) return;
	bAiming = false;

	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	
	OwnerCharacter->bUseControllerRotationYaw                         = false;
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;

	springArm->TargetArmLength = 200;
	springArm->SocketOffset    = FVector(0, 60, 0);

	Timeline.ReverseFromEnd();
}

void AC_Rifle::Begin_Fire()
{
	if (!bEquipped) return;
	if (bEquipping) return;
	if (!bAiming)   return;
	if (bFiring)    return;

	bFiring = true;
}

void AC_Rifle::End_Fire()
{ bFiring = false; }

bool AC_Rifle::IsAvaliableAim()
{
	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	UCameraComponent*    camera    = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);

	APlayerController* controller  = OwnerCharacter->GetController<APlayerController>();

	return springArm && camera && controller;
}


