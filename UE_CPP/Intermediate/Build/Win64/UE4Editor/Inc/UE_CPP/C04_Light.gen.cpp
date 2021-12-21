// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/03_Collision/C04_Light.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC04_Light() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AC04_Light_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC04_Light();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC04_Light::execOnRandomLight)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->OnRandomLight(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC04_Light::execOffLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC04_Light::execOnLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLight();
		P_NATIVE_END;
	}
	void AC04_Light::StaticRegisterNativesAC04_Light()
	{
		UClass* Class = AC04_Light::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OffLight", &AC04_Light::execOffLight },
			{ "OnLight", &AC04_Light::execOnLight },
			{ "OnRandomLight", &AC04_Light::execOnRandomLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC04_Light_OffLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC04_Light_OffLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC04_Light_OffLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC04_Light, nullptr, "OffLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC04_Light_OffLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC04_Light_OffLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC04_Light_OffLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC04_Light_OffLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC04_Light_OnLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC04_Light_OnLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC04_Light_OnLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC04_Light, nullptr, "OnLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC04_Light_OnLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC04_Light_OnLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC04_Light_OnLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC04_Light_OnLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics
	{
		struct C04_Light_eventOnRandomLight_Parms
		{
			FLinearColor InColor;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C04_Light_eventOnRandomLight_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C04_Light_eventOnRandomLight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC04_Light, nullptr, "OnRandomLight", nullptr, nullptr, sizeof(C04_Light_eventOnRandomLight_Parms), Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC04_Light_OnRandomLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC04_Light_OnRandomLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC04_Light_NoRegister()
	{
		return AC04_Light::StaticClass();
	}
	struct Z_Construct_UClass_AC04_Light_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC04_Light_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC04_Light_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC04_Light_OffLight, "OffLight" }, // 914291647
		{ &Z_Construct_UFunction_AC04_Light_OnLight, "OnLight" }, // 2074472268
		{ &Z_Construct_UFunction_AC04_Light_OnRandomLight, "OnRandomLight" }, // 1127239591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C04_Light.h" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "C04_Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC04_Light_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC04_Light, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "C04_Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC04_Light_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC04_Light, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C04_Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC04_Light_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC04_Light, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "C04_Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC04_Light, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight2_MetaData[] = {
		{ "Category", "C04_Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C04_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight2 = { "PointLight2", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC04_Light, PointLight2), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC04_Light_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC04_Light_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC04_Light_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC04_Light_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC04_Light_Statics::NewProp_PointLight2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC04_Light_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC04_Light>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC04_Light_Statics::ClassParams = {
		&AC04_Light::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC04_Light_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC04_Light_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC04_Light_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC04_Light()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC04_Light_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC04_Light, 2449076313);
	template<> UE_CPP_API UClass* StaticClass<AC04_Light>()
	{
		return AC04_Light::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC04_Light(Z_Construct_UClass_AC04_Light, &AC04_Light::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC04_Light"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC04_Light);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
