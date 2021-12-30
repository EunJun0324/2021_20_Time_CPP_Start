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
#ifdef UE_CPP_C05_Trigger_generated_h
#error "C05_Trigger.generated.h already included, missing '#pragma once' in C05_Trigger.h"
#endif
#define UE_CPP_C05_Trigger_generated_h

#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC05_Trigger(); \
	friend struct Z_Construct_UClass_AC05_Trigger_Statics; \
public: \
	DECLARE_CLASS(AC05_Trigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC05_Trigger)


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAC05_Trigger(); \
	friend struct Z_Construct_UClass_AC05_Trigger_Statics; \
public: \
	DECLARE_CLASS(AC05_Trigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC05_Trigger)


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC05_Trigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC05_Trigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC05_Trigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC05_Trigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC05_Trigger(AC05_Trigger&&); \
	NO_API AC05_Trigger(const AC05_Trigger&); \
public:


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC05_Trigger(AC05_Trigger&&); \
	NO_API AC05_Trigger(const AC05_Trigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC05_Trigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC05_Trigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC05_Trigger)


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AC05_Trigger, Root); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AC05_Trigger, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC05_Trigger, Text); }


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_10_PROLOG
#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_INCLASS \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC05_Trigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_03_Collision_C05_Trigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
