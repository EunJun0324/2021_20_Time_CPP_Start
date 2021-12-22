#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "C_AnimNotifyState.generated.h"

UCLASS()
class UE_CPP_API UC_AnimNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
		bool bUnequip;

private :
	FString GetNotifyName_Implementation() const override;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd  (USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


};
