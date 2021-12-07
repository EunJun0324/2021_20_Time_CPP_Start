#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h"

UCLASS()
class UECPP_API AC01_Property : public AActor
{
	GENERATED_BODY()
	
private :
	// UPROPERTY    : �����Ϳ����� ���� ���θ� �����մϴ�.
	// EditAnywhere : ��ŰŸ�� , �ν��Ͻ� Ÿ�Կ� ���Ͽ� ��� �����ϰ�
	//                ������ �����մϴ�. 
	UPROPERTY(EditAnywhere)
	int A = 10;
	// EditInstanceOnly : Ŭ���� ��ü�� ���ؼ��� �����ϰ� ������ �����մϴ�.
	UPROPERTY(EditInstanceOnly)
	int B = 20;
	// EditDefaultsOnly : �������Ʈ �����ͻ󿡼��� �����ϰ� ������ �����մϴ�.
	UPROPERTY(EditDefaultsOnly)
	int C = 30;

	// ��Ű Ÿ�� : �ش� Ŭ���� �������� ���� �������Ʈ�� �ǹ��մϴ�.
	// �ν��Ͻ� Ÿ�� : �ش� Ŭ���� �������� ���� ��ü�� �ǹ��մϴ�.

public:	
	AC01_Property();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
