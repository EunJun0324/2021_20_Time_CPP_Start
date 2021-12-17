#include "05_LineTrace/C01_LineTrace.h"
#include "C02_Cylinder.h"
#include "C_Player.h"
#include "Components/TextRenderComponent.h"
#include "DrawDebugHelpers.h"
#include "Global.h"

AC01_LineTrace::AC01_LineTrace()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
}

void AC01_LineTrace::BeginPlay()
{
	Super::BeginPlay();
	
	CHelpers::FindActors<AC02_Cylinder>(GetWorld(), Cylinders);
	OnLineTraceResult.AddDynamic(this, &AC01_LineTrace::StartJump);
}

void AC01_LineTrace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector start = Cylinders[0]->GetActorLocation();
	FVector end = Cylinders[1]->GetActorLocation();

	// DrawDebugLine
	{
		start.Z -= 20;
		end.Z   -= 20;

		DrawDebugLine(GetWorld(), start, end, FColor::Yellow, false);
	}

	// LineTrace
	{
		start.Z += 40;
		end.Z   += 40;

		TArray<AActor*> ignoreActors;
		ignoreActors.Add(Cylinders[0]);
		ignoreActors.Add(Cylinders[1]);

		FHitResult hitResult;

		bool b = UKismetSystemLibrary::LineTraceSingleByProfile(GetWorld(), start, end, "Pawn", false, ignoreActors, EDrawDebugTrace::ForOneFrame, hitResult, true, FLinearColor::Blue, FLinearColor::Red);

		if (b)
		{
			if (OnLineTraceResult.IsBound())
			{
				FLinearColor color = CHelpers::GetRandomColor();
				OnLineTraceResult.Broadcast(hitResult.GetActor(), color);
			}
		}

	}
}

void AC01_LineTrace::StartJump(AActor* InActor, FLinearColor InColor)
{
	AC_Player* player = Cast<AC_Player>(InActor);
	if (player)
		player->LaunchCharacter(FVector(0, 0, 200), true, true);
}

