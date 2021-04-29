// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VALVEINDEXTEMPLATE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define VALVEINDEXTEMPLATE_PlayerCharacter_generated_h

#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_SPARSE_DATA
#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_RPC_WRAPPERS
#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ValveIndexTemplate"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ValveIndexTemplate"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(APlayerCharacter, VRRoot); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__ControllerInterface() { return STRUCT_OFFSET(APlayerCharacter, ControllerInterface); } \
	FORCEINLINE static uint32 __PPO__LeftController() { return STRUCT_OFFSET(APlayerCharacter, LeftController); } \
	FORCEINLINE static uint32 __PPO__RightController() { return STRUCT_OFFSET(APlayerCharacter, RightController); }


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_13_PROLOG
#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_SPARSE_DATA \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_RPC_WRAPPERS \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_INCLASS \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_SPARSE_DATA \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VALVEINDEXTEMPLATE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ValveIndexTemplate_Source_ValveIndexTemplate_Actors_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
