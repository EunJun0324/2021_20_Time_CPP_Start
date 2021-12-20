#include "06_Sound/C02_Sound3D.h"
#include "Global.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Sound/SoundAttenuation.h"


AC02_Sound3D::AC02_Sound3D()
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

	CHelpers::GetAsset<USoundCue>(&Sound, "SoundCue'/Game/Sounds/S_Stepdirt_Cue.S_Stepdirt_Cue'");

}

void AC02_Sound3D::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AC02_Sound3D::OnBeginOverlap);
}

void AC02_Sound3D::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UKismetSystemLibrary::K2_ClearTimer(this, "Repeat");
	UKismetSystemLibrary::K2_ClearTimer(this, "Stop");

	UKismetSystemLibrary::K2_SetTimer(this, "Repeat", 0.5f, true);
	UKismetSystemLibrary::K2_SetTimer(this, "Stop", 20, false);
}

void AC02_Sound3D::Repeat()
{
	if (SoundAttenuation)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation(), 1, 1, 0, SoundAttenuation);
}

void AC02_Sound3D::Stop()
{
	UKismetSystemLibrary::K2_ClearTimer(this, "Repeat");
}





