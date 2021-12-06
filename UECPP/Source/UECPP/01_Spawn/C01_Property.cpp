#include "../01_Spawn/C01_Property.h"

AC01_Property::AC01_Property()
{
	// PrimaryActorTick : 해당 액터의 틱을 활성화시킬지의 여부입니다.
	PrimaryActorTick.bCanEverTick = true;

}

void AC01_Property::BeginPlay()
{
	// Super : 부모의 메서드를 호출 시켜주는 네임스페이스입니다.
	Super::BeginPlay();
	
}

void AC01_Property::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

