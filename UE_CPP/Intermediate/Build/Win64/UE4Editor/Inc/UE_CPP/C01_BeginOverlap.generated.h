// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UE_CPP_C01_BeginOverlap_generated_h
#error "C01_BeginOverlap.generated.h already included, missing '#pragma once' in C01_BeginOverlap.h"
#endif
#define UE_CPP_C01_BeginOverlap_generated_h

#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap2); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap2); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC01_BeginOverlap(); \
	friend struct Z_Construct_UClass_AC01_BeginOverlap_Statics; \
public: \
	DECLARE_CLASS(AC01_BeginOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC01_BeginOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAC01_BeginOverlap(); \
	friend struct Z_Construct_UClass_AC01_BeginOverlap_Statics; \
public: \
	DECLARE_CLASS(AC01_BeginOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC01_BeginOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC01_BeginOverlap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC01_BeginOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC01_BeginOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC01_BeginOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC01_BeginOverlap(AC01_BeginOverlap&&); \
	NO_API AC01_BeginOverlap(const AC01_BeginOverlap&); \
public:


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC01_BeginOverlap(AC01_BeginOverlap&&); \
	NO_API AC01_BeginOverlap(const AC01_BeginOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC01_BeginOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC01_BeginOverlap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC01_BeginOverlap)


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AC01_BeginOverlap, Box); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AC01_BeginOverlap, Root); } \
	FORCEINLINE static uint32 __PPO__TextRender() { return STRUCT_OFFSET(AC01_BeginOverlap, TextRender); }


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC01_BeginOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_03_Collision_C01_BeginOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
