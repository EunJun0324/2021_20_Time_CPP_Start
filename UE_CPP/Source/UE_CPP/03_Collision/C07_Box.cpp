#include "03_Collision/C07_Box.h"
#include "C06_MultiTrigger.h"
#include "Utilities/CHelpers.h"
#include "Utilities/CLog.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"



AC07_Box::AC07_Box()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text");

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Mesh/SM_Cube.SM_Cube'");
	
	for (int32 i = 0; i < 3; i++)
	{
		FString str;
		str.Append("Meshes");
		str.Append(FString::FromInt(i + 1));
		CHelpers::CreateComponent<UStaticMeshComponent>(this, &Meshes[i], FName(str), Root);

		Meshes[i]->SetSimulatePhysics(true);
		Meshes[i]->SetRelativeLocation(FVector(0, i * 150, 0));
		Meshes[i]->SetStaticMesh(mesh);
	}

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
}

void AC07_Box::BeginPlay()
{
	Super::BeginPlay();
	
	AC06_MultiTrigger* triger = CHelpers::FindActor<AC06_MultiTrigger>(GetWorld());
	if (triger)
		triger->OnMultiLightBeginOverlap.AddUFunction(this, "OnPhysics");

	UMaterialInstanceConstant* material;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&material, "MaterialInstanceConstant'/Game/Mesh/M_BasicShape_Inst.M_BasicShape_Inst'");

	for (int32 i = 0; i < 3; i++)
	{
		Materials[i] = UMaterialInstanceDynamic::Create(material, this);
		Meshes[i]->SetMaterial(0, Materials[i]);
		Meshes[i]->SetSimulatePhysics(false);

		FTransform transform = Meshes[i]->GetComponentToWorld();
		WorldLocations[i] = transform.GetLocation();
	}
}

void AC07_Box::OnPhysics(int32 InIndex, FLinearColor InColor)
{
	for (int i = 0; i < 3; i++)
	{
		Materials[i]->SetVectorParameterValue("Color", FLinearColor(1, 1, 1));

		Meshes[i]->SetSimulatePhysics(false);
		Meshes[i]->SetWorldLocation(WorldLocations[i]);
	}

	Materials[InIndex]->SetVectorParameterValue("Color", InColor);
	Meshes[InIndex]->SetSimulatePhysics(true);
}

