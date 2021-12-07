// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/UE_CPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_CPPGameModeBase() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AUE_CPPGameModeBase_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AUE_CPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	void AUE_CPPGameModeBase::StaticRegisterNativesAUE_CPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE_CPPGameModeBase_NoRegister()
	{
		return AUE_CPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE_CPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_CPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_CPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE_CPPGameModeBase.h" },
		{ "ModuleRelativePath", "UE_CPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_CPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_CPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE_CPPGameModeBase_Statics::ClassParams = {
		&AUE_CPPGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE_CPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE_CPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_CPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE_CPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_CPPGameModeBase, 271753578);
	template<> UE_CPP_API UClass* StaticClass<AUE_CPPGameModeBase>()
	{
		return AUE_CPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_CPPGameModeBase(Z_Construct_UClass_AUE_CPPGameModeBase, &AUE_CPPGameModeBase::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AUE_CPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_CPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
