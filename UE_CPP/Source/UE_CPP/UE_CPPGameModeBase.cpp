#include "UE_CPPGameModeBase.h"
#include "C_Player.h"

AUE_CPPGameModeBase::AUE_CPPGameModeBase()
{
	// CHelpers::GetClass(&DefaultPawnClass, L"Blueprint'/Game/Player/BP_Player.BP_Player_C'")
	ConstructorHelpers::FClassFinder<AC_Player> player(L"Blueprint'/Game/Player/BP_Player.BP_Player_C'");
	if (player.Succeeded()) DefaultPawnClass = player.Class;
}