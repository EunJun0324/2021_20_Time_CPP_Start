#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Spawner.generated.h"

UCLASS()
class UE_CPP_API AC03_Spawner : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AActor> SpawnClasses[3];

private :
	class AC02_Mesh* Meshes[3];

public:	
	AC03_Spawner();

protected:
	virtual void BeginPlay() override;
};
