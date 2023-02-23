// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyActorSpawnerRight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorSpawnerRight() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActorSpawnerRight_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActorSpawnerRight();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor_NoRegister();
// End Cross Module References
	void AMyActorSpawnerRight::StaticRegisterNativesAMyActorSpawnerRight()
	{
	}
	UClass* Z_Construct_UClass_AMyActorSpawnerRight_NoRegister()
	{
		return AMyActorSpawnerRight::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorSpawnerRight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorSpawnerRight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawnerRight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorSpawnerRight.h" },
		{ "ModuleRelativePath", "MyActorSpawnerRight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawnerRight_Statics::NewProp_ItemsToSpawn_MetaData[] = {
		{ "Category", "MyActorSpawnerRight" },
		{ "ModuleRelativePath", "MyActorSpawnerRight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorSpawnerRight_Statics::NewProp_ItemsToSpawn = { "ItemsToSpawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ItemsToSpawn, AMyActorSpawnerRight), STRUCT_OFFSET(AMyActorSpawnerRight, ItemsToSpawn), Z_Construct_UClass_AMyBaseActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawnerRight_Statics::NewProp_ItemsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawnerRight_Statics::NewProp_ItemsToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorSpawnerRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawnerRight_Statics::NewProp_ItemsToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorSpawnerRight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorSpawnerRight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorSpawnerRight_Statics::ClassParams = {
		&AMyActorSpawnerRight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActorSpawnerRight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawnerRight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawnerRight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawnerRight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorSpawnerRight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorSpawnerRight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorSpawnerRight, 3110571820);
	template<> MYPROJECT_API UClass* StaticClass<AMyActorSpawnerRight>()
	{
		return AMyActorSpawnerRight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorSpawnerRight(Z_Construct_UClass_AMyActorSpawnerRight, &AMyActorSpawnerRight::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyActorSpawnerRight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorSpawnerRight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
