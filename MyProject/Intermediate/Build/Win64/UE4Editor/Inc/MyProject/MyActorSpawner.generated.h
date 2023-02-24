// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyBaseActor;
#ifdef MYPROJECT_MyActorSpawner_generated_h
#error "MyActorSpawner.generated.h already included, missing '#pragma once' in MyActorSpawner.h"
#endif
#define MYPROJECT_MyActorSpawner_generated_h

#define MyProject_Source_MyProject_MyActorSpawner_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_MyActorSpawner_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyTheRest); \
	DECLARE_FUNCTION(execSpawnActorReScheduled); \
	DECLARE_FUNCTION(execUpdateTimer); \
	DECLARE_FUNCTION(execSpawnActor);


#define MyProject_Source_MyProject_MyActorSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyTheRest); \
	DECLARE_FUNCTION(execSpawnActorReScheduled); \
	DECLARE_FUNCTION(execUpdateTimer); \
	DECLARE_FUNCTION(execSpawnActor);


#define MyProject_Source_MyProject_MyActorSpawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActorSpawner(); \
	friend struct Z_Construct_UClass_AMyActorSpawner_Statics; \
public: \
	DECLARE_CLASS(AMyActorSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyActorSpawner)


#define MyProject_Source_MyProject_MyActorSpawner_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyActorSpawner(); \
	friend struct Z_Construct_UClass_AMyActorSpawner_Statics; \
public: \
	DECLARE_CLASS(AMyActorSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyActorSpawner)


#define MyProject_Source_MyProject_MyActorSpawner_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActorSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActorSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorSpawner(AMyActorSpawner&&); \
	NO_API AMyActorSpawner(const AMyActorSpawner&); \
public:


#define MyProject_Source_MyProject_MyActorSpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorSpawner(AMyActorSpawner&&); \
	NO_API AMyActorSpawner(const AMyActorSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActorSpawner)


#define MyProject_Source_MyProject_MyActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnBox() { return STRUCT_OFFSET(AMyActorSpawner, SpawnBox); } \
	FORCEINLINE static uint32 __PPO__ActorClassToSpawn1() { return STRUCT_OFFSET(AMyActorSpawner, ActorClassToSpawn1); } \
	FORCEINLINE static uint32 __PPO__ActorClassToSpawn2() { return STRUCT_OFFSET(AMyActorSpawner, ActorClassToSpawn2); } \
	FORCEINLINE static uint32 __PPO__ShouldSpawn() { return STRUCT_OFFSET(AMyActorSpawner, ShouldSpawn); } \
	FORCEINLINE static uint32 __PPO__AvgSpawnTime() { return STRUCT_OFFSET(AMyActorSpawner, AvgSpawnTime); } \
	FORCEINLINE static uint32 __PPO__RandomSpawnTimeOffset() { return STRUCT_OFFSET(AMyActorSpawner, RandomSpawnTimeOffset); } \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(AMyActorSpawner, timer); } \
	FORCEINLINE static uint32 __PPO__timeRemaning() { return STRUCT_OFFSET(AMyActorSpawner, timeRemaning); } \
	FORCEINLINE static uint32 __PPO__textTimer() { return STRUCT_OFFSET(AMyActorSpawner, textTimer); }


#define MyProject_Source_MyProject_MyActorSpawner_h_13_PROLOG
#define MyProject_Source_MyProject_MyActorSpawner_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActorSpawner_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyActorSpawner_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyActorSpawner_h_16_INCLASS \
	MyProject_Source_MyProject_MyActorSpawner_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyActorSpawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActorSpawner_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyActorSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActorSpawner_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActorSpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyActorSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyActorSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
