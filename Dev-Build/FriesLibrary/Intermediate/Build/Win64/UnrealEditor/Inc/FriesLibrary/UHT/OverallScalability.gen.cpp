// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriesLibrary/Public/OverallScalability.h"
#include "FriesLibrary/Public/FriesLibraryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverallScalability() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	FRIESLIBRARY_API UClass* Z_Construct_UClass_UOverallScalability();
	FRIESLIBRARY_API UClass* Z_Construct_UClass_UOverallScalability_NoRegister();
	FRIESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAllScalabilitys();
	UPackage* Z_Construct_UPackage__Script_FriesLibrary();
// End Cross Module References
	void UOverallScalability::StaticRegisterNativesUOverallScalability()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverallScalability);
	UClass* Z_Construct_UClass_UOverallScalability_NoRegister()
	{
		return UOverallScalability::StaticClass();
	}
	struct Z_Construct_UClass_UOverallScalability_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverallScalability_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FriesLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverallScalability_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverallScalability_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OverallScalability.h" },
		{ "ModuleRelativePath", "Public/OverallScalability.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverallScalability_Statics::NewProp_ScalabilityInfo_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/OverallScalability.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOverallScalability_Statics::NewProp_ScalabilityInfo = { "ScalabilityInfo", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverallScalability, ScalabilityInfo), Z_Construct_UScriptStruct_FAllScalabilitys, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverallScalability_Statics::NewProp_ScalabilityInfo_MetaData), Z_Construct_UClass_UOverallScalability_Statics::NewProp_ScalabilityInfo_MetaData) }; // 778405464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverallScalability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverallScalability_Statics::NewProp_ScalabilityInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverallScalability_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverallScalability>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverallScalability_Statics::ClassParams = {
		&UOverallScalability::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverallScalability_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverallScalability_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverallScalability_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverallScalability_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverallScalability_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverallScalability()
	{
		if (!Z_Registration_Info_UClass_UOverallScalability.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverallScalability.OuterSingleton, Z_Construct_UClass_UOverallScalability_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverallScalability.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UClass* StaticClass<UOverallScalability>()
	{
		return UOverallScalability::StaticClass();
	}
	UOverallScalability::UOverallScalability(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverallScalability);
	UOverallScalability::~UOverallScalability() {}
	struct Z_CompiledInDeferFile_FID_Projetos_Separados__Unreal__MultiplayerShooter_Builds_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_OverallScalability_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projetos_Separados__Unreal__MultiplayerShooter_Builds_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_OverallScalability_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverallScalability, UOverallScalability::StaticClass, TEXT("UOverallScalability"), &Z_Registration_Info_UClass_UOverallScalability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverallScalability), 3825194626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projetos_Separados__Unreal__MultiplayerShooter_Builds_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_OverallScalability_h_3001750716(TEXT("/Script/FriesLibrary"),
		Z_CompiledInDeferFile_FID_Projetos_Separados__Unreal__MultiplayerShooter_Builds_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_OverallScalability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projetos_Separados__Unreal__MultiplayerShooter_Builds_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_OverallScalability_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
