// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/05_LineTrace/C01_LineTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC01_LineTrace() {}
// Cross Module References
	UE_CPP_API UFunction* Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UE_CPP_API UClass* Z_Construct_UClass_AC01_LineTrace_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC01_LineTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics
	{
		struct _Script_UE_CPP_eventLineTraceResult_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UE_CPP_eventLineTraceResult_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UE_CPP_eventLineTraceResult_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_CPP, nullptr, "LineTraceResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_UE_CPP_eventLineTraceResult_Parms), Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AC01_LineTrace::execStartJump)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump(Z_Param_InActor,Z_Param_InColor);
		P_NATIVE_END;
	}
	void AC01_LineTrace::StaticRegisterNativesAC01_LineTrace()
	{
		UClass* Class = AC01_LineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartJump", &AC01_LineTrace::execStartJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics
	{
		struct C01_LineTrace_eventStartJump_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_LineTrace_eventStartJump_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_LineTrace_eventStartJump_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC01_LineTrace, nullptr, "StartJump", nullptr, nullptr, sizeof(C01_LineTrace_eventStartJump_Parms), Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC01_LineTrace_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC01_LineTrace_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC01_LineTrace_NoRegister()
	{
		return AC01_LineTrace::StaticClass();
	}
	struct Z_Construct_UClass_AC01_LineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLineTraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLineTraceResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC01_LineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC01_LineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC01_LineTrace_StartJump, "StartJump" }, // 2046264461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_LineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "05_LineTrace/C01_LineTrace.h" },
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "C01_LineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_LineTrace, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C01_LineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_LineTrace, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_OnLineTraceResult_MetaData[] = {
		{ "ModuleRelativePath", "05_LineTrace/C01_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_OnLineTraceResult = { "OnLineTraceResult", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_LineTrace, OnLineTraceResult), Z_Construct_UDelegateFunction_UE_CPP_LineTraceResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_OnLineTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_OnLineTraceResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC01_LineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_LineTrace_Statics::NewProp_OnLineTraceResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC01_LineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC01_LineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC01_LineTrace_Statics::ClassParams = {
		&AC01_LineTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC01_LineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC01_LineTrace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC01_LineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_LineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC01_LineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC01_LineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC01_LineTrace, 4010009295);
	template<> UE_CPP_API UClass* StaticClass<AC01_LineTrace>()
	{
		return AC01_LineTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC01_LineTrace(Z_Construct_UClass_AC01_LineTrace, &AC01_LineTrace::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC01_LineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC01_LineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
