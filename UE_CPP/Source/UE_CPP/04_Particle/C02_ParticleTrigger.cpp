#include "04_Particle/C02_ParticleTrigger.h"
#include "../04_Particle/C01_Praticle.h"
#include "Utilities/CHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"


AC02_ParticleTrigger::AC02_ParticleTrigger()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UBoxComponent>(this, &Box, "Box", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
}

void AC02_ParticleTrigger::BeginPlay()
{
	Super::BeginPlay();
	
	AC01_Praticle* particle = CHelpers::FindActor<AC01_Praticle>(GetWorld());
	if (particle)
		OnActorBeginOverlap.AddDynamic(particle, &AC01_Praticle::ActorBeginOverlap);
}


