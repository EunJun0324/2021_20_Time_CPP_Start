#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CHUD.generated.h"

UCLASS()
class UE_CPP_API ACHUD : public AHUD
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditDefaultsOnly)
		class UTexture2D* Texture;

public :
	ACHUD();

	virtual void DrawHUD() override;

public :
	FORCEINLINE void Visible()   { bDraw = true; }
	FORCEINLINE void InVisible() { bDraw = false; }

	FORCEINLINE void EnableTarget()  { Color = FLinearColor::Red; }
	FORCEINLINE void DisableTarget() { Color = FLinearColor::White; }

private :
	bool bDraw = false;

	FLinearColor Color = FLinearColor::White;
};
