#include "C01_BeginOverlap.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "../Utilities/CLog.h"


AC01_BeginOverlap::AC01_BeginOverlap()
{
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Root);
	Box = CreateDefaultSubobject<UBoxComponent>("Box");
	Box->SetupAttachment(Root);
	TextRender = CreateDefaultSubobject<UTextRenderComponent>("TextRender");
	TextRender->SetupAttachment(Root);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;

	TextRender->SetRelativeLocation(FVector(0, 0, 100));
	TextRender->SetRelativeRotation(FRotator(0, 0, 0));
	TextRender->SetRelativeScale3D(FVector(2));
	TextRender->TextRenderColor = FColor::Black;
	TextRender->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	TextRender->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
}

void AC01_BeginOverlap::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this, &AC01_BeginOverlap::OnBeginOverlap);
	OnActorBeginOverlap.AddDynamic(this, &AC01_BeginOverlap::OnBeginOverlap2);
	OnActorEndOverlap.AddDynamic(this, &AC01_BeginOverlap::OnEndOverlap);
}

void AC01_BeginOverlap::OnBeginOverlap(AActor* OverlapedActor, AActor* OtherActor)
{
	FString str;
	str.Append("In1 : ");
	str.Append(OtherActor->GetName());

	CLog::Log(str);
}

void AC01_BeginOverlap::OnBeginOverlap2(AActor* OverlapedActor, AActor* OtherActor)
{
	FString str;
	str.Append("In2 : ");
	str.Append(OtherActor->GetName());

	CLog::Log(str);
}

void AC01_BeginOverlap::OnEndOverlap(AActor* OverlapedActor, AActor* OtherActor)
{
	FString str;
	str.Append("Out : ");
	str.Append(OtherActor->GetName());

	CLog::Log(str);
}

