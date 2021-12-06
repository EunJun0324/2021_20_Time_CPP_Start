#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h"

UCLASS()
class UECPP_API AC01_Property : public AActor
{
	GENERATED_BODY()
	
private :
	// UPROPERTY    : 에디터에서의 설정 여부를 결정합니다.
	// EditAnywhere : 아키타입 , 인스턴스 타입에 대하여 모두 공개하고
	//                수정이 가능합니다. 
	UPROPERTY(EditAnywhere)
	int A = 10;
	// EditInstanceOnly : 클래스 객체에 대해서만 공개하고 수정이 가능합니다.
	UPROPERTY(EditInstanceOnly)
	int B = 20;
	// EditDefaultsOnly : 블루프린트 에디터상에서만 공개하고 수정이 가능합니다.
	UPROPERTY(EditDefaultsOnly)
	int C = 30;

	// 아키 타입 : 해당 클래스 형식으로 만든 블루프린트를 의미합니다.
	// 인스턴스 타입 : 해당 클래스 형식으로 만든 객체를 의미합니다.

public:	
	AC01_Property();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
