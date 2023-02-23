// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyActorSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorSpawner() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActorSpawner_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActorSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyActorSpawner::StaticRegisterNativesAMyActorSpawner()
	{
	}
	UClass* Z_Construct_UClass_AMyActorSpawner_NoRegister()
	{
		return AMyActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorSpawner.h" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorSpawner_Statics::ClassParams = {
		&AMyActorSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorSpawner, 59226119);
	template<> MYPROJECT_API UClass* StaticClass<AMyActorSpawner>()
	{
		return AMyActorSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorSpawner(Z_Construct_UClass_AMyActorSpawner, &AMyActorSpawner::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyActorSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
