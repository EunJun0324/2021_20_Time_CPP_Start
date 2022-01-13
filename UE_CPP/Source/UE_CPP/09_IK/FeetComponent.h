// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "FeetComponent.generated.h"

USTRUCT(BlueprintType)
struct FFeetData
{
	GENERATED_BODY()

public :
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Feet")
		FVector PelvisDistance;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Feet")
		FVector LeftDistance;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Feet")
		FVector RightDistance;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Feet")
		FRotator LeftRotation;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Feet")
		FRotator RightRotation;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_CPP_API UFeetComponent : public UActorComponent
{
	GENERATED_BODY()

private :
	UPROPERTY(EditAnywhere, Category = "Trace")
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebug;

	UPROPERTY(EditAnywhere, Category = "Trace")
		float InterpSpeed = 50;

	UPROPERTY(EditAnywhere, Category = "Trace")
		float TraceDistance = 50;

	UPROPERTY(EditAnywhere, Category = "Trace")
		float OffsetDistnace = 5;

	UPROPERTY(EditAnywhere, Category = "Trace")
		FName LeftSocket = "Foot_L";

	UPROPERTY(EditAnywhere, Category = "Trace")
		FName RightSocket = "Foot_R";

public:	
	UFeetComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private :
	void Trace(FName InName, float& OutDistance, FRotator& OutRotation);

public :
	FORCEINLINE FFeetData GetData() const
	{ return Data; }

private :
	class ACharacter* OwnerCharacter;

	FFeetData Data;
};
