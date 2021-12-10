#include "03_Collision/C04_Light.h"
#include "../Utilities/CHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/PointLightComponent.h"


AC04_Light::AC04_Light()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UBoxComponent>(this, &Box, "Box", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);
	CHelpers::CreateComponent<UPointLightComponent>(this, &PointLight, "PointLight", Root);
	CHelpers::CreateComponent<UPointLightComponent>(this, &PointLight2, "PointLight2", Root);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;

	PointLight->SetLightColor(FLinearColor::Red);
	PointLight->Intensity = 1e+4f;
	PointLight->AttenuationRadius = 200;

	PointLight2->SetRelativeLocation(FVector(0, 200, 0));
	PointLight2->SetLightColor(FLinearColor::Blue);
	PointLight2->Intensity = 1e+4f;
	PointLight2->AttenuationRadius = 200;
}

void AC04_Light::BeginPlay()
{
	Super::BeginPlay();
	
	PointLight->SetVisibility(true);
}


