// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/03_Collision/C01_BeginOverlap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC01_BeginOverlap() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AC01_BeginOverlap_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC01_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC01_BeginOverlap::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlapedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC01_BeginOverlap::execOnBeginOverlap2)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap2(Z_Param_OverlapedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC01_BeginOverlap::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlapedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AC01_BeginOverlap::StaticRegisterNativesAC01_BeginOverlap()
	{
		UClass* Class = AC01_BeginOverlap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AC01_BeginOverlap::execOnBeginOverlap },
			{ "OnBeginOverlap2", &AC01_BeginOverlap::execOnBeginOverlap2 },
			{ "OnEndOverlap", &AC01_BeginOverlap::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics
	{
		struct C01_BeginOverlap_eventOnBeginOverlap_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnBeginOverlap_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::NewProp_OverlapedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC01_BeginOverlap, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(C01_BeginOverlap_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics
	{
		struct C01_BeginOverlap_eventOnBeginOverlap2_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnBeginOverlap2_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnBeginOverlap2_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::NewProp_OverlapedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC01_BeginOverlap, nullptr, "OnBeginOverlap2", nullptr, nullptr, sizeof(C01_BeginOverlap_eventOnBeginOverlap2_Parms), Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics
	{
		struct C01_BeginOverlap_eventOnEndOverlap_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnEndOverlap_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C01_BeginOverlap_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::NewProp_OverlapedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC01_BeginOverlap, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(C01_BeginOverlap_eventOnEndOverlap_Parms), Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC01_BeginOverlap_NoRegister()
	{
		return AC01_BeginOverlap::StaticClass();
	}
	struct Z_Construct_UClass_AC01_BeginOverlap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC01_BeginOverlap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC01_BeginOverlap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap, "OnBeginOverlap" }, // 4270558427
		{ &Z_Construct_UFunction_AC01_BeginOverlap_OnBeginOverlap2, "OnBeginOverlap2" }, // 227394697
		{ &Z_Construct_UFunction_AC01_BeginOverlap_OnEndOverlap, "OnEndOverlap" }, // 2003847539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_BeginOverlap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C01_BeginOverlap.h" },
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "C01_BeginOverlap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_BeginOverlap, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "C01_BeginOverlap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_BeginOverlap, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_TextRender_MetaData[] = {
		{ "Category", "C01_BeginOverlap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C01_BeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_BeginOverlap, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_TextRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_TextRender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC01_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_BeginOverlap_Statics::NewProp_TextRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC01_BeginOverlap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC01_BeginOverlap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC01_BeginOverlap_Statics::ClassParams = {
		&AC01_BeginOverlap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC01_BeginOverlap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC01_BeginOverlap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC01_BeginOverlap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_BeginOverlap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC01_BeginOverlap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC01_BeginOverlap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC01_BeginOverlap, 1792061727);
	template<> UE_CPP_API UClass* StaticClass<AC01_BeginOverlap>()
	{
		return AC01_BeginOverlap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC01_BeginOverlap(Z_Construct_UClass_AC01_BeginOverlap, &AC01_BeginOverlap::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC01_BeginOverlap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC01_BeginOverlap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
