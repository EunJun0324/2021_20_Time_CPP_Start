// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/07_TPS/C_AnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_AnimNotifyState() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_UC_AnimNotifyState_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UC_AnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	void UC_AnimNotifyState::StaticRegisterNativesUC_AnimNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UC_AnimNotifyState_NoRegister()
	{
		return UC_AnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UC_AnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnequip_MetaData[];
#endif
		static void NewProp_bUnequip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnequip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_AnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "07_TPS/C_AnimNotifyState.h" },
		{ "ModuleRelativePath", "07_TPS/C_AnimNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip_MetaData[] = {
		{ "Category", "C_AnimNotifyState" },
		{ "ModuleRelativePath", "07_TPS/C_AnimNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip_SetBit(void* Obj)
	{
		((UC_AnimNotifyState*)Obj)->bUnequip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip = { "bUnequip", nullptr, (EPropertyFlags)0x0040000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UC_AnimNotifyState), &Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_AnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AnimNotifyState_Statics::NewProp_bUnequip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_AnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_AnimNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_AnimNotifyState_Statics::ClassParams = {
		&UC_AnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UC_AnimNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UC_AnimNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_AnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_AnimNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_AnimNotifyState, 3441014831);
	template<> UE_CPP_API UClass* StaticClass<UC_AnimNotifyState>()
	{
		return UC_AnimNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_AnimNotifyState(Z_Construct_UClass_UC_AnimNotifyState, &UC_AnimNotifyState::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UC_AnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_AnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
