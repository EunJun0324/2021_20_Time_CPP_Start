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
struct FVector;
struct FHitResult;
#ifdef UE_CPP_C_Bullet_generated_h
#error "C_Bullet.generated.h already included, missing '#pragma once' in C_Bullet.h"
#endif
#define UE_CPP_C_Bullet_generated_h

#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Bullet(); \
	friend struct Z_Construct_UClass_AC_Bullet_Statics; \
public: \
	DECLARE_CLASS(AC_Bullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Bullet)


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAC_Bullet(); \
	friend struct Z_Construct_UClass_AC_Bullet_Statics; \
public: \
	DECLARE_CLASS(AC_Bullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Bullet)


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Bullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Bullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Bullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Bullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Bullet(AC_Bullet&&); \
	NO_API AC_Bullet(const AC_Bullet&); \
public:


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Bullet(AC_Bullet&&); \
	NO_API AC_Bullet(const AC_Bullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Bullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Bullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Bullet)


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Capsule() { return STRUCT_OFFSET(AC_Bullet, Capsule); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AC_Bullet, Mesh); } \
	FORCEINLINE static uint32 __PPO__Projectile() { return STRUCT_OFFSET(AC_Bullet, Projectile); }


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC_Bullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_07_TPS_C_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
