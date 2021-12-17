#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_LineTrace.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLineTraceResult, class AActor*, InActor, FLinearColor, InColor);

UCLASS()
class UE_CPP_API AC01_LineTrace : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	AC01_LineTrace();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;


private :
	UFUNCTION()
		void StartJump(class AActor* InActor, FLinearColor InColor);

private :
	UPROPERTY(BlueprintAssignable)
	FLineTraceResult OnLineTraceResult;

private :
	TArray<class AC02_Cylinder*> Cylinders;
};
