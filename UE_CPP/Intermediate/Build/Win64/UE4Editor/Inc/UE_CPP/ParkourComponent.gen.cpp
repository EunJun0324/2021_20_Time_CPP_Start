// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/08_Parkour/ParkourComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourComponent() {}
// Cross Module References
	UE_CPP_API UEnum* Z_Construct_UEnum_UE_CPP_EParkourType();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
	UE_CPP_API UEnum* Z_Construct_UEnum_UE_CPP_EParkourArrowType();
	UE_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FParkourData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UParkourComponent_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UParkourComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static UEnum* EParkourType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_CPP_EParkourType, Z_Construct_UPackage__Script_UE_CPP(), TEXT("EParkourType"));
		}
		return Singleton;
	}
	template<> UE_CPP_API UEnum* StaticEnum<EParkourType>()
	{
		return EParkourType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParkourType(EParkourType_StaticEnum, TEXT("/Script/UE_CPP"), TEXT("EParkourType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_CPP_EParkourType_Hash() { return 3518103177U; }
	UEnum* Z_Construct_UEnum_UE_CPP_EParkourType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_CPP();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParkourType"), 0, Get_Z_Construct_UEnum_UE_CPP_EParkourType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParkourType::Climb", (int64)EParkourType::Climb },
				{ "EParkourType::Fall", (int64)EParkourType::Fall },
				{ "EParkourType::Slide", (int64)EParkourType::Slide },
				{ "EParkourType::Short", (int64)EParkourType::Short },
				{ "EParkourType::Normal", (int64)EParkourType::Normal },
				{ "EParkourType::Wall", (int64)EParkourType::Wall },
				{ "EParkourType::Max", (int64)EParkourType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Climb.Name", "EParkourType::Climb" },
				{ "Fall.Name", "EParkourType::Fall" },
				{ "Max.Name", "EParkourType::Max" },
				{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
				{ "Normal.Name", "EParkourType::Normal" },
				{ "Short.Name", "EParkourType::Short" },
				{ "Slide.Name", "EParkourType::Slide" },
				{ "Wall.Name", "EParkourType::Wall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_CPP,
				nullptr,
				"EParkourType",
				"EParkourType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParkourArrowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_CPP_EParkourArrowType, Z_Construct_UPackage__Script_UE_CPP(), TEXT("EParkourArrowType"));
		}
		return Singleton;
	}
	template<> UE_CPP_API UEnum* StaticEnum<EParkourArrowType>()
	{
		return EParkourArrowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParkourArrowType(EParkourArrowType_StaticEnum, TEXT("/Script/UE_CPP"), TEXT("EParkourArrowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_CPP_EParkourArrowType_Hash() { return 346136003U; }
	UEnum* Z_Construct_UEnum_UE_CPP_EParkourArrowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_CPP();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParkourArrowType"), 0, Get_Z_Construct_UEnum_UE_CPP_EParkourArrowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParkourArrowType::Center", (int64)EParkourArrowType::Center },
				{ "EParkourArrowType::Ceil", (int64)EParkourArrowType::Ceil },
				{ "EParkourArrowType::Floor", (int64)EParkourArrowType::Floor },
				{ "EParkourArrowType::Left", (int64)EParkourArrowType::Left },
				{ "EParkourArrowType::Right", (int64)EParkourArrowType::Right },
				{ "EParkourArrowType::Land", (int64)EParkourArrowType::Land },
				{ "EParkourArrowType::Max", (int64)EParkourArrowType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Ceil.Name", "EParkourArrowType::Ceil" },
				{ "Center.Name", "EParkourArrowType::Center" },
				{ "Floor.Name", "EParkourArrowType::Floor" },
				{ "Land.Name", "EParkourArrowType::Land" },
				{ "Left.Name", "EParkourArrowType::Left" },
				{ "Max.Name", "EParkourArrowType::Max" },
				{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
				{ "Right.Name", "EParkourArrowType::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_CPP,
				nullptr,
				"EParkourArrowType",
				"EParkourArrowType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FParkourData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FParkourData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FParkourData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE_CPP_API uint32 Get_Z_Construct_UScriptStruct_FParkourData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParkourData, Z_Construct_UPackage__Script_UE_CPP(), TEXT("ParkourData"), sizeof(FParkourData), Get_Z_Construct_UScriptStruct_FParkourData_Hash());
	}
	return Singleton;
}
template<> UE_CPP_API UScriptStruct* StaticStruct<FParkourData>()
{
	return FParkourData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParkourData(FParkourData::StaticStruct, TEXT("/Script/UE_CPP"), TEXT("ParkourData"), false, nullptr, nullptr);
static struct FScriptStruct_UE_CPP_StaticRegisterNativesFParkourData
{
	FScriptStruct_UE_CPP_StaticRegisterNativesFParkourData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParkourData")),new UScriptStruct::TCppStructOps<FParkourData>);
	}
} ScriptStruct_UE_CPP_StaticRegisterNativesFParkourData;
	struct Z_Construct_UScriptStruct_FParkourData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParkourData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParkourData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, Type), Z_Construct_UEnum_UE_CPP_EParkourType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_PlayRatio_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_PlayRatio = { "PlayRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, PlayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_PlayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_PlayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "ParkourData" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourData, Extent), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParkourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_PlayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourData_Statics::NewProp_Extent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParkourData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ParkourData",
		sizeof(FParkourData),
		alignof(FParkourData),
		Z_Construct_UScriptStruct_FParkourData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParkourData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParkourData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE_CPP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParkourData"), sizeof(FParkourData), Get_Z_Construct_UScriptStruct_FParkourData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParkourData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParkourData_Hash() { return 2655137755U; }
	void UParkourComponent::StaticRegisterNativesUParkourComponent()
	{
	}
	UClass* Z_Construct_UClass_UParkourComponent_NoRegister()
	{
		return UParkourComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParkourComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParkourComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "08_Parkour/ParkourComponent.h" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "08_Parkour/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParkourComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParkourComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParkourComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParkourComponent_Statics::ClassParams = {
		&UParkourComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParkourComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParkourComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParkourComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParkourComponent, 1897422681);
	template<> UE_CPP_API UClass* StaticClass<UParkourComponent>()
	{
		return UParkourComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParkourComponent(Z_Construct_UClass_UParkourComponent, &UParkourComponent::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UParkourComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParkourComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
