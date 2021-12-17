#include "UE_CPPGameModeBase.h"
#include "Global.h"

AUE_CPPGameModeBase::AUE_CPPGameModeBase()
{
	CHelpers::GetClass<APawn>(&DefaultPawnClass, L"Blueprint'/Game/Player/BP_Player.BP_Player_C'");
}