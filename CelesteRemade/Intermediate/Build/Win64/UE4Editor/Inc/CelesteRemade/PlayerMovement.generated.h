// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CELESTEREMADE_PlayerMovement_generated_h
#error "PlayerMovement.generated.h already included, missing '#pragma once' in PlayerMovement.h"
#endif
#define CELESTEREMADE_PlayerMovement_generated_h

#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_RPC_WRAPPERS
#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMovement(); \
	friend struct Z_Construct_UClass_UPlayerMovement_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CelesteRemade"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovement)


#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMovement(); \
	friend struct Z_Construct_UClass_UPlayerMovement_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CelesteRemade"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovement)


#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovement(UPlayerMovement&&); \
	NO_API UPlayerMovement(const UPlayerMovement&); \
public:


#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovement(UPlayerMovement&&); \
	NO_API UPlayerMovement(const UPlayerMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerMovement)


#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_PRIVATE_PROPERTY_OFFSET
#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_10_PROLOG
#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_PRIVATE_PROPERTY_OFFSET \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_RPC_WRAPPERS \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_INCLASS \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_PRIVATE_PROPERTY_OFFSET \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_INCLASS_NO_PURE_DECLS \
	CelesteRemade_Source_CelesteRemade_PlayerMovement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CELESTEREMADE_API UClass* StaticClass<class UPlayerMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CelesteRemade_Source_CelesteRemade_PlayerMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
