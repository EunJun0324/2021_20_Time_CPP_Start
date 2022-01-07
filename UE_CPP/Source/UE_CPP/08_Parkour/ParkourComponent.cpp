#include "08_Parkour/ParkourComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
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
	if (OwnerCharacter->GetCharacterMovement()->IsFalling()) return;
	if (bStartFall) return;

	bStartFall = true;

	UArrowComponent* arrow = Arrows[(int32)EParkourArrowType::Land];
	FLinearColor color = FLinearColor(arrow->ArrowColor);

	FTransform transform = arrow->GetComponentToWorld();
	FVector start = transform.GetLocation();

	const TArray<FParkourData>* datas = DataMap.Find(EParkourType::Fall);
	FVector end = start + transform.GetRotation().GetForwardVector() * (*datas)[0].Extent;

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, ETraceTypeQuery::TraceTypeQuery1, false, ignoreActors, DrawDebugType, HitResults[(int32)EParkourArrowType::Land], true, color, FLinearColor::White, 0);
}


bool UParkourComponent::Check_Obstacle()
{
	if (!HitObstacle) return false;
	
	bool b = true;
	b &= HitResults[(int32)EParkourArrowType::Center].bBlockingHit;
	b &= HitResults[(int32)EParkourArrowType::Left].bBlockingHit;
	b &= HitResults[(int32)EParkourArrowType::Right].bBlockingHit;
	if (!b) return false;

	FVector center = HitResults[(int32)EParkourArrowType::Center].Normal;
	FVector left   = HitResults[(int32)EParkourArrowType::Left].Normal;
	FVector right  = HitResults[(int32)EParkourArrowType::Right].Normal;

	if (!center.Equals(left))  return false;
	if (!center.Equals(right)) return false;

	return true;
}


bool UParkourComponent::Check_ClimbMode()
{
	if (!HitResults[(int32)EParkourArrowType::Ceil].bBlockingHit) return false;

	CLog::Log("HitResults");
	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Climb);

	if((*data)[0].MinDistance > HitDistance) return false;
	CLog::Log("MinDistance");
	if((*data)[0].MaxDistance < HitDistance) return false;
	CLog::Log("MaxDistance");
	if (!FMath::IsNearlyEqual((*data)[0].Extent, HitObstacleExtent.Z, 10)) return false;
	CLog::Log("IsNearlyEqual");

	return true;
}

void UParkourComponent::DoParkour_Climb()
{
	Type = EParkourType::Climb;

	OwnerCharacter->SetActorLocation(HitResults[(int32)EParkourArrowType::Center].ImpactPoint);

	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Climb);
	OwnerCharacter->PlayAnimMontage((*data)[0].Montage, (*data)[0].PlayRatio, (*data)[0].SectionName);
	OwnerCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);


}

void UParkourComponent::EndParkour_Climb()
{
	OwnerCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
}

bool UParkourComponent::Check_SlideMode()
{
	if (HitResults[(int32)EParkourArrowType::Floor].bBlockingHit) return false;

	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Slide);
	if ((*data)[0].MinDistance > HitDistance) return false;
	if ((*data)[0].MaxDistance < HitDistance) return false;

	UArrowComponent* arrow = Arrows[(int32)EParkourArrowType::Floor];
	FLinearColor color = FLinearColor(arrow->ArrowColor);

	FVector arrowLocation = arrow->GetComponentToWorld().GetLocation();
	FVector ownerLocation = OwnerCharacter->GetActorLocation();

	float extent = (*data)[0].Extent;
	float z = arrowLocation.Z + extent;

	FVector forward = OwnerCharacter->GetActorForwardVector();
	forward = FVector(forward.X, forward.Y, 0.0f);

	FVector start = FVector(arrowLocation.X, arrowLocation.Y, z);
	FVector end = start + forward * TraceDistance;

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	FHitResult hitResult;

	bool b = UKismetSystemLibrary::BoxTraceSingle(GetWorld(), start, end, FVector(0, extent, extent), OwnerCharacter->GetActorRotation(), ETraceTypeQuery::TraceTypeQuery1, false, ignoreActors, EDrawDebugTrace::ForDuration, hitResult, true);
	if (b) return false;

	return true;
}

