// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyMagicProjectile_generated_h
#error "MyMagicProjectile.generated.h already included, missing '#pragma once' in MyMagicProjectile.h"
#endif
#define MYPROJECT_MyMagicProjectile_generated_h

#define MyProject_Source_MyProject_MyMagicProjectile_h_19_SPARSE_DATA
#define MyProject_Source_MyProject_MyMagicProjectile_h_19_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyMagicProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyMagicProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMagicProjectile(); \
	friend struct Z_Construct_UClass_AMyMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyMagicProjectile)


#define MyProject_Source_MyProject_MyMagicProjectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyMagicProjectile(); \
	friend struct Z_Construct_UClass_AMyMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyMagicProjectile)


#define MyProject_Source_MyProject_MyMagicProjectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMagicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMagicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMagicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMagicProjectile(AMyMagicProjectile&&); \
	NO_API AMyMagicProjectile(const AMyMagicProjectile&); \
public:


#define MyProject_Source_MyProject_MyMagicProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMagicProjectile(AMyMagicProjectile&&); \
	NO_API AMyMagicProjectile(const AMyMagicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMagicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMagicProjectile)


#define MyProject_Source_MyProject_MyMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AMyMagicProjectile, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementComp() { return STRUCT_OFFSET(AMyMagicProjectile, MovementComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(AMyMagicProjectile, EffectComp); }


#define MyProject_Source_MyProject_MyMagicProjectile_h_16_PROLOG
#define MyProject_Source_MyProject_MyMagicProjectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_SPARSE_DATA \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_INCLASS \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyMagicProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_SPARSE_DATA \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyMagicProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyMagicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyMagicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
