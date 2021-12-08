#include "C02_Mesh.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "../../UE_CPP/Utilities/CHelpers.h"

AC02_Mesh::AC02_Mesh()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	// ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(L"StaticMesh'/Game/Mesh/SM_Cube.SM_Cube'");
	// if (mesh.Succeeded()) Mesh->SetStaticMesh(mesh.Object);

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Mesh/SM_Cube.SM_Cube'");
	Mesh->SetStaticMesh(mesh);

}

void AC02_Mesh::BeginPlay()
{
	Super::BeginPlay();
	
	// UObject* obj = StaticLoadObject(UMaterialInstanceConstant::StaticClass(), nullptr, L"MaterialInstanceConstant'/Game/Mesh/M_BasicShape_Inst.M_BasicShape_Inst'");
	// UMaterialInstanceConstant* material = Cast<UMaterialInstanceConstant>(obj);
	
	UMaterialInstanceConstant* material = NULL;
	CHelpers::GetAssetDynamic(&material, "MaterialInstanceConstant'/Game/Mesh/M_BasicShape_Inst.M_BasicShape_Inst'");

	Material = UMaterialInstanceDynamic::Create(material, this);

	Mesh->SetMaterial(0, Material);

	UKismetSystemLibrary::K2_SetTimer(this, "ChangeColor", Time, true);
}

void AC02_Mesh::ChangeColor()
{
	FLinearColor color;
	color.R = UKismetMathLibrary::RandomFloatInRange(0, 1);
	color.G = UKismetMathLibrary::RandomFloatInRange(0, 1);
	color.B = UKismetMathLibrary::RandomFloatInRange(0, 1);
	color.A = 1.0f;

    Material->SetVectorParameterValue("Color", color);
}

