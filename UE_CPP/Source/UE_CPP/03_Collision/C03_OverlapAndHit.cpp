#include "03_Collision/C03_OverlapAndHit.h"
#include "Utilities/CHelpers.h"
#include "Utilities/CLog.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"

AC03_OverlapAndHit::AC03_OverlapAndHit()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UBoxComponent>(this, &Box, "Box", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;
	Box->SetCollisionProfileName("C03_OverlapAndHit");

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
}

void AC03_OverlapAndHit::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AC03_OverlapAndHit::OnBeginOverlap);
	Box->OnComponentEndOverlap.AddDynamic(this, &AC03_OverlapAndHit::OnEndOverlap);
	Box->OnComponentHit.AddDynamic(this, &AC03_OverlapAndHit::OnHit);
}

void AC03_OverlapAndHit::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{ CLog::Log("In : " + OtherActor->GetName()); }

void AC03_OverlapAndHit::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{ CLog::Log("Out : " + OtherActor->GetName()); }

void AC03_OverlapAndHit::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	FString str;
	str.Append("Hit : " + OtherActor->GetName());
	str.Append(" / ");
	str.Append(FString::FromInt(++HitCount));

	CLog::Log(str);
}


