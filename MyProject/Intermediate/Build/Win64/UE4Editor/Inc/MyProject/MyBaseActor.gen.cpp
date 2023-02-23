// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyBaseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBaseActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyBaseActor::StaticRegisterNativesAMyBaseActor()
	{
	}
	UClass* Z_Construct_UClass_AMyBaseActor_NoRegister()
	{
		return AMyBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosiveStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBaseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBaseActor.h" },
		{ "ModuleRelativePath", "MyBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBaseActor_Statics::NewProp_ExplosiveStaticMesh_MetaData[] = {
		{ "Category", "MyBaseActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyBaseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBaseActor_Statics::NewProp_ExplosiveStaticMesh = { "ExplosiveStaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBaseActor, ExplosiveStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBaseActor_Statics::NewProp_ExplosiveStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBaseActor_Statics::NewProp_ExplosiveStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBaseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBaseActor_Statics::NewProp_ExplosiveStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBaseActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBaseActor_Statics::ClassParams = {
		&AMyBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyBaseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBaseActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBaseActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBaseActor, 3718928740);
	template<> MYPROJECT_API UClass* StaticClass<AMyBaseActor>()
	{
		return AMyBaseActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBaseActor(Z_Construct_UClass_AMyBaseActor, &AMyBaseActor::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyBaseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBaseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
