#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_BeginOverlap.generated.h"

UCLASS()
class UE_CPP_API AC01_BeginOverlap : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* TextRender;

public:	
	AC01_BeginOverlap();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
		void OnBeginOverlap(AActor* OverlapedActor, AActor* OtherActor);
	UFUNCTION()
		void OnBeginOverlap2(AActor* OverlapedActor, AActor* OtherActor);
	UFUNCTION()
		void OnEndOverlap(AActor* OverlapedActor, AActor* OtherActor);
};
