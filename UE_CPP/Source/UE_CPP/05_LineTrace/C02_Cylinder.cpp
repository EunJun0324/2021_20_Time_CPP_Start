#include "05_LineTrace/C02_Cylinder.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"

AC02_Cylinder::AC02_Cylinder()
{

	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh, "Mesh", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Mesh/SM_Cylinder.SM_Cylinder'");
	Mesh->SetStaticMesh(mesh);
	Mesh->SetRelativeScale3D(FVector(1, 1, 2.5f));

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->Text = FText::FromString(GetName().Replace(L"Defalut__", L""));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;

}

void AC02_Cylinder::BeginPlay()
{
	Super::BeginPlay();
	
}

