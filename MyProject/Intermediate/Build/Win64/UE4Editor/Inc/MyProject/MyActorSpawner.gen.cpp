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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyBaseActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyActorSpawner::execDestroyTheRest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTheRest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActorSpawner::execSpawnActorReScheduled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorReScheduled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActorSpawner::execUpdateTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActorSpawner::execSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClassToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnActor(Z_Param_ActorClassToSpawn);
		P_NATIVE_END;
	}
	void AMyActorSpawner::StaticRegisterNativesAMyActorSpawner()
	{
		UClass* Class = AMyActorSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTheRest", &AMyActorSpawner::execDestroyTheRest },
			{ "SpawnActor", &AMyActorSpawner::execSpawnActor },
			{ "SpawnActorReScheduled", &AMyActorSpawner::execSpawnActorReScheduled },
			{ "UpdateTimer", &AMyActorSpawner::execUpdateTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorSpawner, nullptr, "DestroyTheRest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics
	{
		struct MyActorSpawner_eventSpawnActor_Parms
		{
			TSubclassOf<AMyBaseActor>  ActorClassToSpawn;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassToSpawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ActorClassToSpawn = { "ActorClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorSpawner_eventSpawnActor_Parms, ActorClassToSpawn), Z_Construct_UClass_AMyBaseActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyActorSpawner_eventSpawnActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyActorSpawner_eventSpawnActor_Parms), &Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ActorClassToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Spawn Actor of the specified class\n" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
		{ "ToolTip", "Spawn Actor of the specified class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorSpawner, nullptr, "SpawnActor", nullptr, nullptr, sizeof(MyActorSpawner_eventSpawnActor_Parms), Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActorSpawner_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActorSpawner_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorSpawner, nullptr, "SpawnActorReScheduled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorSpawner, nullptr, "UpdateTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActorSpawner_UpdateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActorSpawner_UpdateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActorSpawner_NoRegister()
	{
		return AMyActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassToSpawn1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassToSpawn1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassToSpawn2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassToSpawn2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldSpawn_MetaData[];
#endif
		static void NewProp_ShouldSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvgSpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvgSpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSpawnTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomSpawnTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActorSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActorSpawner_DestroyTheRest, "DestroyTheRest" }, // 748340337
		{ &Z_Construct_UFunction_AMyActorSpawner_SpawnActor, "SpawnActor" }, // 1244660010
		{ &Z_Construct_UFunction_AMyActorSpawner_SpawnActorReScheduled, "SpawnActorReScheduled" }, // 2730179515
		{ &Z_Construct_UFunction_AMyActorSpawner_UpdateTimer, "UpdateTimer" }, // 3832051027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorSpawner.h" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "Comment", "//BOx to spawn actors\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
		{ "ToolTip", "BOx to spawn actors" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_SpawnBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_SpawnBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn1_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "Comment", "//Actor class to spawn\n" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
		{ "ToolTip", "Actor class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn1 = { "ActorClassToSpawn1", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, ActorClassToSpawn1), Z_Construct_UClass_AMyBaseActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn2_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn2 = { "ActorClassToSpawn2", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, ActorClassToSpawn2), Z_Construct_UClass_AMyBaseActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn_SetBit(void* Obj)
	{
		((AMyActorSpawner*)Obj)->ShouldSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn = { "ShouldSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActorSpawner), &Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_AvgSpawnTime_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "Comment", "//Average time between spawns\n" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
		{ "ToolTip", "Average time between spawns" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_AvgSpawnTime = { "AvgSpawnTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, AvgSpawnTime), METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_AvgSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_AvgSpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "Comment", "//Rando, offset of spawn time\n" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
		{ "ToolTip", "Rando, offset of spawn time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_RandomSpawnTimeOffset = { "RandomSpawnTimeOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, RandomSpawnTimeOffset), METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_RandomSpawnTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, timer), METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_textTimer_MetaData[] = {
		{ "Category", "MyActorSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_textTimer = { "textTimer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorSpawner, textTimer), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_textTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_textTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_SpawnBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ActorClassToSpawn2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_ShouldSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_AvgSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_RandomSpawnTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorSpawner_Statics::NewProp_textTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorSpawner_Statics::ClassParams = {
		&AMyActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActorSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorSpawner_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyActorSpawner, 2040517170);
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
