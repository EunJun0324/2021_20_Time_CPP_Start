// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECPP/01_Spawn/C01_Property.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC01_Property() {}
// Cross Module References
	UECPP_API UClass* Z_Construct_UClass_AC01_Property_NoRegister();
	UECPP_API UClass* Z_Construct_UClass_AC01_Property();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UECPP();
// End Cross Module References
	void AC01_Property::StaticRegisterNativesAC01_Property()
	{
	}
	UClass* Z_Construct_UClass_AC01_Property_NoRegister()
	{
		return AC01_Property::StaticClass();
	}
	struct Z_Construct_UClass_AC01_Property_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC01_Property_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UECPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Property_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "01_Spawn/C01_Property.h" },
		{ "ModuleRelativePath", "01_Spawn/C01_Property.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC01_Property_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC01_Property>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC01_Property_Statics::ClassParams = {
		&AC01_Property::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC01_Property_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Property_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC01_Property()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC01_Property_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC01_Property, 3019643377);
	template<> UECPP_API UClass* StaticClass<AC01_Property>()
	{
		return AC01_Property::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC01_Property(Z_Construct_UClass_AC01_Property, &AC01_Property::StaticClass, TEXT("/Script/UECPP"), TEXT("AC01_Property"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC01_Property);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
