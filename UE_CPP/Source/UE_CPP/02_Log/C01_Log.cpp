#include "C01_Log.h"
#include "../Utilities/CLog.h"

AC01_Log::AC01_Log()
{

}

void AC01_Log::BeginPlay()
{
	Super::BeginPlay();
	
	CLog::Log(10);
	CLog::Log(3.14f);
	CLog::Log("Print Test");
	CLog::Log(GetActorLocation());
	CLog::Log(GetActorRotation());
	CLog::Log(this);
	CLog::Log(__FILE__, __FUNCTION__ , __LINE__);

}

