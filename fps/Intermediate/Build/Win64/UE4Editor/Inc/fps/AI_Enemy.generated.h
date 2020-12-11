// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_AI_Enemy_generated_h
#error "AI_Enemy.generated.h already included, missing '#pragma once' in AI_Enemy.h"
#endif
#define FPS_AI_Enemy_generated_h

#define fps_Source_fps_AI_Enemy_h_12_SPARSE_DATA
#define fps_Source_fps_AI_Enemy_h_12_RPC_WRAPPERS
#define fps_Source_fps_AI_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define fps_Source_fps_AI_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_Enemy(); \
	friend struct Z_Construct_UClass_AAI_Enemy_Statics; \
public: \
	DECLARE_CLASS(AAI_Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fps"), NO_API) \
	DECLARE_SERIALIZER(AAI_Enemy)


#define fps_Source_fps_AI_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAI_Enemy(); \
	friend struct Z_Construct_UClass_AAI_Enemy_Statics; \
public: \
	DECLARE_CLASS(AAI_Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fps"), NO_API) \
	DECLARE_SERIALIZER(AAI_Enemy)


#define fps_Source_fps_AI_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Enemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Enemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Enemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Enemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Enemy(AAI_Enemy&&); \
	NO_API AAI_Enemy(const AAI_Enemy&); \
public:


#define fps_Source_fps_AI_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Enemy(AAI_Enemy&&); \
	NO_API AAI_Enemy(const AAI_Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Enemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_Enemy)


#define fps_Source_fps_AI_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define fps_Source_fps_AI_Enemy_h_9_PROLOG
#define fps_Source_fps_AI_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fps_Source_fps_AI_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	fps_Source_fps_AI_Enemy_h_12_SPARSE_DATA \
	fps_Source_fps_AI_Enemy_h_12_RPC_WRAPPERS \
	fps_Source_fps_AI_Enemy_h_12_INCLASS \
	fps_Source_fps_AI_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fps_Source_fps_AI_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fps_Source_fps_AI_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	fps_Source_fps_AI_Enemy_h_12_SPARSE_DATA \
	fps_Source_fps_AI_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	fps_Source_fps_AI_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	fps_Source_fps_AI_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AAI_Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fps_Source_fps_AI_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
