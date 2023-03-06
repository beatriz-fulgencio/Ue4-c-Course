// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define MYPROJECT_MyCharacter_generated_h

#define MyProject_Source_MyProject_MyCharacter_h_18_SPARSE_DATA
#define MyProject_Source_MyProject_MyCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerAttack);


#define MyProject_Source_MyProject_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerAttack);


#define MyProject_Source_MyProject_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define MyProject_Source_MyProject_MyCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define MyProject_Source_MyProject_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define MyProject_Source_MyProject_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define MyProject_Source_MyProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AMyCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AMyCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AMyCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__isJumping() { return STRUCT_OFFSET(AMyCharacter, isJumping); } \
	FORCEINLINE static uint32 __PPO__Spawned() { return STRUCT_OFFSET(AMyCharacter, Spawned); }


#define MyProject_Source_MyProject_MyCharacter_h_15_PROLOG
#define MyProject_Source_MyProject_MyCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyCharacter_h_18_SPARSE_DATA \
	MyProject_Source_MyProject_MyCharacter_h_18_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyCharacter_h_18_INCLASS \
	MyProject_Source_MyProject_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyCharacter_h_18_SPARSE_DATA \
	MyProject_Source_MyProject_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
