#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C07_Box.generated.h"

UCLASS()
class UE_CPP_API AC07_Box : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;
	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;
	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Meshes[3];

public:	
	AC07_Box();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
		void OnPhysics(int32 InIndex, FLinearColor InColor);

private :
	class UMaterialInstanceDynamic* Materials[3];
	FVector WorldLocations[3];
};
