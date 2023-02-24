// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyMyBarrelExplosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMyBarrelExplosive() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMyBarrelExplosive_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMyBarrelExplosive();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyMyBarrelExplosive::StaticRegisterNativesAMyMyBarrelExplosive()
	{
	}
	UClass* Z_Construct_UClass_AMyMyBarrelExplosive_NoRegister()
	{
		return AMyMyBarrelExplosive::StaticClass();
	}
	struct Z_Construct_UClass_AMyMyBarrelExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMyBarrelExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMyBarrelExplosive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMyBarrelExplosive.h" },
		{ "ModuleRelativePath", "MyMyBarrelExplosive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMyBarrelExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMyBarrelExplosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMyBarrelExplosive_Statics::ClassParams = {
		&AMyMyBarrelExplosive::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMyBarrelExplosive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMyBarrelExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMyBarrelExplosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMyBarrelExplosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMyBarrelExplosive, 94924125);
	template<> MYPROJECT_API UClass* StaticClass<AMyMyBarrelExplosive>()
	{
		return AMyMyBarrelExplosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMyBarrelExplosive(Z_Construct_UClass_AMyMyBarrelExplosive, &AMyMyBarrelExplosive::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyMyBarrelExplosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMyBarrelExplosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
