#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ParkourComponent.generated.h"

UENUM(BlueprintType)
enum class EParkourArrowType : uint8
{
	Center = 0, Ceil, Floor, Left, Right, Land, Max,
};

UENUM(BlueprintType)
enum class EParkourType : uint8
{
	Climb = 0, Fall, Slide, Short, Normal, Wall, Max,
};

USTRUCT(BlueprintType)
struct FParkourData : public FTableRowBase
{
	GENERATED_BODY()

public :
	UPROPERTY(EditAnywhere)
		EParkourType Type;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* Montage;

	UPROPERTY(EditAnywhere)
		float PlayRatio = 1;

	UPROPERTY(EditAnywhere)
		FName SectionName;

	UPROPERTY(EditAnywhere)
		float MinDistance;

	UPROPERTY(EditAnywhere)
		float MaxDistance;

	UPROPERTY(EditAnywhere)
		float Extent;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_CPP_API UParkourComponent : public UActorComponent
{
	GENERATED_BODY()

private :
	UPROPERTY(EditAnywhere, Category = "DataTable")
		class UDataTable* DataTable;

	UPROPERTY(EditAnywhere, Category = "Trace")
		float TraceDistance = 600;

	UPROPERTY(EditAnywhere, Category = "Trace")
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;

public:	
	UParkourComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private :
	void LineTrace(EParkourArrowType InType);

	void CheckTarce_Center();
	void CheckTarce_Ceil();
	void CheckTarce_Floor();
	void CheckTarce_LeftAndRight();
	void CheckTarce_Land();

private:
	class ACharacter* OwnerCharacter;

	TMap<EParkourType, TArray<FParkourData>> DataMap;

	class UArrowComponent* Arrows[(int32)EParkourArrowType::Max];
	FHitResult HitResults[(int32)EParkourArrowType::Max];

	AActor* HitObstacle;
	FVector HitObstacleExtent;
	float   HitDistance;
};
