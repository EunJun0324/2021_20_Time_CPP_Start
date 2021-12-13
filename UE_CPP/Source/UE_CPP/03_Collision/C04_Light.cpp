#include "03_Collision/C04_Light.h"
#include "C05_Trigger.h"
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
	
	PointLight->SetVisibility(false);
	PointLight2->SetVisibility(false);

	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AC05_Trigger::StaticClass(), actors);

	AC05_Trigger* trigger = nullptr;

	if (actors[0])
	{
		trigger = Cast<AC05_Trigger>(actors[0]);
		trigger->OnBoxLightBeginOverlap.BindUFunction(this, "OnLight");
		trigger->OnBoxLightEndOverlap.BindUFunction(this,   "OffLight");
		trigger->OnBoxLightColorOverlap.BindUFunction(this, "OnRandomLight");
	}
}

void AC04_Light::OnLight()
{ PointLight->SetVisibility(true); }

void AC04_Light::OffLight()
{
	PointLight->SetVisibility(false);
	PointLight2->SetVisibility(false);
}

FString AC04_Light::OnRandomLight(FLinearColor InColor)
{
	PointLight2->SetVisibility(true);
	PointLight2->SetLightColor(InColor);

	return InColor.ToString();
}


