// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Praticle.generated.h"

UCLASS()
class UE_CPP_API AC01_Praticle : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
		class UParticleSystemComponent* Particle;

public:	
	AC01_Praticle();

protected:
	virtual void BeginPlay() override;

};
