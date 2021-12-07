#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Spawn.generated.h"

UCLASS()
class UE_CPP_API AC01_Spawn : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
		int A = 10;
	UPROPERTY(EditInstanceOnly)
		int B = 20;
	UPROPERTY(EditDefaultsOnly)
		int C = 30;
	UPROPERTY(VisibleAnywhere)
		int D = 40;

protected :
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Category = "Property")
		int Variable = 50;

public:	
	AC01_Spawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
