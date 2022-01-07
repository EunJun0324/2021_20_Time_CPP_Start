#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Parkour.generated.h"

UCLASS()
class UE_CPP_API UAnimNotify_Parkour : public UAnimNotify
{
	GENERATED_BODY()
	
public :
	FString GetNotifyName_Implementation() const override;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
