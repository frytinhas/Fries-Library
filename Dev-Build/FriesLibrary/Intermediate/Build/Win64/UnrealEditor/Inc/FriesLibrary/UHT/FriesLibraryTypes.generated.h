// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FriesLibraryTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRIESLIBRARY_FriesLibraryTypes_generated_h
#error "FriesLibraryTypes.generated.h already included, missing '#pragma once' in FriesLibraryTypes.h"
#endif
#define FRIESLIBRARY_FriesLibraryTypes_generated_h

#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAllScalabilitys_Statics; \
	FRIESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> FRIESLIBRARY_API UScriptStruct* StaticStruct<struct FAllScalabilitys>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryTypes_h


#define FOREACH_ENUM_EGRAPHICSRHI(op) \
	op(EGraphicsRHI::RHI_DX11) \
	op(EGraphicsRHI::RHI_DX12) \
	op(EGraphicsRHI::RHI_Vulkan) 

enum class EGraphicsRHI : uint8;
template<> struct TIsUEnumClass<EGraphicsRHI> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EGraphicsRHI>();

#define FOREACH_ENUM_EFLAMBIENTOCCLUSION(op) \
	op(EFlAmbientOcclusion::SSAO) \
	op(EFlAmbientOcclusion::GTAO) 

enum class EFlAmbientOcclusion : uint8;
template<> struct TIsUEnumClass<EFlAmbientOcclusion> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlAmbientOcclusion>();

#define FOREACH_ENUM_EFLANTIALIASINGMETHOD(op) \
	op(EFlAntiAliasingMethod::None) \
	op(EFlAntiAliasingMethod::FXAA) \
	op(EFlAntiAliasingMethod::TAA) \
	op(EFlAntiAliasingMethod::MSAA) \
	op(EFlAntiAliasingMethod::TSR) 

enum class EFlAntiAliasingMethod : uint8;
template<> struct TIsUEnumClass<EFlAntiAliasingMethod> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlAntiAliasingMethod>();

#define FOREACH_ENUM_EFLGLOBALILLUMINATIONMETHOD(op) \
	op(EFlGlobalIlluminationMethod::None) \
	op(EFlGlobalIlluminationMethod::Lumen) \
	op(EFlGlobalIlluminationMethod::SSGI) \
	op(EFlGlobalIlluminationMethod::RTGI) \
	op(EFlGlobalIlluminationMethod::Plugin) 

enum class EFlGlobalIlluminationMethod : uint8;
template<> struct TIsUEnumClass<EFlGlobalIlluminationMethod> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlGlobalIlluminationMethod>();

#define FOREACH_ENUM_EFLENGINESCALABILITYTYPE(op) \
	op(EFlEngineScalabilityType::Overall) \
	op(EFlEngineScalabilityType::ViewDistance) \
	op(EFlEngineScalabilityType::AntiAliasing) \
	op(EFlEngineScalabilityType::PostProcessing) \
	op(EFlEngineScalabilityType::Shadows) \
	op(EFlEngineScalabilityType::GlobalIllumination) \
	op(EFlEngineScalabilityType::Reflections) \
	op(EFlEngineScalabilityType::Textures) \
	op(EFlEngineScalabilityType::Effects) \
	op(EFlEngineScalabilityType::Foliage) \
	op(EFlEngineScalabilityType::Shading) 

enum class EFlEngineScalabilityType : uint8;
template<> struct TIsUEnumClass<EFlEngineScalabilityType> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlEngineScalabilityType>();

#define FOREACH_ENUM_EFLENGINESCALABILITYLEVEL(op) \
	op(EFlEngineScalabilityLevel::Low) \
	op(EFlEngineScalabilityLevel::Medium) \
	op(EFlEngineScalabilityLevel::High) \
	op(EFlEngineScalabilityLevel::Ultra) \
	op(EFlEngineScalabilityLevel::Cinematic) 

enum class EFlEngineScalabilityLevel : uint8;
template<> struct TIsUEnumClass<EFlEngineScalabilityLevel> { enum { Value = true }; };
template<> FRIESLIBRARY_API UEnum* StaticEnum<EFlEngineScalabilityLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
