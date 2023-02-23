// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyMyBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMyBarrel() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMyBarrel_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyMyBarrel();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyMyBarrel::StaticRegisterNativesAMyMyBarrel()
	{
	}
	UClass* Z_Construct_UClass_AMyMyBarrel_NoRegister()
	{
		return AMyMyBarrel::StaticClass();
	}
	struct Z_Construct_UClass_AMyMyBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMyBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMyBarrel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyMyBarrel.h" },
		{ "ModuleRelativePath", "MyMyBarrel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMyBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMyBarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMyBarrel_Statics::ClassParams = {
		&AMyMyBarrel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyMyBarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMyBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMyBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMyBarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMyBarrel, 2095919391);
	template<> MYPROJECT_API UClass* StaticClass<AMyMyBarrel>()
	{
		return AMyMyBarrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMyBarrel(Z_Construct_UClass_AMyMyBarrel, &AMyMyBarrel::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyMyBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMyBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
