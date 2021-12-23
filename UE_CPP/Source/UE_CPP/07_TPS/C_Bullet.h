#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Bullet.generated.h"

UCLASS()
class UE_CPP_API AC_Bullet : public AActor
{
	GENERATED_BODY()
	
private :
	UPROPERTY(VisibleDefaultsOnly)
		class UCapsuleComponent*            Capsule;
									        
	UPROPERTY(VisibleDefaultsOnly)	        
		class UStaticMeshComponent*         Mesh;

	UPROPERTY(VisibleDefaultsOnly)
		class UProjectileMovementComponent* Projectile;

public:	
	AC_Bullet();

protected:
	virtual void BeginPlay() override;

private :
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
public :
	void Shot(const FVector& InDirection);

};
