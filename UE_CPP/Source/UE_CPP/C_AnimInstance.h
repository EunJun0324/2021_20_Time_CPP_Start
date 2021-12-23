#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "C_AnimInstance.generated.h"

UCLASS()
class UE_CPP_API UC_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected :
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Speed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Direction;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bEquipped;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bAiming;

public :
	virtual void NativeBeginPlay()                         override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private :
	class ACharacter* OwnerCharacter;
};
