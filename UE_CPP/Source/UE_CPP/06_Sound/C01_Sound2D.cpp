#include "06_Sound/C01_Sound2D.h"
#include "Global.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"


AC01_Sound2D::AC01_Sound2D()
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
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName().Replace(L"default__", L""));

	CHelpers::GetAsset<USoundCue>(&Sound, "SoundCue'/Game/Sounds/S_BGM_Cue.S_BGM_Cue'");

}

void AC01_Sound2D::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AC01_Sound2D::OnBeginOverlap);
	Box->OnComponentEndOverlap.AddDynamic(this, &AC01_Sound2D::OnEndOverlap);
}

void AC01_Sound2D::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!Audio)
	{
		Audio = UGameplayStatics::SpawnSound2D(GetWorld(), Sound);
		Audio->Play();
	}


	if (Audio) Audio->SetPaused(false);
}

void AC01_Sound2D::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Audio) Audio->SetPaused(true);
}


