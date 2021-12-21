// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_CPP_C_AnimInstance_generated_h
#error "C_AnimInstance.generated.h already included, missing '#pragma once' in C_AnimInstance.h"
#endif
#define UE_CPP_C_AnimInstance_generated_h

#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_RPC_WRAPPERS
#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_AnimInstance(); \
	friend struct Z_Construct_UClass_UC_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UC_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UC_AnimInstance)


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUC_AnimInstance(); \
	friend struct Z_Construct_UClass_UC_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UC_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UC_AnimInstance)


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AnimInstance(UC_AnimInstance&&); \
	NO_API UC_AnimInstance(const UC_AnimInstance&); \
public:


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AnimInstance(UC_AnimInstance&&); \
	NO_API UC_AnimInstance(const UC_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_AnimInstance)


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UC_AnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UC_AnimInstance, Direction); }


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_C_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class UC_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_C_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
