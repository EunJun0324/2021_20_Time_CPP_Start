#include "03_Collision/C08_SpotLight.h"
#include "../Utilities/CHelpers.h"
#include "C06_MultiTrigger.h"
#include "Components/TextRenderComponent.h"
#include "Components/SpotLightComponent.h"

AC08_SpotLight::AC08_SpotLight()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);


	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;

	for (int32 i = 0; i < 3; i++)
	{
		FString str;
		str.Append("SpotLights");
		str.Append(FString::FromInt(i + 1));

		CHelpers::CreateComponent<USpotLightComponent>(this, &SpotLights[i], FName(str), Root);

		SpotLights[i]->SetRelativeLocation(FVector(0, i * 150, 0));
		SpotLights[i]->SetRelativeRotation(FRotator(-90, 0, 0));
		SpotLights[i]->Intensity = 1e+5f;
		SpotLights[i]->OuterConeAngle = 25;
	}


}

void AC08_SpotLight::BeginPlay()
{
	Super::BeginPlay();
	
	AC06_MultiTrigger* trigger = CHelpers::FindActor<AC06_MultiTrigger>(GetWorld());
	if (trigger)
		trigger->OnMultiLightBeginOverlap.AddUFunction(this, "OnLight");

}

void AC08_SpotLight::OnLight(int32 InIndex, FLinearColor InColor)
{
	for (int32 i = 0; i < 3; i++)
		SpotLights[i]->SetLightColor(FLinearColor(1, 1, 1));

	SpotLights[InIndex]->SetLightColor(InColor);
}


