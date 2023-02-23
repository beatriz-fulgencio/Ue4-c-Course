// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyBaseActor_generated_h
#error "MyBaseActor.generated.h already included, missing '#pragma once' in MyBaseActor.h"
#endif
#define MYPROJECT_MyBaseActor_generated_h

#define MyProject_Source_MyProject_MyBaseActor_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_MyBaseActor_h_16_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyBaseActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyBaseActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBaseActor(); \
	friend struct Z_Construct_UClass_AMyBaseActor_Statics; \
public: \
	DECLARE_CLASS(AMyBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyBaseActor)


#define MyProject_Source_MyProject_MyBaseActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyBaseActor(); \
	friend struct Z_Construct_UClass_AMyBaseActor_Statics; \
public: \
	DECLARE_CLASS(AMyBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyBaseActor)


#define MyProject_Source_MyProject_MyBaseActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBaseActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBaseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBaseActor(AMyBaseActor&&); \
	NO_API AMyBaseActor(const AMyBaseActor&); \
public:


#define MyProject_Source_MyProject_MyBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBaseActor(AMyBaseActor&&); \
	NO_API AMyBaseActor(const AMyBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBaseActor)


#define MyProject_Source_MyProject_MyBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosiveStaticMesh() { return STRUCT_OFFSET(AMyBaseActor, ExplosiveStaticMesh); }


#define MyProject_Source_MyProject_MyBaseActor_h_13_PROLOG
#define MyProject_Source_MyProject_MyBaseActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyBaseActor_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyBaseActor_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyBaseActor_h_16_INCLASS \
	MyProject_Source_MyProject_MyBaseActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyBaseActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyBaseActor_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyBaseActor_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyBaseActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyBaseActor_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
