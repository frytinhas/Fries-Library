#pragma once

#include "FriesLibraryTypes.generated.h"

// Enumeration
// Enumeration used to get/set current RHI mode
UENUM(BlueprintType)
enum class EGraphicsRHI : uint8
{
	RHI_DX11    UMETA(DisplayName = "DirectX 11"),
	RHI_DX12    UMETA(DisplayName = "DirectX 12")
};

// Enumeration used to get/set current ambient occlusion method
UENUM(BlueprintType)
enum class EFlAmbientOcclusion : uint8
{
	SSAO UMETA(DisplayName = "SSAO"),
	GTAO UMETA(DisplayName = "GTAO")
};

// Enumeration used to get/set current Anti-aliasing method
UENUM(BlueprintType)
enum class EFlAntiAliasingMethod : uint8
{
	None UMETA(DisplayName = "None"),
	FXAA UMETA(DisplayName = "FXAA"),
	TAA  UMETA(DisplayName = "TAA"),
	MSAA UMETA(DisplayName = "MSAA"),
	TSR  UMETA(DisplayName = "TSR")
};

// Enumeration used to get/set current global illumination method
UENUM(BlueprintType)
enum class EFlGlobalIlluminationMethod : uint8
{
	None       UMETA(DisplayName = "None"),
	Lumen    UMETA(DisplayName = "Lumen"),
	SSGI      UMETA(DisplayName = "SSGI"),
	RTGI     UMETA(DisplayName = "RTGI"),
	Plugin UMETA(DisplayName = "Plugin")
};

// Create EEngineScalabilityType
UENUM(BlueprintType)
enum class EFlEngineScalabilityType : uint8
{
	Overall             UMETA(DisplayName = "Overall"),
	ViewDistance        UMETA(DisplayName = "ViewDistance"),
	AntiAliasing        UMETA(DisplayName = "AntiAliasing"),
	PostProcessing      UMETA(DisplayName = "PostProcessing"),
	Shadows             UMETA(DisplayName = "Shadows"),
	GlobalIllumination  UMETA(DisplayName = "GlobalIllumination"),
	Reflections         UMETA(DisplayName = "Reflections"),
	Textures            UMETA(DisplayName = "Textures"),
	Effects             UMETA(DisplayName = "Effects"),
	Foliage             UMETA(DisplayName = "Foliage"),
	Shading             UMETA(DisplayName = "Shading")
};

// Create EEngineScalabilityLevel
UENUM(BlueprintType)
enum class EFlEngineScalabilityLevel : uint8
{
	Low       UMETA(DisplayName = "Low"),
	Medium    UMETA(DisplayName = "Medium"),
	High      UMETA(DisplayName = "High"),
	Ultra     UMETA(DisplayName = "Ultra"),
	Cinematic UMETA(DisplayName = "Cinematic")
};

// Structures
// Create structure used by OverallScalability
USTRUCT(BlueprintType)
struct FAllScalabilitys
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel ViewDistance = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel AntiAliasing = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel PostProcessing = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Shadows = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel GlobalIllumination = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Reflections = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Textures = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Effects = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Foliage = EFlEngineScalabilityLevel::Low;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlEngineScalabilityLevel Shading = EFlEngineScalabilityLevel::Low;
};