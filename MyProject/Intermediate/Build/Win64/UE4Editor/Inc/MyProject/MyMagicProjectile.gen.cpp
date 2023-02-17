// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyMagicProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMagicProjectile() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMagicProjectile_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMagicProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AMyMagicProjectile::StaticRegisterNativesAMyMagicProjectile()
	{
	}
	UClass* Z_Construct_UClass_AMyMagicProjectile_NoRegister()
	{
		return AMyMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMyMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMagicProjectile.h" },
		{ "ModuleRelativePath", "MyMagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "MyMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "MyMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMagicProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_EffectComp_MetaData[] = {
		{ "Category", "MyMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_EffectComp = { "EffectComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMagicProjectile, EffectComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_EffectComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_EffectComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMagicProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_MovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMagicProjectile_Statics::NewProp_EffectComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMagicProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMagicProjectile_Statics::ClassParams = {
		&AMyMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMagicProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMagicProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMagicProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMagicProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMagicProjectile, 311820113);
	template<> MYPROJECT_API UClass* StaticClass<AMyMagicProjectile>()
	{
		return AMyMagicProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMagicProjectile(Z_Construct_UClass_AMyMagicProjectile, &AMyMagicProjectile::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyMagicProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMagicProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
