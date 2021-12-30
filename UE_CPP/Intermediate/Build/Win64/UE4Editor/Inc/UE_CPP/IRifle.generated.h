// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_CPP_IRifle_generated_h
#error "IRifle.generated.h already included, missing '#pragma once' in IRifle.h"
#endif
#define UE_CPP_IRifle_generated_h

#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_RPC_WRAPPERS
#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE_CPP_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE_CPP_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE_CPP_API UIRifle(UIRifle&&); \
	UE_CPP_API UIRifle(const UIRifle&); \
public:


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE_CPP_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE_CPP_API UIRifle(UIRifle&&); \
	UE_CPP_API UIRifle(const UIRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE_CPP_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle)


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIRifle(); \
	friend struct Z_Construct_UClass_UIRifle_Statics; \
public: \
	DECLARE_CLASS(UIRifle, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UE_CPP"), UE_CPP_API) \
	DECLARE_SERIALIZER(UIRifle)


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_07_TPS_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class UIRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_07_TPS_IRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
