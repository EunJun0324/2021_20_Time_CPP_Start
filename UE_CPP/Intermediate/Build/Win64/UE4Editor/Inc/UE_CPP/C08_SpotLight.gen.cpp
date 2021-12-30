// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/03_Collision/C08_SpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC08_SpotLight() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AC08_SpotLight_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC08_SpotLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC08_SpotLight::execOnLight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLight(Z_Param_InIndex,Z_Param_InColor);
		P_NATIVE_END;
	}
	void AC08_SpotLight::StaticRegisterNativesAC08_SpotLight()
	{
		UClass* Class = AC08_SpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLight", &AC08_SpotLight::execOnLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics
	{
		struct C08_SpotLight_eventOnLight_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C08_SpotLight_eventOnLight_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C08_SpotLight_eventOnLight_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C08_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC08_SpotLight, nullptr, "OnLight", nullptr, nullptr, sizeof(C08_SpotLight_eventOnLight_Parms), Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC08_SpotLight_OnLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC08_SpotLight_OnLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC08_SpotLight_NoRegister()
	{
		return AC08_SpotLight::StaticClass();
	}
	struct Z_Construct_UClass_AC08_SpotLight_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC08_SpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC08_SpotLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC08_SpotLight_OnLight, "OnLight" }, // 2793273917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC08_SpotLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C08_SpotLight.h" },
		{ "ModuleRelativePath", "03_Collision/C08_SpotLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "C08_SpotLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C08_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC08_SpotLight, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C08_SpotLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C08_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC08_SpotLight, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_SpotLights_MetaData[] = {
		{ "Category", "C08_SpotLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C08_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_SpotLights = { "SpotLights", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SpotLights, AC08_SpotLight), STRUCT_OFFSET(AC08_SpotLight, SpotLights), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_SpotLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_SpotLights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC08_SpotLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC08_SpotLight_Statics::NewProp_SpotLights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC08_SpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC08_SpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC08_SpotLight_Statics::ClassParams = {
		&AC08_SpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC08_SpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC08_SpotLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC08_SpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC08_SpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC08_SpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC08_SpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC08_SpotLight, 196527313);
	template<> UE_CPP_API UClass* StaticClass<AC08_SpotLight>()
	{
		return AC08_SpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC08_SpotLight(Z_Construct_UClass_AC08_SpotLight, &AC08_SpotLight::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC08_SpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC08_SpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