void UParkourComponent::DoParkour_Slide()
{
	Type = EParkourType::Slide;

	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Slide);

	OwnerCharacter->PlayAnimMontage((*data)[0].Montage, (*data)[0].PlayRatio, (*data)[0].SectionName);

	BackupObstacle = HitObstacle;
	BackupObstacle->SetActorEnableCollision(false);
}

void UParkourComponent::EndParkour_Slide()
{
	BackupObstacle->SetActorEnableCollision(true);
	BackupObstacle = nullptr;
}

bool UParkourComponent::Check_FallMode()
{
	if (!bStartFall) return false;

	bStartFall = false;

	float distance = HitResults[(int32)EParkourArrowType::Land].Distance;

	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Fall);
	if ((*data)[0].MinDistance > distance) return false;
	if ((*data)[0].MaxDistance < distance) return false;

	return true;
}

void UParkourComponent::DoParkour_Fall()
{
	Type = EParkourType::Fall;

	const TArray<FParkourData>* data = DataMap.Find(EParkourType::Fall);
	OwnerCharacter->PlayAnimMontage((*data)[0].Montage, (*data)[0].PlayRatio, (*data)[0].SectionName);
}

void UParkourComponent::EndParkour_Fall()
{ Type = EParkourType::Max; }

bool UParkourComponent::Check_ObstacleMode(EParkourType InType, FParkourData& OutData)
{
	const TArray<FParkourData>* datas = DataMap.Find(InType);

	for (int32 i = 0; i < (*datas).Num(); i++)
	{
		bool bExcute = true;
		bExcute &= (*datas)[i].MinDistance < HitDistance;
		bExcute &= (*datas)[i].MaxDistance > HitDistance;
		bExcute &= FMath::IsNearlyEqual((*datas)[i].Extent, HitObstacleExtent.Y, 10);

		OutData = (*datas)[i];

		if (bExcute) return true;
	}

	return false;
}

void UParkourComponent::DoParkour_Obstacle(EParkourType InType, const FParkourData& OutData)
{
	Type = InType;

	OwnerCharacter->PlayAnimMontage(OutData.Montage, OutData.PlayRatio, OutData.SectionName);

	BackupObstacle = HitObstacle;
	BackupObstacle->SetActorEnableCollision(false);
}

void UParkourComponent::EndParkour_Obstacle()
{
	BackupObstacle->SetActorEnableCollision(true);
	BackupObstacle = nullptr;
}

void UParkourComponent::DoParkour()
{
	if ((Type != EParkourType::Max)) return;

	if (Check_FallMode())
	{
		DoParkour_Fall();
		return;
	}

	if (!Check_Obstacle()) return;

	if (Check_ClimbMode())
	{
		DoParkour_Climb();
		return;
	}

	if (Check_SlideMode())
	{
		DoParkour_Slide();
		return;
	}

	if (HitResults[(int32)EParkourArrowType::Ceil].bBlockingHit) return;


	FParkourData data;

	if (Check_ObstacleMode(EParkourType::Normal, data))
	{
		DoParkour_Obstacle(EParkourType::Normal, data);
		return;
	}

	if (Check_ObstacleMode(EParkourType::Short, data))
	{
		DoParkour_Obstacle(EParkourType::Short, data);
		return;
	}

	if (Check_ObstacleMode(EParkourType::Wall, data))
	{
		DoParkour_Obstacle(EParkourType::Wall, data);
		return;
	}
}

void UParkourComponent::EndDoParkour()
{
	switch (Type)
	{
	case EParkourType::Climb: EndParkour_Climb(); break;
	case EParkourType::Fall:  EndParkour_Fall(); break;
	case EParkourType::Slide: EndParkour_Slide(); break;
	case EParkourType::Short: EndParkour_Obstacle(); break;
	case EParkourType::Normal: EndParkour_Obstacle(); break;
	case EParkourType::Wall: EndParkour_Obstacle(); break;
	}

	Type = EParkourType::Max;
}