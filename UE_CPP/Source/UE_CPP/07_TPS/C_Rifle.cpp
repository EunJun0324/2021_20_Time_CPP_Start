#include "07_TPS/C_Rifle.h"
#include "Global.h"

#include "C_Bullet.h"
#include "CHUD.h"

#include "Gameframework/Character.h"
#include "Gameframework/PlayerController.h"
#include "Gameframework/CharacterMovementComponent.h"
#include "Gameframework/SpringArmComponent.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/DecalComponent.h"

#include "Animation/AnimMontage.h"

#include "Camera/CameraComponent.h"

#include "Sound/SoundCue.h"

#include "Particles/ParticleSystemComponent.h"

#include "Materials/MaterialInstanceConstant.h"


AC_Rifle::AC_Rifle()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Mesh, "Mesh");

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Weapons/Meshes/SK_AR4.SK_AR4'");
	Mesh->SetSkeletalMesh(mesh);

	CHelpers::GetAsset<UAnimMontage>             (&GrabMontage,      "AnimMontage'/Game/Character/Montages/Rifle_Grab_Montage.Rifle_Grab_Montage'");
	CHelpers::GetAsset<UAnimMontage>             (&UngrabMontage,    "AnimMontage'/Game/Character/Montages/Rifle_UnGrab_Montage.Rifle_UnGrab_Montage'");
	CHelpers::GetAsset<UCurveFloat>              (&Curve,            "CurveFloat'/Game/07_TPS/Curve_Aim.Curve_Aim'");
	CHelpers::GetClass<UMatineeCameraShake>      (&CameraShakeClass, "Blueprint'/Game/07_TPS/BP_CameraShake.BP_CameraShake_C'");
	CHelpers::GetAsset<USoundCue>                (&MuzzleSoundCue,   "SoundCue'/Game/Sounds/S_RifleShoot_Cue.S_RifleShoot_Cue'");
	CHelpers::GetAsset<UParticleSystem>          (&FlashParticle,    "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Muzzleflash.VFX_Muzzleflash'");
	CHelpers::GetAsset<UParticleSystem>          (&EjectParticle,    "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Eject_bullet.VFX_Eject_bullet'");
	CHelpers::GetClass<AC_Bullet>                (&BulletClass,      "Blueprint'/Game/07_TPS/BP_C_Bullet.BP_C_Bullet_C'");
	CHelpers::GetAsset<UParticleSystem>          (&ImpactParticle,   "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Impact_Default.VFX_Impact_Default'");
	CHelpers::GetAsset<UMaterialInstanceConstant>(&ImpactDecal,      "MaterialInstanceConstant'/Game/Materials/M_Decal_Inst.M_Decal_Inst'");

}

void AC_Rifle::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSocket);

	OnTimelineFloat.BindUFunction(this, "Zooming");
	Timeline.AddInterpFloat(Curve, OnTimelineFloat);
	Timeline.SetPlayRate   (200);

	Delay = 0;
}

void AC_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Timeline.TickTimeline(DeltaTime);

	Delay -= DeltaTime;

	if (!bAiming) return;


	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);

	FVector    direction = camera->GetForwardVector();
	FTransform transform = camera->GetComponentToWorld();
	FVector    start     = transform.GetLocation() + direction;
	FVector    end       = transform.GetLocation() + direction * AimDistance;

	ACHUD* hud = OwnerCharacter->GetController<APlayerController>()->GetHUD<ACHUD>();

	TArray<AActor*> ignoreaActors;
	ignoreaActors.Add(OwnerCharacter);

	FHitResult hitResult;

	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, ETraceTypeQuery::TraceTypeQuery3, false, ignoreaActors, EDrawDebugTrace::None, hitResult, true);

	if (hitResult.bBlockingHit) hud->EnableTarget();
	else						hud->DisableTarget();
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
	FVector direction, start, end;

	if (IsAvaliableAim())
	{
		UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);

		FTransform transform     = camera->GetComponentToWorld();
		
		direction = camera->GetForwardVector();
		start     = transform.GetLocation() + direction;

		direction = UKismetMathLibrary::RandomUnitVectorInConeInDegrees(direction, 0.2f);

		end       = transform.GetLocation() + direction * AimDistance;

		APlayerController* controller = OwnerCharacter->GetController<APlayerController>();

		if (CameraShakeClass) controller->PlayerCameraManager->StartCameraShake(CameraShakeClass);
	}

	FVector muzzleLocation = Mesh->GetSocketLocation("MuzzleFlash");

	{
		if (MuzzleSoundCue)
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), MuzzleSoundCue, muzzleLocation);
	}

	{
		if (FlashParticle)
			UGameplayStatics::SpawnEmitterAttached(FlashParticle, Mesh, "MuzzleFlash", FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		if (EjectParticle)
			UGameplayStatics::SpawnEmitterAttached(EjectParticle, Mesh, "EjectBullet", FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
	}

	{
		if (BulletClass)
		{
			FVector spawnLocation = muzzleLocation + direction * 100;
			AC_Bullet* bullet = GetWorld()->SpawnActor<AC_Bullet>(BulletClass, spawnLocation, direction.Rotation());
			bullet->Shot(direction);
		}
	}

	PitchAngle -= 0.25 * GetWorld()->DeltaTimeSeconds;
	OwnerCharacter->AddControllerPitchInput(PitchAngle);

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	FHitResult hitResult;

	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end,
		ETraceTypeQuery::TraceTypeQuery1, false, ignoreActors, EDrawDebugTrace::None, hitResult, true);

	if (hitResult.bBlockingHit)
	{
		FRotator rotator = hitResult.ImpactNormal.Rotation();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticle, hitResult.Location, rotator);
		UDecalComponent* decal = UGameplayStatics::SpawnDecalAtLocation(GetWorld(), ImpactDecal, FVector(5), hitResult.Location, rotator, 10);
		decal->SetFadeScreenSize(0);

		UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(hitResult.GetActor()->GetRootComponent());

		if (mesh && mesh->BodyInstance.bSimulatePhysics)
		{
			direction = hitResult.GetActor()->GetActorLocation() - OwnerCharacter->GetActorLocation();
			direction.Normalize();

			mesh->AddImpulseAtLocation(direction * 300 * mesh->GetMass() , OwnerCharacter->GetActorLocation());
		}
	}

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

	OwnerCharacter->GetController<APlayerController>()->GetHUD<ACHUD>()->Visible();
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

	OwnerCharacter->GetController<APlayerController>()->GetHUD<ACHUD>()->InVisible();
}

void AC_Rifle::Begin_Fire()
{
	if (!bEquipped) return;
	if (bEquipping) return;
	if (!bAiming)   return;
	if (bFiring)    return;
	if (Delay > 0)  return;

	bFiring = true;

	if (bAutoFire)
	{
		GetWorld()->GetTimerManager().SetTimer(AutoFireHandle, this, &AC_Rifle::Firing, 0.1, true, 0);
		return;
	}

	Delay = 0.25f;

	Firing();
}

void AC_Rifle::End_Fire()
{ 
	bFiring = false; 

	if (bAutoFire)
		GetWorld()->GetTimerManager().ClearTimer(AutoFireHandle);

}

void AC_Rifle::ToggleAutoFire()
{
	if (!bFiring)
		bAutoFire = !bAutoFire;
}

bool AC_Rifle::IsAvaliableAim()
{
	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	UCameraComponent*    camera    = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);

	APlayerController* controller  = OwnerCharacter->GetController<APlayerController>();

	return springArm && camera && controller;
}


