// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/07_TPS/C_UserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_UserWidget() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_UC_UserWidget_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UC_UserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	static FName NAME_UC_UserWidget_Off = FName(TEXT("Off"));
	void UC_UserWidget::Off()
	{
		ProcessEvent(FindFunctionChecked(NAME_UC_UserWidget_Off),NULL);
	}
	static FName NAME_UC_UserWidget_On = FName(TEXT("On"));
	void UC_UserWidget::On()
	{
		ProcessEvent(FindFunctionChecked(NAME_UC_UserWidget_On),NULL);
	}
	void UC_UserWidget::StaticRegisterNativesUC_UserWidget()
	{
	}
	struct Z_Construct_UFunction_UC_UserWidget_Off_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_UserWidget_Off_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "07_TPS/C_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_UserWidget_Off_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_UserWidget, nullptr, "Off", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_UserWidget_Off_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_UserWidget_Off_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_UserWidget_Off()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_UserWidget_Off_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UC_UserWidget_On_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_UserWidget_On_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "07_TPS/C_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_UserWidget_On_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_UserWidget, nullptr, "On", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_UserWidget_On_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_UserWidget_On_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_UserWidget_On()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_UserWidget_On_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UC_UserWidget_NoRegister()
	{
		return UC_UserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UC_UserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_UserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_UserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_UserWidget_Off, "Off" }, // 3883367337
		{ &Z_Construct_UFunction_UC_UserWidget_On, "On" }, // 3672059017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_UserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "07_TPS/C_UserWidget.h" },
		{ "ModuleRelativePath", "07_TPS/C_UserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_UserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_UserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_UserWidget_Statics::ClassParams = {
		&UC_UserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UC_UserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_UserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_UserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_UserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_UserWidget, 753265491);
	template<> UE_CPP_API UClass* StaticClass<UC_UserWidget>()
	{
		return UC_UserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_UserWidget(Z_Construct_UClass_UC_UserWidget, &UC_UserWidget::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UC_UserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_UserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
