// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/03_Collision/C07_Box.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC07_Box() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AC07_Box_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC07_Box();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC07_Box::execOnPhysics)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhysics(Z_Param_InIndex,Z_Param_InColor);
		P_NATIVE_END;
	}
	void AC07_Box::StaticRegisterNativesAC07_Box()
	{
		UClass* Class = AC07_Box::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPhysics", &AC07_Box::execOnPhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC07_Box_OnPhysics_Statics
	{
		struct C07_Box_eventOnPhysics_Parms
		{
			int32 InIndex;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C07_Box_eventOnPhysics_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C07_Box_eventOnPhysics_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C07_Box.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC07_Box, nullptr, "OnPhysics", nullptr, nullptr, sizeof(C07_Box_eventOnPhysics_Parms), Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC07_Box_OnPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC07_Box_OnPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC07_Box_NoRegister()
	{
		return AC07_Box::StaticClass();
	}
	struct Z_Construct_UClass_AC07_Box_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC07_Box_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC07_Box_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC07_Box_OnPhysics, "OnPhysics" }, // 2261232189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC07_Box_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C07_Box.h" },
		{ "ModuleRelativePath", "03_Collision/C07_Box.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC07_Box_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "C07_Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C07_Box.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC07_Box_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC07_Box, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC07_Box_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC07_Box_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC07_Box_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C07_Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C07_Box.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC07_Box_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC07_Box, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC07_Box_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC07_Box_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC07_Box_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "C07_Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C07_Box.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC07_Box_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Meshes, AC07_Box), STRUCT_OFFSET(AC07_Box, Meshes), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC07_Box_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC07_Box_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC07_Box_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC07_Box_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC07_Box_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC07_Box_Statics::NewProp_Meshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC07_Box_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC07_Box>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC07_Box_Statics::ClassParams = {
		&AC07_Box::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC07_Box_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC07_Box_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC07_Box_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC07_Box_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC07_Box()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC07_Box_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC07_Box, 4217282767);
	template<> UE_CPP_API UClass* StaticClass<AC07_Box>()
	{
		return AC07_Box::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC07_Box(Z_Construct_UClass_AC07_Box, &AC07_Box::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC07_Box"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC07_Box);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
