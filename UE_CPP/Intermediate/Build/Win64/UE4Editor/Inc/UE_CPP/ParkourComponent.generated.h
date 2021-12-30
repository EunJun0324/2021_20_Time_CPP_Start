// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_CPP_ParkourComponent_generated_h
#error "ParkourComponent.generated.h already included, missing '#pragma once' in ParkourComponent.h"
#endif
#define UE_CPP_ParkourComponent_generated_h

#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParkourData_Statics; \
	UE_CPP_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UE_CPP_API UScriptStruct* StaticStruct<struct FParkourData>();

#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_RPC_WRAPPERS
#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParkourComponent(); \
	friend struct Z_Construct_UClass_UParkourComponent_Statics; \
public: \
	DECLARE_CLASS(UParkourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UParkourComponent)


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUParkourComponent(); \
	friend struct Z_Construct_UClass_UParkourComponent_Statics; \
public: \
	DECLARE_CLASS(UParkourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UParkourComponent)


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParkourComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParkourComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParkourComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParkourComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParkourComponent(UParkourComponent&&); \
	NO_API UParkourComponent(const UParkourComponent&); \
public:


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParkourComponent(UParkourComponent&&); \
	NO_API UParkourComponent(const UParkourComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParkourComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParkourComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParkourComponent)


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataTable() { return STRUCT_OFFSET(UParkourComponent, DataTable); }


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_48_PROLOG
#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_INCLASS \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class UParkourComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_08_Parkour_ParkourComponent_h


#define FOREACH_ENUM_EPARKOURTYPE(op) \
	op(EParkourType::Climb) \
	op(EParkourType::Fall) \
	op(EParkourType::Slide) \
	op(EParkourType::Short) \
	op(EParkourType::Normal) \
	op(EParkourType::Wall) \
	op(EParkourType::Max) 

enum class EParkourType : uint8;
template<> UE_CPP_API UEnum* StaticEnum<EParkourType>();

#define FOREACH_ENUM_EPARKOURARROWTYPE(op) \
	op(EParkourArrowType::Center) \
	op(EParkourArrowType::Ceil) \
	op(EParkourArrowType::Floor) \
	op(EParkourArrowType::Left) \
	op(EParkourArrowType::Right) \
	op(EParkourArrowType::Land) \
	op(EParkourArrowType::Max) 

enum class EParkourArrowType : uint8;
template<> UE_CPP_API UEnum* StaticEnum<EParkourArrowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
