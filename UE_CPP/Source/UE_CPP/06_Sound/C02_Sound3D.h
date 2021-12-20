#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_Sound3D.generated.h"

UCLASS()
class UE_CPP_API AC02_Sound3D : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		class USoundCue* Sound;

	UPROPERTY(EditAnywhere)
		class USoundAttenuation* SoundAttenuation;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:
	AC02_Sound3D();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private :
	UFUNCTION()
		void Repeat();

	UFUNCTION()
		void Stop();
};
