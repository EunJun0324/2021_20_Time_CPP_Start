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
	
	Particle->SetActive(true);
}
