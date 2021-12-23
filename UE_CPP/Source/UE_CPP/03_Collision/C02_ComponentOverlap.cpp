#include "C02_ComponentOverlap.h"
#include "../Utilities/CHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/PointLightComponent.h"


AC02_ComponentOverlap::AC02_ComponentOverlap()
{
	CHelpers::CreateComponent<USceneComponent>     (this, &Root, "Root");
	CHelpers::CreateComponent<UBoxComponent>       (this, &Box, "Box", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);
	CHelpers::CreateComponent<UPointLightComponent>(this, &PointLight, "PointLight", Root);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D (FVector(2));
	Text->TextRenderColor     = FColor::Red;
	Text->Text                = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;

	PointLight->SetLightColor(FLinearColor::Red);
}

void AC02_ComponentOverlap::BeginPlay()
{
	Super::BeginPlay();
	
	Box->OnComponentBeginOverlap.AddDynamic(this, &AC02_ComponentOverlap::OnBeginOverlap);
	Box->OnComponentEndOverlap.AddDynamic  (this, &AC02_ComponentOverlap::OnEndOverlap);

	PointLight->SetVisibility(false);
}

void AC02_ComponentOverlap::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{ PointLight->SetVisibility(true); }

void AC02_ComponentOverlap::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{ PointLight->SetVisibility(false); }


