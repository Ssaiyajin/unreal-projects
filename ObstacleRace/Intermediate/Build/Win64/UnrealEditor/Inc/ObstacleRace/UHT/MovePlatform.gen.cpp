// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleRace/MovePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovePlatform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OBSTACLERACE_API UClass* Z_Construct_UClass_AMovePlatform();
	OBSTACLERACE_API UClass* Z_Construct_UClass_AMovePlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObstacleRace();
// End Cross Module References
	void AMovePlatform::StaticRegisterNativesAMovePlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovePlatform);
	UClass* Z_Construct_UClass_AMovePlatform_NoRegister()
	{
		return AMovePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovedDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovedDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleRace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovePlatform.h" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_MovedDistance_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_MovedDistance = { "MovedDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, MovedDistance), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MovedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MovedDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_MovedDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovePlatform_Statics::ClassParams = {
		&AMovePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovePlatform()
	{
		if (!Z_Registration_Info_UClass_AMovePlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovePlatform.OuterSingleton, Z_Construct_UClass_AMovePlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovePlatform.OuterSingleton;
	}
	template<> OBSTACLERACE_API UClass* StaticClass<AMovePlatform>()
	{
		return AMovePlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovePlatform);
	AMovePlatform::~AMovePlatform() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ObstacleRace_Source_ObstacleRace_MovePlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ObstacleRace_Source_ObstacleRace_MovePlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovePlatform, AMovePlatform::StaticClass, TEXT("AMovePlatform"), &Z_Registration_Info_UClass_AMovePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovePlatform), 4163885599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ObstacleRace_Source_ObstacleRace_MovePlatform_h_3928002104(TEXT("/Script/ObstacleRace"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ObstacleRace_Source_ObstacleRace_MovePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ObstacleRace_Source_ObstacleRace_MovePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
