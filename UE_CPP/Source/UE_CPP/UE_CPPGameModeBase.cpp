#include "UE_CPPGameModeBase.h"
#include "Global.h"
#include "GameFramework/HUD.h"

AUE_CPPGameModeBase::AUE_CPPGameModeBase()
{
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_Player.BP_Player_C'");
	CHelpers::GetClass<AHUD> (&HUDClass,         "Blueprint'/Game/BP_CHUD.BP_CHUD_C'");
}