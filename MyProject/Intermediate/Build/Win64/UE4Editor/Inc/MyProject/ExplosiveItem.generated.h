// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_ExplosiveItem_generated_h
#error "ExplosiveItem.generated.h already included, missing '#pragma once' in ExplosiveItem.h"
#endif
#define MYPROJECT_ExplosiveItem_generated_h

#define MyProject_Source_MyProject_ExplosiveItem_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_ExplosiveItem_h_15_RPC_WRAPPERS
#define MyProject_Source_MyProject_ExplosiveItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_ExplosiveItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveItem(); \
	friend struct Z_Construct_UClass_AExplosiveItem_Statics; \
public: \
	DECLARE_CLASS(AExplosiveItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveItem)


#define MyProject_Source_MyProject_ExplosiveItem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveItem(); \
	friend struct Z_Construct_UClass_AExplosiveItem_Statics; \
public: \
	DECLARE_CLASS(AExplosiveItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveItem)


#define MyProject_Source_MyProject_ExplosiveItem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveItem(AExplosiveItem&&); \
	NO_API AExplosiveItem(const AExplosiveItem&); \
public:


#define MyProject_Source_MyProject_ExplosiveItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveItem(AExplosiveItem&&); \
	NO_API AExplosiveItem(const AExplosiveItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveItem)


#define MyProject_Source_MyProject_ExplosiveItem_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosiveStaticMesh() { return STRUCT_OFFSET(AExplosiveItem, ExplosiveStaticMesh); } \
	FORCEINLINE static uint32 __PPO__ForceComp() { return STRUCT_OFFSET(AExplosiveItem, ForceComp); }


#define MyProject_Source_MyProject_ExplosiveItem_h_12_PROLOG
#define MyProject_Source_MyProject_ExplosiveItem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_ExplosiveItem_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_ExplosiveItem_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_ExplosiveItem_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_ExplosiveItem_h_15_INCLASS \
	MyProject_Source_MyProject_ExplosiveItem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_ExplosiveItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_ExplosiveItem_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_ExplosiveItem_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_ExplosiveItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_ExplosiveItem_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_ExplosiveItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AExplosiveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_ExplosiveItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
