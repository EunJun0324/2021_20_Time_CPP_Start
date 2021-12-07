#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_Mesh.generated.h"

UCLASS()
class UE_CPP_API AC02_Mesh : public AActor
{
	GENERATED_BODY()
	
protected :
	UPROPERTY(EditAnywhere)
		float Time = 1.0f;

	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh;

private:
	class UMaterialInstanceDynamic* Material;

public:	
	AC02_Mesh();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
	void ChangeColor();

};
