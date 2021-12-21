// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FLinearColor;
#ifdef UE_CPP_C01_LineTrace_generated_h
#error "C01_LineTrace.generated.h already included, missing '#pragma once' in C01_LineTrace.h"
#endif
#define UE_CPP_C01_LineTrace_generated_h

#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_7_DELEGATE \
struct _Script_UE_CPP_eventLineTraceResult_Parms \
{ \
	AActor* InActor; \
	FLinearColor InColor; \
}; \
static inline void FLineTraceResult_DelegateWrapper(const FMulticastScriptDelegate& LineTraceResult, AActor* InActor, FLinearColor InColor) \
{ \
	_Script_UE_CPP_eventLineTraceResult_Parms Parms; \
	Parms.InActor=InActor; \
	Parms.InColor=InColor; \
	LineTraceResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartJump);


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartJump);


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC01_LineTrace(); \
	friend struct Z_Construct_UClass_AC01_LineTrace_Statics; \
public: \
	DECLARE_CLASS(AC01_LineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC01_LineTrace)


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAC01_LineTrace(); \
	friend struct Z_Construct_UClass_AC01_LineTrace_Statics; \
public: \
	DECLARE_CLASS(AC01_LineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC01_LineTrace)


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC01_LineTrace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC01_LineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC01_LineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC01_LineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC01_LineTrace(AC01_LineTrace&&); \
	NO_API AC01_LineTrace(const AC01_LineTrace&); \
public:


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC01_LineTrace(AC01_LineTrace&&); \
	NO_API AC01_LineTrace(const AC01_LineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC01_LineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC01_LineTrace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC01_LineTrace)


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AC01_LineTrace, Root); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC01_LineTrace, Text); } \
	FORCEINLINE static uint32 __PPO__OnLineTraceResult() { return STRUCT_OFFSET(AC01_LineTrace, OnLineTraceResult); }


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_9_PROLOG
#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_INCLASS \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC01_LineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_05_LineTrace_C01_LineTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
