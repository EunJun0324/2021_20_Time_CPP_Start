#include "../01_Spawn/C01_Property.h"

AC01_Property::AC01_Property()
{
	// PrimaryActorTick : �ش� ������ ƽ�� Ȱ��ȭ��ų���� �����Դϴ�.
	PrimaryActorTick.bCanEverTick = true;

}

void AC01_Property::BeginPlay()
{
	// Super : �θ��� �޼��带 ȣ�� �����ִ� ���ӽ����̽��Դϴ�.
	Super::BeginPlay();
	
}

void AC01_Property::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

