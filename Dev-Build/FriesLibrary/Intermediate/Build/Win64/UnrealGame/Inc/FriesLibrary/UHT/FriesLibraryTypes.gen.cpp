// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriesLibrary/Public/FriesLibraryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriesLibraryTypes() {}
// Cross Module References
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EGraphicsRHI();
	FRIESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAllScalabilitys();
	UPackage* Z_Construct_UPackage__Script_FriesLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphicsRHI;
	static UEnum* EGraphicsRHI_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EGraphicsRHI, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EGraphicsRHI"));
		}
		return Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EGraphicsRHI>()
	{
		return EGraphicsRHI_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enumerators[] = {
		{ "EGraphicsRHI::RHI_DX11", (int64)EGraphicsRHI::RHI_DX11 },
		{ "EGraphicsRHI::RHI_DX12", (int64)EGraphicsRHI::RHI_DX12 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Comment", "// Enumeration\n// Enumeration used to get/set current RHI mode\n" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "RHI_DX11.DisplayName", "DirectX 11" },
		{ "RHI_DX11.Name", "EGraphicsRHI::RHI_DX11" },
		{ "RHI_DX12.DisplayName", "DirectX 12" },
		{ "RHI_DX12.Name", "EGraphicsRHI::RHI_DX12" },
		{ "ToolTip", "Enumeration\nEnumeration used to get/set current RHI mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EGraphicsRHI",
		"EGraphicsRHI",
		Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EGraphicsRHI()
	{
		if (!Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EGraphicsRHI_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlAmbientOcclusion;
	static UEnum* EFlAmbientOcclusion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlAmbientOcclusion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlAmbientOcclusion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EFlAmbientOcclusion"));
		}
		return Z_Registration_Info_UEnum_EFlAmbientOcclusion.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlAmbientOcclusion>()
	{
		return EFlAmbientOcclusion_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enumerators[] = {
		{ "EFlAmbientOcclusion::SSAO", (int64)EFlAmbientOcclusion::SSAO },
		{ "EFlAmbientOcclusion::GTAO", (int64)EFlAmbientOcclusion::GTAO },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Comment", "// Enumeration used to get/set current ambient occlusion method\n" },
		{ "GTAO.DisplayName", "GTAO" },
		{ "GTAO.Name", "EFlAmbientOcclusion::GTAO" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "SSAO.DisplayName", "SSAO" },
		{ "SSAO.Name", "EFlAmbientOcclusion::SSAO" },
		{ "ToolTip", "Enumeration used to get/set current ambient occlusion method" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EFlAmbientOcclusion",
		"EFlAmbientOcclusion",
		Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion()
	{
		if (!Z_Registration_Info_UEnum_EFlAmbientOcclusion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlAmbientOcclusion.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlAmbientOcclusion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlAntiAliasingMethod;
	static UEnum* EFlAntiAliasingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlAntiAliasingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlAntiAliasingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EFlAntiAliasingMethod"));
		}
		return Z_Registration_Info_UEnum_EFlAntiAliasingMethod.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlAntiAliasingMethod>()
	{
		return EFlAntiAliasingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enumerators[] = {
		{ "EFlAntiAliasingMethod::None", (int64)EFlAntiAliasingMethod::None },
		{ "EFlAntiAliasingMethod::FXAA", (int64)EFlAntiAliasingMethod::FXAA },
		{ "EFlAntiAliasingMethod::TAA", (int64)EFlAntiAliasingMethod::TAA },
		{ "EFlAntiAliasingMethod::MSAA", (int64)EFlAntiAliasingMethod::MSAA },
		{ "EFlAntiAliasingMethod::TSR", (int64)EFlAntiAliasingMethod::TSR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Comment", "// Enumeration used to get/set current Anti-aliasing method\n" },
		{ "FXAA.DisplayName", "FXAA" },
		{ "FXAA.Name", "EFlAntiAliasingMethod::FXAA" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "MSAA.DisplayName", "MSAA" },
		{ "MSAA.Name", "EFlAntiAliasingMethod::MSAA" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EFlAntiAliasingMethod::None" },
		{ "TAA.DisplayName", "TAA" },
		{ "TAA.Name", "EFlAntiAliasingMethod::TAA" },
		{ "ToolTip", "Enumeration used to get/set current Anti-aliasing method" },
		{ "TSR.DisplayName", "TSR" },
		{ "TSR.Name", "EFlAntiAliasingMethod::TSR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EFlAntiAliasingMethod",
		"EFlAntiAliasingMethod",
		Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod()
	{
		if (!Z_Registration_Info_UEnum_EFlAntiAliasingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlAntiAliasingMethod.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlAntiAliasingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod;
	static UEnum* EFlGlobalIlluminationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EFlGlobalIlluminationMethod"));
		}
		return Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlGlobalIlluminationMethod>()
	{
		return EFlGlobalIlluminationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enumerators[] = {
		{ "EFlGlobalIlluminationMethod::None", (int64)EFlGlobalIlluminationMethod::None },
		{ "EFlGlobalIlluminationMethod::Lumen", (int64)EFlGlobalIlluminationMethod::Lumen },
		{ "EFlGlobalIlluminationMethod::SSGI", (int64)EFlGlobalIlluminationMethod::SSGI },
		{ "EFlGlobalIlluminationMethod::RTGI", (int64)EFlGlobalIlluminationMethod::RTGI },
		{ "EFlGlobalIlluminationMethod::Plugin", (int64)EFlGlobalIlluminationMethod::Plugin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Comment", "// Enumeration used to get/set current global illumination method\n" },
		{ "Lumen.DisplayName", "Lumen" },
		{ "Lumen.Name", "EFlGlobalIlluminationMethod::Lumen" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EFlGlobalIlluminationMethod::None" },
		{ "Plugin.DisplayName", "Plugin" },
		{ "Plugin.Name", "EFlGlobalIlluminationMethod::Plugin" },
		{ "RTGI.DisplayName", "RTGI" },
		{ "RTGI.Name", "EFlGlobalIlluminationMethod::RTGI" },
		{ "SSGI.DisplayName", "SSGI" },
		{ "SSGI.Name", "EFlGlobalIlluminationMethod::SSGI" },
		{ "ToolTip", "Enumeration used to get/set current global illumination method" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EFlGlobalIlluminationMethod",
		"EFlGlobalIlluminationMethod",
		Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod()
	{
		if (!Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlEngineScalabilityType;
	static UEnum* EFlEngineScalabilityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlEngineScalabilityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlEngineScalabilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EFlEngineScalabilityType"));
		}
		return Z_Registration_Info_UEnum_EFlEngineScalabilityType.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlEngineScalabilityType>()
	{
		return EFlEngineScalabilityType_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enumerators[] = {
		{ "EFlEngineScalabilityType::Overall", (int64)EFlEngineScalabilityType::Overall },
		{ "EFlEngineScalabilityType::ViewDistance", (int64)EFlEngineScalabilityType::ViewDistance },
		{ "EFlEngineScalabilityType::AntiAliasing", (int64)EFlEngineScalabilityType::AntiAliasing },
		{ "EFlEngineScalabilityType::PostProcessing", (int64)EFlEngineScalabilityType::PostProcessing },
		{ "EFlEngineScalabilityType::Shadows", (int64)EFlEngineScalabilityType::Shadows },
		{ "EFlEngineScalabilityType::GlobalIllumination", (int64)EFlEngineScalabilityType::GlobalIllumination },
		{ "EFlEngineScalabilityType::Reflections", (int64)EFlEngineScalabilityType::Reflections },
		{ "EFlEngineScalabilityType::Textures", (int64)EFlEngineScalabilityType::Textures },
		{ "EFlEngineScalabilityType::Effects", (int64)EFlEngineScalabilityType::Effects },
		{ "EFlEngineScalabilityType::Foliage", (int64)EFlEngineScalabilityType::Foliage },
		{ "EFlEngineScalabilityType::Shading", (int64)EFlEngineScalabilityType::Shading },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enum_MetaDataParams[] = {
		{ "AntiAliasing.DisplayName", "AntiAliasing" },
		{ "AntiAliasing.Name", "EFlEngineScalabilityType::AntiAliasing" },
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Comment", "// Create EEngineScalabilityType\n" },
		{ "Effects.DisplayName", "Effects" },
		{ "Effects.Name", "EFlEngineScalabilityType::Effects" },
		{ "Foliage.DisplayName", "Foliage" },
		{ "Foliage.Name", "EFlEngineScalabilityType::Foliage" },
		{ "GlobalIllumination.DisplayName", "GlobalIllumination" },
		{ "GlobalIllumination.Name", "EFlEngineScalabilityType::GlobalIllumination" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "Overall.DisplayName", "Overall" },
		{ "Overall.Name", "EFlEngineScalabilityType::Overall" },
		{ "PostProcessing.DisplayName", "PostProcessing" },
		{ "PostProcessing.Name", "EFlEngineScalabilityType::PostProcessing" },
		{ "Reflections.DisplayName", "Reflections" },
		{ "Reflections.Name", "EFlEngineScalabilityType::Reflections" },
		{ "Shading.DisplayName", "Shading" },
		{ "Shading.Name", "EFlEngineScalabilityType::Shading" },
		{ "Shadows.DisplayName", "Shadows" },
		{ "Shadows.Name", "EFlEngineScalabilityType::Shadows" },
		{ "Textures.DisplayName", "Textures" },
		{ "Textures.Name", "EFlEngineScalabilityType::Textures" },
		{ "ToolTip", "Create EEngineScalabilityType" },
		{ "ViewDistance.DisplayName", "ViewDistance" },
		{ "ViewDistance.Name", "EFlEngineScalabilityType::ViewDistance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EFlEngineScalabilityType",
		"EFlEngineScalabilityType",
		Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType()
	{
		if (!Z_Registration_Info_UEnum_EFlEngineScalabilityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlEngineScalabilityType.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlEngineScalabilityType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlEngineScalabilityLevel;
	static UEnum* EFlEngineScalabilityLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("EFlEngineScalabilityLevel"));
		}
		return Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlEngineScalabilityLevel>()
	{
		return EFlEngineScalabilityLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enumerators[] = {
		{ "EFlEngineScalabilityLevel::Low", (int64)EFlEngineScalabilityLevel::Low },
		{ "EFlEngineScalabilityLevel::Medium", (int64)EFlEngineScalabilityLevel::Medium },
		{ "EFlEngineScalabilityLevel::High", (int64)EFlEngineScalabilityLevel::High },
		{ "EFlEngineScalabilityLevel::Ultra", (int64)EFlEngineScalabilityLevel::Ultra },
		{ "EFlEngineScalabilityLevel::Cinematic", (int64)EFlEngineScalabilityLevel::Cinematic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Enums" },
		{ "Cinematic.DisplayName", "Cinematic" },
		{ "Cinematic.Name", "EFlEngineScalabilityLevel::Cinematic" },
		{ "Comment", "// Create EEngineScalabilityLevel\n" },
		{ "High.DisplayName", "High" },
		{ "High.Name", "EFlEngineScalabilityLevel::High" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EFlEngineScalabilityLevel::Low" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EFlEngineScalabilityLevel::Medium" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "ToolTip", "Create EEngineScalabilityLevel" },
		{ "Ultra.DisplayName", "Ultra" },
		{ "Ultra.Name", "EFlEngineScalabilityLevel::Ultra" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		"EFlEngineScalabilityLevel",
		"EFlEngineScalabilityLevel",
		Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel()
	{
		if (!Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.InnerSingleton, Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlEngineScalabilityLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AllScalabilitys;
class UScriptStruct* FAllScalabilitys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AllScalabilitys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AllScalabilitys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAllScalabilitys, (UObject*)Z_Construct_UPackage__Script_FriesLibrary(), TEXT("AllScalabilitys"));
	}
	return Z_Registration_Info_UScriptStruct_AllScalabilitys.OuterSingleton;
}
template<> FRIESLIBRARY_API UScriptStruct* StaticStruct<FAllScalabilitys>()
{
	return FAllScalabilitys::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAllScalabilitys_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewDistance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AntiAliasing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AntiAliasing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostProcessing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PostProcessing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shadows_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shadows;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalIllumination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIllumination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalIllumination;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reflections_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reflections;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Textures_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Effects_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Foliage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foliage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Foliage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shading_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shading_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "Comment", "// Structures\n// Create structure used by OverallScalability\n" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
		{ "ToolTip", "Structures\nCreate structure used by OverallScalability" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAllScalabilitys>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, ViewDistance), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, AntiAliasing), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing = { "PostProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, PostProcessing), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Shadows), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination = { "GlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, GlobalIllumination), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Reflections), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Textures), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Effects), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Foliage), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage_MetaData)) }; // 4267033782
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading_MetaData[] = {
		{ "Category", "FriesLibrary|Data|Structs" },
		{ "ModuleRelativePath", "Public/FriesLibraryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading = { "Shading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAllScalabilitys, Shading), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading_MetaData)) }; // 4267033782
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAllScalabilitys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_ViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_AntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_PostProcessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_GlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Reflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Foliage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewProp_Shading,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAllScalabilitys_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriesLibrary,
		nullptr,
		&NewStructOps,
		"AllScalabilitys",
		sizeof(FAllScalabilitys),
		alignof(FAllScalabilitys),
		Z_Construct_UScriptStruct_FAllScalabilitys_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllScalabilitys_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAllScalabilitys()
	{
		if (!Z_Registration_Info_UScriptStruct_AllScalabilitys.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AllScalabilitys.InnerSingleton, Z_Construct_UScriptStruct_FAllScalabilitys_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AllScalabilitys.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::EnumInfo[] = {
		{ EGraphicsRHI_StaticEnum, TEXT("EGraphicsRHI"), &Z_Registration_Info_UEnum_EGraphicsRHI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4276546937U) },
		{ EFlAmbientOcclusion_StaticEnum, TEXT("EFlAmbientOcclusion"), &Z_Registration_Info_UEnum_EFlAmbientOcclusion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 609859939U) },
		{ EFlAntiAliasingMethod_StaticEnum, TEXT("EFlAntiAliasingMethod"), &Z_Registration_Info_UEnum_EFlAntiAliasingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1923940926U) },
		{ EFlGlobalIlluminationMethod_StaticEnum, TEXT("EFlGlobalIlluminationMethod"), &Z_Registration_Info_UEnum_EFlGlobalIlluminationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3709339133U) },
		{ EFlEngineScalabilityType_StaticEnum, TEXT("EFlEngineScalabilityType"), &Z_Registration_Info_UEnum_EFlEngineScalabilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2178813699U) },
		{ EFlEngineScalabilityLevel_StaticEnum, TEXT("EFlEngineScalabilityLevel"), &Z_Registration_Info_UEnum_EFlEngineScalabilityLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4267033782U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::ScriptStructInfo[] = {
		{ FAllScalabilitys::StaticStruct, Z_Construct_UScriptStruct_FAllScalabilitys_Statics::NewStructOps, TEXT("AllScalabilitys"), &Z_Registration_Info_UScriptStruct_AllScalabilitys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAllScalabilitys), 502479216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_2691263600(TEXT("/Script/FriesLibrary"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fries_Games_Studios_Plugins_Fries_Library_Dev_Build_FriesLibrary_HostProject_Plugins_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
