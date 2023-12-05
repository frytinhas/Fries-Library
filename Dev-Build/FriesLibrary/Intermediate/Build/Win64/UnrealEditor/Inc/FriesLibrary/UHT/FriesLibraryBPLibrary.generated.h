// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FriesLibraryBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UObject;
class UOverallScalability;
enum class EFlAmbientOcclusion : uint8;
enum class EFlAntiAliasingMethod : uint8;
enum class EFlEngineScalabilityLevel : uint8;
enum class EFlEngineScalabilityType : uint8;
enum class EFlGlobalIlluminationMethod : uint8;
enum class EGraphicsRHI : uint8;
struct FLinearColor;
#ifdef FRIESLIBRARY_FriesLibraryBPLibrary_generated_h
#error "FriesLibraryBPLibrary.generated.h already included, missing '#pragma once' in FriesLibraryBPLibrary.h"
#endif
#define FRIESLIBRARY_FriesLibraryBPLibrary_generated_h

#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_SPARSE_DATA
#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRayTracing); \
	DECLARE_FUNCTION(execRayTracingIsEnabled); \
	DECLARE_FUNCTION(execRayTracingIsSupported); \
	DECLARE_FUNCTION(execGetCurrentGraphicsRHI); \
	DECLARE_FUNCTION(execSetGraphicsRHI); \
	DECLARE_FUNCTION(execSetOverallScalability); \
	DECLARE_FUNCTION(execModifyScalability); \
	DECLARE_FUNCTION(execGetScalabilityLevel); \
	DECLARE_FUNCTION(execSaveGameUserSettings); \
	DECLARE_FUNCTION(execSetGlobalIlluminationMethod); \
	DECLARE_FUNCTION(execSetAntiAliasingMethod); \
	DECLARE_FUNCTION(execSetAmbientOcclusion); \
	DECLARE_FUNCTION(execGetGlobalIllumination); \
	DECLARE_FUNCTION(execGetAntiAliasingMethod); \
	DECLARE_FUNCTION(execGetAmbientOcclusion); \
	DECLARE_FUNCTION(execIsAIControlled); \
	DECLARE_FUNCTION(execRandomLetterInRange); \
	DECLARE_FUNCTION(execRandomLetter); \
	DECLARE_FUNCTION(execPrintObject); \
	DECLARE_FUNCTION(execPrintTransform); \
	DECLARE_FUNCTION(execPrintRotator); \
	DECLARE_FUNCTION(execPrintVector); \
	DECLARE_FUNCTION(execPrintName); \
	DECLARE_FUNCTION(execPrintFloat); \
	DECLARE_FUNCTION(execPrintInteger); \
	DECLARE_FUNCTION(execPrintBoolean);


#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_ACCESSORS
#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFriesLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UFriesLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFriesLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FriesLibrary"), NO_API) \
	DECLARE_SERIALIZER(UFriesLibraryBPLibrary)


#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFriesLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFriesLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFriesLibraryBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFriesLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFriesLibraryBPLibrary(UFriesLibraryBPLibrary&&); \
	NO_API UFriesLibraryBPLibrary(const UFriesLibraryBPLibrary&); \
public: \
	NO_API virtual ~UFriesLibraryBPLibrary();


#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_18_PROLOG
#define FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_SPARSE_DATA \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_RPC_WRAPPERS \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_ACCESSORS \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_INCLASS \
	FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRIESLIBRARY_API UClass* StaticClass<class UFriesLibraryBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
