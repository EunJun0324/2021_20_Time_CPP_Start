#include "04_Particle/C01_Praticle.h"
#include "Utilities/CHelpers.h"
#include "Particles/ParticleSystemComponent.h"

AC01_Praticle::AC01_Praticle()
{
	CHelpers::CreateComponent<UParticleSystemComponent>(this, &Particle, "Particle");

	UParticleSystem* particle;
	CHelpers::GetAsset<UParticleSystem>(&particle, "ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'");
	Particle->SetTemplate(particle);
	Particle->bAutoActivate = false;
}

void AC01_Praticle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AC01_Praticle::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	FVector location = GetActorLocation();

	TArray<TEnumAsByte<EObjectTypeQuery>> types;
	types.Add(EObjectTypeQuery::ObjectTypeQuery4);

	TArray<AActor*> ignoreActors;
	TArray<FHitResult> hitResults;


	bool b = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(), location, location, 300, types, false, ignoreActors, DrawDebugType, hitResults, true);

	if (b)
	{
		Particle->ResetParticles();
		Particle->SetActive(true);

		for (const FHitResult& hitResult : hitResults)
		{
			UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(hitResult.GetActor()->GetRootComponent());
			
			if (mesh && mesh->IsSimulatingPhysics())
				mesh->AddRadialImpulse(location, 1000, 100000.0f, ERadialImpulseFalloff::RIF_MAX);
		}
	}
}
