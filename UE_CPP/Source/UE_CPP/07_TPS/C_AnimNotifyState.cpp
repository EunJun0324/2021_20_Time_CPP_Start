#include "07_TPS/C_AnimNotifyState.h"
#include "Global.h"
#include "IRifle.h"

FString UC_AnimNotifyState::GetNotifyName_Implementation() const
{ return "Equip"; }

void UC_AnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	if (!MeshComp) return;

	IIRifle* rifle = Cast<IIRifle>(MeshComp->GetOwner());
	if (!rifle) return;

	if (bUnequip)
	{
		rifle->Begin_UnEquip_Rifle();
		return;
	}

	rifle->Begin_Equip_Rifle();
}

void UC_AnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
	if (!MeshComp) return;

	IIRifle* rifle = Cast<IIRifle>(MeshComp->GetOwner());
	if (!rifle) return;

	if (bUnequip)
	{
		rifle->End_UnEquip_Rifle();
		return;
	}

	rifle->End_Equip_Rifle();
}
