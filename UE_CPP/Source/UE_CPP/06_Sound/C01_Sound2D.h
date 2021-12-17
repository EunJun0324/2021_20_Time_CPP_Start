#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Sound2D.generated.h"

UCLASS()
class UE_CPP_API AC01_Sound2D : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
		class USoundCue* Sound;

private :
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	AC01_Sound2D();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private :
	class UAudioComponent* Audio;
	
};
