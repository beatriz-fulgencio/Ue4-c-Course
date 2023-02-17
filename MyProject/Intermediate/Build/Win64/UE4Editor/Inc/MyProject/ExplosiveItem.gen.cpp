// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ExplosiveItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveItem() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AExplosiveItem_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AExplosiveItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
// End Cross Module References
	void AExplosiveItem::StaticRegisterNativesAExplosiveItem()
	{
	}
	UClass* Z_Construct_UClass_AExplosiveItem_NoRegister()
	{
		return AExplosiveItem::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosiveStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveItem.h" },
		{ "ModuleRelativePath", "ExplosiveItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ExplosiveStaticMesh_MetaData[] = {
		{ "Category", "ExplosiveItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ExplosiveStaticMesh = { "ExplosiveStaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveItem, ExplosiveStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ExplosiveStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ExplosiveStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ForceComp_MetaData[] = {
		{ "Category", "ExplosiveItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ForceComp = { "ForceComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveItem, ForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ForceComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ForceComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ExplosiveStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveItem_Statics::NewProp_ForceComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveItem_Statics::ClassParams = {
		&AExplosiveItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosiveItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosiveItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosiveItem, 3958067268);
	template<> MYPROJECT_API UClass* StaticClass<AExplosiveItem>()
	{
		return AExplosiveItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveItem(Z_Construct_UClass_AExplosiveItem, &AExplosiveItem::StaticClass, TEXT("/Script/MyProject"), TEXT("AExplosiveItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
