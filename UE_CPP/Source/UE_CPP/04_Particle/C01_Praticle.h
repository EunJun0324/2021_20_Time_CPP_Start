#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "C01_Praticle.generated.h"

UCLASS()
class UE_CPP_API AC01_Praticle : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* Particle;

private :
	 UPROPERTY(EditAnywhere)
	 	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;

public:	
	AC01_Praticle();

protected:
	virtual void BeginPlay() override;

public :
	UFUNCTION()
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
