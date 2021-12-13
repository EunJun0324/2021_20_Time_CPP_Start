#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C05_Trigger.generated.h"

DECLARE_DELEGATE(FBoxLightOverlap);
DECLARE_DELEGATE_RetVal_OneParam(FString, FBoxLightColorOverlap, FLinearColor);

UCLASS()
class UE_CPP_API AC05_Trigger : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	AC05_Trigger();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void OnBeginOverlap(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

	UFUNCTION()
		void OnEndOverlap(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

public :
	FBoxLightOverlap		OnBoxLightBeginOverlap;
	FBoxLightOverlap		OnBoxLightEndOverlap;
	FBoxLightColorOverlap 	OnBoxLightColorOverlap;
};
