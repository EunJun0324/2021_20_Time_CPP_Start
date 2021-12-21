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
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "");
	Mesh->SetSkeletalMesh(mesh);

	CHelpers::GetAsset<UAnimMontage>(&GrabMontage, "");
	CHelpers::GetAsset<UAnimMontage>(&UngrabMontage, "");
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
	return nullptr;
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

	OwnerCharacter->PlayAnimMontage(GrabMontage);
}

void AC_Rifle::Begin_Equip()
{
	bEquipped = true;

	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HandSocket);
}

void AC_Rifle::End_Equip()
{ bEquipping = false; }

void AC_Rifle::UnEquip()
{ OwnerCharacter->PlayAnimMontage(UngrabMontage); }

void AC_Rifle::Begin_UnEquip()
{ bEquipped = false; }

void AC_Rifle::End_UnEquip()
{ bEquipping = false; }


