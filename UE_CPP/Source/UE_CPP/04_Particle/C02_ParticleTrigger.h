#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_ParticleTrigger.generated.h"

UCLASS()
class UE_CPP_API AC02_ParticleTrigger : public AActor
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
	AC02_ParticleTrigger();

protected:
	virtual void BeginPlay() override;

};
