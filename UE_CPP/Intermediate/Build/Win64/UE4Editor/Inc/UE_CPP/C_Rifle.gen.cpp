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
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_AC_Bullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC_Rifle::execZooming)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Zooming(Z_Param_Output);
		P_NATIVE_END;
	}
	void AC_Rifle::StaticRegisterNativesAC_Rifle()
	{
		UClass* Class = AC_Rifle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Zooming", &AC_Rifle::execZooming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_Rifle_Zooming_Statics
	{
		struct C_Rifle_eventZooming_Parms
		{
			float Output;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Rifle_Zooming_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_Rifle_eventZooming_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Rifle_Zooming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Rifle_Zooming_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Rifle_Zooming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Rifle_Zooming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Rifle, nullptr, "Zooming", nullptr, nullptr, sizeof(C_Rifle_eventZooming_Parms), Z_Construct_UFunction_AC_Rifle_Zooming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Rifle_Zooming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Rifle_Zooming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Rifle_Zooming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Rifle_Zooming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_Rifle_Zooming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC_Rifle_NoRegister()
	{
		return AC_Rifle::StaticClass();
	}
	struct Z_Construct_UClass_AC_Rifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlashParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactDecal;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_Rifle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Rifle_Zooming, "Zooming" }, // 2830218530
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_AimDistance_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_AimDistance = { "AimDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, AimDistance), METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_AimDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_AimDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, CameraShakeClass), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_CameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_MuzzleSoundCue_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_MuzzleSoundCue = { "MuzzleSoundCue", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, MuzzleSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_MuzzleSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_MuzzleSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_FlashParticle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_FlashParticle = { "FlashParticle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, FlashParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_FlashParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_FlashParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_EjectParticle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_EjectParticle = { "EjectParticle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, EjectParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_EjectParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_EjectParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, BulletClass), Z_Construct_UClass_AC_Bullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactParticle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactDecal_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactDecal = { "ImpactDecal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, ImpactDecal), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "C_Rifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "07_TPS/C_Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Rifle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Rifle_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Rifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_HolsterSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_HandSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_GrabMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_UngrabMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_AimDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_CameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_MuzzleSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_FlashParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_EjectParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Rifle_Statics::NewProp_ImpactDecal,
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
		FuncInfo,
		Z_Construct_UClass_AC_Rifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AC_Rifle, 242158052);
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
