#include "07_TPS/C_Rifle.h"
#include "Global.h"

#include "Gameframework/Character.h"
#include "Gameframework/CharacterMovementComponent.h"

#include "Components/SkeletalMeshComponent.h"


AC_Rifle::AC_Rifle()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Mesh, "Mesh");

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Weapons/Meshes/SK_AR4.SK_AR4'");
	Mesh->SetSkeletalMesh(mesh);

	CHelpers::GetAsset<UAnimMontage>(&GrabMontage, "AnimMontage'/Game/Character/Montages/Rifle_Grab_Montage.Rifle_Grab_Montage'");
	CHelpers::GetAsset<UAnimMontage>(&UngrabMontage, "AnimMontage'/Game/Character/Montages/Rifle_UnGrab_Montage.Rifle_UnGrab_Montage'");
}

void AC_Rifle::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSocket);

}

void AC_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AC_Rifle* AC_Rifle::Spawn(UWorld* InWorld, ACharacter* InOwnerCharacter)
{
	FActorSpawnParameters params;
	params.Owner = InOwnerCharacter;

	return InWorld->SpawnActor<AC_Rifle>(params);
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


