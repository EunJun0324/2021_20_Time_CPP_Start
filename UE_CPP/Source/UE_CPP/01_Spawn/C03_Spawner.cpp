#include "C03_Spawner.h"
#include "C02_Mesh.h"

AC03_Spawner::AC03_Spawner() { }

void AC03_Spawner::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 0; i < 3; i++)
	{
		FTransform transform;

		FVector location = GetActorLocation();
		transform.SetLocation(FVector(location.X + i * 400, location.Y, location.Z));

		GetWorld()->SpawnActor<AC02_Mesh>(SpawnClasses[i], transform);
	}
}

