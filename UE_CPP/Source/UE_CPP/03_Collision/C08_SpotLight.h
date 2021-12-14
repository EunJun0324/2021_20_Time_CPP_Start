#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C08_SpotLight.generated.h"

UCLASS()
class UE_CPP_API AC08_SpotLight : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class USpotLightComponent* SpotLights[3];


public:	
	AC08_SpotLight();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
		void OnLight(int32 InIndex, FLinearColor InColor);
};
