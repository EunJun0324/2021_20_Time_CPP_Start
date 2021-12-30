// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UE_CPP_C02_ComponentOverlap_generated_h
#error "C02_ComponentOverlap.generated.h already included, missing '#pragma once' in C02_ComponentOverlap.h"
#endif
#define UE_CPP_C02_ComponentOverlap_generated_h

#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC02_ComponentOverlap(); \
	friend struct Z_Construct_UClass_AC02_ComponentOverlap_Statics; \
public: \
	DECLARE_CLASS(AC02_ComponentOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC02_ComponentOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAC02_ComponentOverlap(); \
	friend struct Z_Construct_UClass_AC02_ComponentOverlap_Statics; \
public: \
	DECLARE_CLASS(AC02_ComponentOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC02_ComponentOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC02_ComponentOverlap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC02_ComponentOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC02_ComponentOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC02_ComponentOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC02_ComponentOverlap(AC02_ComponentOverlap&&); \
	NO_API AC02_ComponentOverlap(const AC02_ComponentOverlap&); \
public:


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC02_ComponentOverlap(AC02_ComponentOverlap&&); \
	NO_API AC02_ComponentOverlap(const AC02_ComponentOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC02_ComponentOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC02_ComponentOverlap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC02_ComponentOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AC02_ComponentOverlap, Root); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AC02_ComponentOverlap, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC02_ComponentOverlap, Text); } \
	FORCEINLINE static uint32 __PPO__PointLight() { return STRUCT_OFFSET(AC02_ComponentOverlap, PointLight); }


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC02_ComponentOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_03_Collision_C02_ComponentOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
