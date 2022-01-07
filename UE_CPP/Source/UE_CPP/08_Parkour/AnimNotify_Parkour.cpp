#include "08_Parkour/AnimNotify_Parkour.h"
#include "Global.h"
#include "ParkourComponent.h"

FString UAnimNotify_Parkour::GetNotifyName_Implementation() const
{
	return "Parkour";
}

void UAnimNotify_Parkour::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	if (!MeshComp) return;

	UParkourComponent* parkour = CHelpers::GetComponent<UParkourComponent>(MeshComp->GetOwner());
	if (!parkour) return;

	parkour->EndDoParkour();
}