// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/Utilities/CHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHelpers() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_UCHelpers_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UCHelpers();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	void UCHelpers::StaticRegisterNativesUCHelpers()
	{
	}
	UClass* Z_Construct_UClass_UCHelpers_NoRegister()
	{
		return UCHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UCHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHelpers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Utilities/CHelpers.h" },
		{ "ModuleRelativePath", "Utilities/CHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCHelpers_Statics::ClassParams = {
		&UCHelpers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCHelpers, 2093379081);
	template<> UE_CPP_API UClass* StaticClass<UCHelpers>()
	{
		return UCHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCHelpers(Z_Construct_UClass_UCHelpers, &UCHelpers::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UCHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
