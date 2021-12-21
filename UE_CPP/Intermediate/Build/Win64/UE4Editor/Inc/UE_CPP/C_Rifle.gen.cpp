// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/07_TPS/C_Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Rifle() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_AC_Rifle_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC_Rifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AC_Rifle::StaticRegisterNativesAC_Rifle()
	{
	}
	UClass* Z_Construct_UClass_AC_Rifle_NoRegister()
	{
		return AC_Rifle::StaticClass();
	}
	struct Z_Construct_UClass_AC_Rifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsterSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HolsterSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UngrabMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UngrabMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Rifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "07_TPS/C_Rifle.h" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket = { "HolsterSocket", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, HolsterSocket), METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket = { "HandSocket", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, HandSocket), METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage = { "GrabMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, GrabMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage = { "UngrabMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, UngrabMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Rifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Rifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Rifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Rifle_Statics::ClassParams = {
		&AC_Rifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_Rifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Rifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Rifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Rifle, 672559052);
	template<> UE_CPP_API UClass* StaticClass<AC_Rifle>()
	{
		return AC_Rifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Rifle(Z_Construct_UClass_AC_Rifle, &AC_Rifle::StaticClass, TEXT("/Script/UE_CPP"), TEXT("AC_Rifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Rifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
