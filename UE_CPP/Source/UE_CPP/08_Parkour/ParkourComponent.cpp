#include "08_Parkour/ParkourComponent.h"
#include "GameFramework/Character.h"
#include "Components/ArrowComponent.h"
#include "Global.h"

#define Log_UParkourComponent

UParkourComponent::UParkourComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	CHelpers::GetAsset<UDataTable>(&DataTable, "DataTable'/Game/DataTables/DT_Parkour.DT_Parkour'");
}


void UParkourComponent::BeginPlay()
{
	Super::BeginPlay();

	TArray<FParkourData*> datas;
	DataTable->GetAllRows<FParkourData>("", datas);

	for (int32 i = 0; i < (int32)EParkourType::Max; i++)
	{
		TArray<FParkourData> temp;

		for (FParkourData* data : datas)
		{
			if (data->Type == (EParkourType)i)
				temp.Add(*data);
		}

		DataMap.Add((EParkourType)i, temp);
	}

#ifdef Log_UParkourComponent
	for (TPair<EParkourType, TArray<FParkourData>> map : DataMap)
	{
		CLog::Log(CHelpers::GetStringFromEnum("EParkourType", (int32)map.Key));

		for (FParkourData data : map.Value)
			CLog::Log(" - " + data.Montage->GetPathName());
	}
#endif

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	USceneComponent* arrow = CHelpers::GetComponent<USceneComponent>(OwnerCharacter, "ArrowGroup");

	TArray<USceneComponent*> components;
	arrow->GetChildrenComponents(false, components);

	for (int32 i = 0; i < (int32)EParkourArrowType::Max; i++)
		Arrows[i] = Cast<UArrowComponent>(components[i]);
}


void UParkourComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CheckTarce_Center();
	if (HitObstacle)
	{
		CheckTarce_Ceil();
		CheckTarce_Floor();
		CheckTarce_LeftAndRight();
	}

	CheckTarce_Land();
}

void UParkourComponent::LineTrace(EParkourArrowType InType)
{
	UArrowComponent* arrow = Arrows[(int32)InType];
	FLinearColor     color = FLinearColor(arrow->ArrowColor);

	FTransform transform = arrow->GetComponentToWorld();
	FVector    start     = transform.GetLocation();
	FVector    end       = start + OwnerCharacter->GetActorForwardVector() * TraceDistance;

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, ETraceTypeQuery::TraceTypeQuery4, false, ignoreActors, DrawDebugType, HitResults[(int32)InType], true, color, FLinearColor::White, 0);
}

void UParkourComponent::CheckTarce_Center()
{
	HitObstacle = nullptr;
	HitObstacleExtent = FVector::ZeroVector;
	HitDistance = 0;
	EParkourArrowType type = EParkourArrowType::Center;
	LineTrace(type);
	const FHitResult& hitResult = HitResults[(int32)type];
	if (hitResult.bBlockingHit)
	{
		UStaticMeshComponent* mesh = CHelpers::GetComponent<UStaticMeshComponent>(hitResult.GetActor());

		if (mesh)
		{
			HitObstacle = hitResult.GetActor();

			FVector minBound, maxBound;

			mesh->GetLocalBounds(minBound, maxBound);

			float x = FMath::Abs(minBound.X - maxBound.X);
			float y = FMath::Abs(minBound.Y - maxBound.Y);
			float z = FMath::Abs(minBound.Z - maxBound.Z);

			HitObstacleExtent = FVector(x, y, z);

			HitDistance = hitResult.Distance;
		}
	}

}

void UParkourComponent::CheckTarce_Ceil()
{
	LineTrace(EParkourArrowType::Ceil);
}

void UParkourComponent::CheckTarce_Floor()
{
	LineTrace(EParkourArrowType::Floor);
}

void UParkourComponent::CheckTarce_LeftAndRight()
{
	LineTrace(EParkourArrowType::Right);
	LineTrace(EParkourArrowType::Left);
}

void UParkourComponent::CheckTarce_Land()
{

}

