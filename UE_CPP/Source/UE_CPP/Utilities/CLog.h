#pragma once

#include "CoreMinimal.h"

class UE_CPP_API CLog
{
public:
	static void Log(int32 InValue);
	static void Log(float InValue);
	static void Log(const FString& InValue);
	static void Log(const FVector& InValue);
	static void Log(const FRotator& InValue);
	static void Log(const UObject* InValue);
	static void Log(const FString& InFileName, const FString& InFuncName, int32 InLineNumber);

};
