#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "07_TPS/IRifle.h"
#include "08_Parkour/ParkourComponent.h"
#include "C_Player.generated.h"

UCLASS()
class UE_CPP_API AC_Player : public ACharacter , public IIRifle
{
	GENERATED_BODY()

private :
	UPROPERTY(EditDefaultsOnly, Category = "UserInterface")
		TSubclassOf<class UC_UserWidget> AutoFireClass;

	UPROPERTY(EditDefaultsOnly, Category = "Zoom")
		float ZoomSpeed = 1000;

	UPROPERTY(EditDefaultsOnly, Category = "Zoom")
		FVector2D ZoomRange = FVector2D(0, 500);
	
private :
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent*	   Camera;

	UPROPERTY(VisibleDefaultsOnly)
		class UParkourComponent* Parkour;

	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* ArrowGroup;

	UPROPERTY(VisibleDefaultsOnly)
		class UArrowComponent* Arrows[(int32)EParkourArrowType::Max];

private :
	class AC_Rifle* Rifle;
	class UC_UserWidget* AutoFire;

public:
	AC_Player();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private :
	void OnMoveForward(float AxisValue);
	void OnMoveRight(float AxisValue);

	void OnHorizontalLook(float AxisValue);
	void OnVerticalLook(float AxisValue);

	void OnZoom(float AxisValue);

	void OnRun();
	void OffRun();

	void OnRifle_Equip();

	void OnAim();
	void OffAim();

	void OnFire();
	void OffFire();

	void OnAutoFire();

	void OnParkour();

	virtual void Begin_Equip_Rifle()   override;
	virtual void End_Equip_Rifle()     override;
	virtual void Begin_UnEquip_Rifle() override;
	virtual void End_UnEquip_Rifle()   override;
	virtual bool Get_Equip_Rifle()     override;
	virtual bool Get_Aim_Rifle()       override;
};
