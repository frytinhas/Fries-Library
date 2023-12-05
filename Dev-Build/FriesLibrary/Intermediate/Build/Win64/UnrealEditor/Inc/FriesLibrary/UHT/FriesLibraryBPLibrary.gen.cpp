// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriesLibrary/Public/FriesLibraryBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriesLibraryBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FRIESLIBRARY_API UClass* Z_Construct_UClass_UFriesLibraryBPLibrary();
	FRIESLIBRARY_API UClass* Z_Construct_UClass_UFriesLibraryBPLibrary_NoRegister();
	FRIESLIBRARY_API UClass* Z_Construct_UClass_UOverallScalability_NoRegister();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod();
	FRIESLIBRARY_API UEnum* Z_Construct_UEnum_FriesLibrary_EGraphicsRHI();
	UPackage* Z_Construct_UPackage__Script_FriesLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetRayTracing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriesLibraryBPLibrary::SetRayTracing(Z_Param_WorldContextObject,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execRayTracingIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriesLibraryBPLibrary::RayTracingIsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execRayTracingIsSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriesLibraryBPLibrary::RayTracingIsSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execGetCurrentGraphicsRHI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGraphicsRHI*)Z_Param__Result=UFriesLibraryBPLibrary::GetCurrentGraphicsRHI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetGraphicsRHI)
	{
		P_GET_ENUM(EGraphicsRHI,Z_Param_GraphicsRHI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SetGraphicsRHI(EGraphicsRHI(Z_Param_GraphicsRHI));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetOverallScalability)
	{
		P_GET_OBJECT(UOverallScalability,Z_Param_OverallData);
		P_GET_ENUM(EFlEngineScalabilityLevel,Z_Param_NewScalabilityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SetOverallScalability(Z_Param_OverallData,EFlEngineScalabilityLevel(Z_Param_NewScalabilityLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execModifyScalability)
	{
		P_GET_ENUM(EFlEngineScalabilityType,Z_Param_ScalabilityToModify);
		P_GET_ENUM(EFlEngineScalabilityLevel,Z_Param_NewScalabilityLevel);
		P_GET_UBOOL(Z_Param_bSaveInConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::ModifyScalability(EFlEngineScalabilityType(Z_Param_ScalabilityToModify),EFlEngineScalabilityLevel(Z_Param_NewScalabilityLevel),Z_Param_bSaveInConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execGetScalabilityLevel)
	{
		P_GET_ENUM(EFlEngineScalabilityType,Z_Param_ScalabilityToGet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFlEngineScalabilityLevel*)Z_Param__Result=UFriesLibraryBPLibrary::GetScalabilityLevel(EFlEngineScalabilityType(Z_Param_ScalabilityToGet));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSaveGameUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SaveGameUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetGlobalIlluminationMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EFlGlobalIlluminationMethod,Z_Param_NewGlobalIllumination);
		P_GET_UBOOL(Z_Param_bSaveInConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SetGlobalIlluminationMethod(Z_Param_WorldContextObject,EFlGlobalIlluminationMethod(Z_Param_NewGlobalIllumination),Z_Param_bSaveInConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetAntiAliasingMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EFlAntiAliasingMethod,Z_Param_NewAntiAliasingMethod);
		P_GET_UBOOL(Z_Param_bSaveInConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SetAntiAliasingMethod(Z_Param_WorldContextObject,EFlAntiAliasingMethod(Z_Param_NewAntiAliasingMethod),Z_Param_bSaveInConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execSetAmbientOcclusion)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EFlAmbientOcclusion,Z_Param_NewAmbientOcclusion);
		P_GET_UBOOL(Z_Param_bSaveInConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::SetAmbientOcclusion(Z_Param_WorldContextObject,EFlAmbientOcclusion(Z_Param_NewAmbientOcclusion),Z_Param_bSaveInConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execGetGlobalIllumination)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFlGlobalIlluminationMethod*)Z_Param__Result=UFriesLibraryBPLibrary::GetGlobalIllumination();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execGetAntiAliasingMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFlAntiAliasingMethod*)Z_Param__Result=UFriesLibraryBPLibrary::GetAntiAliasingMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execGetAmbientOcclusion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFlAmbientOcclusion*)Z_Param__Result=UFriesLibraryBPLibrary::GetAmbientOcclusion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execIsAIControlled)
	{
		P_GET_OBJECT(APawn,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriesLibraryBPLibrary::IsAIControlled(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execRandomLetterInRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_GET_UBOOL(Z_Param_bToUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriesLibraryBPLibrary::RandomLetterInRange(Z_Param_Min,Z_Param_Max,Z_Param_bToUpper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execRandomLetter)
	{
		P_GET_UBOOL(Z_Param_bToUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriesLibraryBPLibrary::RandomLetter(Z_Param_bToUpper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_UBOOL(Z_Param_bPrintIfInvalid);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintObject(Z_Param_WorldContextObject,Z_Param_Object,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_bPrintIfInvalid,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintTransform(Z_Param_WorldContextObject,Z_Param_Out_TransformValue,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintRotator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FRotator,Z_Param_RotatorValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintRotator(Z_Param_WorldContextObject,Z_Param_RotatorValue,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintVector)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_VectorValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintVector(Z_Param_WorldContextObject,Z_Param_VectorValue,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintName(Z_Param_WorldContextObject,Z_Param_InName,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintFloat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintFloat(Z_Param_WorldContextObject,Z_Param_FloatValue,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintInteger)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegerValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintInteger(Z_Param_WorldContextObject,Z_Param_IntegerValue,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriesLibraryBPLibrary::execPrintBoolean)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bInBoolean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bPrintFunctionOwner);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriesLibraryBPLibrary::PrintBoolean(Z_Param_WorldContextObject,Z_Param_bInBoolean,Z_Param_Duration,Z_Param_bPrintFunctionOwner,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Key);
		P_NATIVE_END;
	}
	void UFriesLibraryBPLibrary::StaticRegisterNativesUFriesLibraryBPLibrary()
	{
		UClass* Class = UFriesLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmbientOcclusion", &UFriesLibraryBPLibrary::execGetAmbientOcclusion },
			{ "GetAntiAliasingMethod", &UFriesLibraryBPLibrary::execGetAntiAliasingMethod },
			{ "GetCurrentGraphicsRHI", &UFriesLibraryBPLibrary::execGetCurrentGraphicsRHI },
			{ "GetGlobalIllumination", &UFriesLibraryBPLibrary::execGetGlobalIllumination },
			{ "GetScalabilityLevel", &UFriesLibraryBPLibrary::execGetScalabilityLevel },
			{ "IsAIControlled", &UFriesLibraryBPLibrary::execIsAIControlled },
			{ "ModifyScalability", &UFriesLibraryBPLibrary::execModifyScalability },
			{ "PrintBoolean", &UFriesLibraryBPLibrary::execPrintBoolean },
			{ "PrintFloat", &UFriesLibraryBPLibrary::execPrintFloat },
			{ "PrintInteger", &UFriesLibraryBPLibrary::execPrintInteger },
			{ "PrintName", &UFriesLibraryBPLibrary::execPrintName },
			{ "PrintObject", &UFriesLibraryBPLibrary::execPrintObject },
			{ "PrintRotator", &UFriesLibraryBPLibrary::execPrintRotator },
			{ "PrintTransform", &UFriesLibraryBPLibrary::execPrintTransform },
			{ "PrintVector", &UFriesLibraryBPLibrary::execPrintVector },
			{ "RandomLetter", &UFriesLibraryBPLibrary::execRandomLetter },
			{ "RandomLetterInRange", &UFriesLibraryBPLibrary::execRandomLetterInRange },
			{ "RayTracingIsEnabled", &UFriesLibraryBPLibrary::execRayTracingIsEnabled },
			{ "RayTracingIsSupported", &UFriesLibraryBPLibrary::execRayTracingIsSupported },
			{ "SaveGameUserSettings", &UFriesLibraryBPLibrary::execSaveGameUserSettings },
			{ "SetAmbientOcclusion", &UFriesLibraryBPLibrary::execSetAmbientOcclusion },
			{ "SetAntiAliasingMethod", &UFriesLibraryBPLibrary::execSetAntiAliasingMethod },
			{ "SetGlobalIlluminationMethod", &UFriesLibraryBPLibrary::execSetGlobalIlluminationMethod },
			{ "SetGraphicsRHI", &UFriesLibraryBPLibrary::execSetGraphicsRHI },
			{ "SetOverallScalability", &UFriesLibraryBPLibrary::execSetOverallScalability },
			{ "SetRayTracing", &UFriesLibraryBPLibrary::execSetRayTracing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics
	{
		struct FriesLibraryBPLibrary_eventGetAmbientOcclusion_Parms
		{
			EFlAmbientOcclusion ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetAmbientOcclusion_Parms, ReturnValue), Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion, METADATA_PARAMS(0, nullptr) }; // 1444725162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Ambient Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Get current ambient occlusion method\n" },
#endif
		{ "Keywords", "get ambient" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nGet current ambient occlusion method" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "GetAmbientOcclusion", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::FriesLibraryBPLibrary_eventGetAmbientOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::FriesLibraryBPLibrary_eventGetAmbientOcclusion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics
	{
		struct FriesLibraryBPLibrary_eventGetAntiAliasingMethod_Parms
		{
			EFlAntiAliasingMethod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetAntiAliasingMethod_Parms, ReturnValue), Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod, METADATA_PARAMS(0, nullptr) }; // 4226385385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Anti-Aliasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Get current anti-aliasing method\n" },
#endif
		{ "Keywords", "get anti" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nGet current anti-aliasing method" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "GetAntiAliasingMethod", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::FriesLibraryBPLibrary_eventGetAntiAliasingMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::FriesLibraryBPLibrary_eventGetAntiAliasingMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics
	{
		struct FriesLibraryBPLibrary_eventGetCurrentGraphicsRHI_Parms
		{
			EGraphicsRHI ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetCurrentGraphicsRHI_Parms, ReturnValue), Z_Construct_UEnum_FriesLibrary_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 2761940311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|RHI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RHI Functions\n// Get current RHI in the game (Needs restart)\n" },
#endif
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RHI Functions\nGet current RHI in the game (Needs restart)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "GetCurrentGraphicsRHI", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::FriesLibraryBPLibrary_eventGetCurrentGraphicsRHI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::FriesLibraryBPLibrary_eventGetCurrentGraphicsRHI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics
	{
		struct FriesLibraryBPLibrary_eventGetGlobalIllumination_Parms
		{
			EFlGlobalIlluminationMethod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetGlobalIllumination_Parms, ReturnValue), Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod, METADATA_PARAMS(0, nullptr) }; // 1260209559
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Anti-Aliasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Get current global illumination method\n" },
#endif
		{ "Keywords", "get global" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nGet current global illumination method" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "GetGlobalIllumination", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::FriesLibraryBPLibrary_eventGetGlobalIllumination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::FriesLibraryBPLibrary_eventGetGlobalIllumination_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics
	{
		struct FriesLibraryBPLibrary_eventGetScalabilityLevel_Parms
		{
			EFlEngineScalabilityType ScalabilityToGet;
			EFlEngineScalabilityLevel ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalabilityToGet_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityToGet_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalabilityToGet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet = { "ScalabilityToGet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetScalabilityLevel_Parms, ScalabilityToGet), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet_MetaData) }; // 1969207356
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventGetScalabilityLevel_Parms, ReturnValue), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(0, nullptr) }; // 2465420634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ScalabilityToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Get scalability level by scalability type\n" },
#endif
		{ "Keywords", "scalability" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nGet scalability level by scalability type" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "GetScalabilityLevel", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::FriesLibraryBPLibrary_eventGetScalabilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::FriesLibraryBPLibrary_eventGetScalabilityLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics
	{
		struct FriesLibraryBPLibrary_eventIsAIControlled_Parms
		{
			const APawn* Target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventIsAIControlled_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_Target_MetaData) };
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventIsAIControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventIsAIControlled_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random Things that can help you\n// Verify that the pawn (Target) is controlled by AI (Deprecated, use \"IsBotControlled\")\n// In the next commit this function will be removed!\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random Things that can help you\nVerify that the pawn (Target) is controlled by AI (Deprecated, use \"IsBotControlled\")\nIn the next commit this function will be removed!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "IsAIControlled", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::FriesLibraryBPLibrary_eventIsAIControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::FriesLibraryBPLibrary_eventIsAIControlled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics
	{
		struct FriesLibraryBPLibrary_eventModifyScalability_Parms
		{
			EFlEngineScalabilityType ScalabilityToModify;
			EFlEngineScalabilityLevel NewScalabilityLevel;
			bool bSaveInConfig;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalabilityToModify_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityToModify_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalabilityToModify;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewScalabilityLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewScalabilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewScalabilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveInConfig_MetaData[];
#endif
		static void NewProp_bSaveInConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveInConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify = { "ScalabilityToModify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventModifyScalability_Parms, ScalabilityToModify), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify_MetaData) }; // 1969207356
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel = { "NewScalabilityLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventModifyScalability_Parms, NewScalabilityLevel), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel_MetaData) }; // 2465420634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventModifyScalability_Parms*)Obj)->bSaveInConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig = { "bSaveInConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventModifyScalability_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_ScalabilityToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_NewScalabilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::NewProp_bSaveInConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Modify scalability by level\n" },
#endif
		{ "CPP_Default_bSaveInConfig", "true" },
		{ "Keywords", "scalability" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nModify scalability by level" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "ModifyScalability", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::FriesLibraryBPLibrary_eventModifyScalability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::FriesLibraryBPLibrary_eventModifyScalability_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintBoolean_Parms
		{
			const UObject* WorldContextObject;
			bool bInBoolean;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBoolean_MetaData[];
#endif
		static void NewProp_bInBoolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBoolean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintBoolean_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintBoolean_Parms*)Obj)->bInBoolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean = { "bInBoolean", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintBoolean_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintBoolean_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintBoolean_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintBoolean_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintBoolean_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintBoolean_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bInBoolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a boolean to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bInBoolean", "true" },
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a boolean to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintBoolean", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::FriesLibraryBPLibrary_eventPrintBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::FriesLibraryBPLibrary_eventPrintBoolean_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintFloat_Parms
		{
			const UObject* WorldContextObject;
			float FloatValue;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintFloat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_FloatValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintFloat_Parms, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_FloatValue_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_FloatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintFloat_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintFloat_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintFloat_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintFloat_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintFloat_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintFloat_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintFloat_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintFloat_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a float to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_FloatValue", "0.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a float to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintFloat", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::FriesLibraryBPLibrary_eventPrintFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::FriesLibraryBPLibrary_eventPrintFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintInteger_Parms
		{
			const UObject* WorldContextObject;
			int32 IntegerValue;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintInteger_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_IntegerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintInteger_Parms, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_IntegerValue_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_IntegerValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintInteger_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintInteger_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintInteger_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintInteger_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintInteger_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintInteger_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintInteger_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintInteger_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintInteger_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_IntegerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a integer to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_IntegerValue", "0" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=1.000000,B=0.500000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a integer to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintInteger", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::FriesLibraryBPLibrary_eventPrintInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::FriesLibraryBPLibrary_eventPrintInteger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintName_Parms
		{
			const UObject* WorldContextObject;
			FName InName;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintName_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintName_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintName_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintName_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintName_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintName_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintName_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintName_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintName_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a name to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InName", "None" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.500000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a name to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintName", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::FriesLibraryBPLibrary_eventPrintName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::FriesLibraryBPLibrary_eventPrintName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintObject_Parms
		{
			const UObject* WorldContextObject;
			const UObject* Object;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			bool bPrintIfInvalid;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintIfInvalid_MetaData[];
#endif
		static void NewProp_bPrintIfInvalid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintIfInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Object_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Object_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintObject_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintObject_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintObject_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintObject_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintObject_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintObject_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintObject_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintObject_Parms*)Obj)->bPrintIfInvalid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid = { "bPrintIfInvalid", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintObject_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintObject_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_bPrintIfInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a object to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintIfInvalid", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.250000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a object to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintObject", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::FriesLibraryBPLibrary_eventPrintObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::FriesLibraryBPLibrary_eventPrintObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintRotator_Parms
		{
			const UObject* WorldContextObject;
			FRotator RotatorValue;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintRotator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_RotatorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintRotator_Parms, RotatorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_RotatorValue_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_RotatorValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintRotator_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintRotator_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintRotator_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintRotator_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintRotator_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen_MetaData) };
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintRotator_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintRotator_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintRotator_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_RotatorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a rotator to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_RotatorValue", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_TextColor", "(R=0.250000,G=0.250000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a rotator to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintRotator", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::FriesLibraryBPLibrary_eventPrintRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::FriesLibraryBPLibrary_eventPrintRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintTransform_Parms
		{
			const UObject* WorldContextObject;
			FTransform TransformValue;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TransformValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintTransform_Parms, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TransformValue_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TransformValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintTransform_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintTransform_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintTransform_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintTransform_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintTransform_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintTransform_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintTransform_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintTransform_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintTransform_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TransformValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a transform to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=0.250000,B=0.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a transform to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintTransform", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::FriesLibraryBPLibrary_eventPrintTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::FriesLibraryBPLibrary_eventPrintTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics
	{
		struct FriesLibraryBPLibrary_eventPrintVector_Parms
		{
			const UObject* WorldContextObject;
			FVector VectorValue;
			float Duration;
			bool bPrintFunctionOwner;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintFunctionOwner_MetaData[];
#endif
		static void NewProp_bPrintFunctionOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintFunctionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintVector_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_VectorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintVector_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_VectorValue_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_VectorValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintVector_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintVector_Parms*)Obj)->bPrintFunctionOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner = { "bPrintFunctionOwner", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintVector_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintVector_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintVector_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen_MetaData) };
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventPrintVector_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventPrintVector_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintVector_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_TextColor_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventPrintVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintFunctionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a vector to the log, and optionally, to the screen\n// If Print To Log is true, it will be visible in the Output Log window.\n" },
#endif
		{ "CPP_Default_bPrintFunctionOwner", "true" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_VectorValue", "0.000000,0.000000,0.000000" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a vector to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "PrintVector", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::FriesLibraryBPLibrary_eventPrintVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::FriesLibraryBPLibrary_eventPrintVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics
	{
		struct FriesLibraryBPLibrary_eventRandomLetter_Parms
		{
			bool bToUpper;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToUpper_MetaData[];
#endif
		static void NewProp_bToUpper_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToUpper;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventRandomLetter_Parms*)Obj)->bToUpper = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper = { "bToUpper", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventRandomLetter_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventRandomLetter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_bToUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Math|Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random Things that can help you\n// Get a random letter, is useful for generating random text, as a plate\n" },
#endif
		{ "CPP_Default_bToUpper", "true" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random Things that can help you\nGet a random letter, is useful for generating random text, as a plate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "RandomLetter", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::FriesLibraryBPLibrary_eventRandomLetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::FriesLibraryBPLibrary_eventRandomLetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics
	{
		struct FriesLibraryBPLibrary_eventRandomLetterInRange_Parms
		{
			int32 Min;
			int32 Max;
			bool bToUpper;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToUpper_MetaData[];
#endif
		static void NewProp_bToUpper_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToUpper;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventRandomLetterInRange_Parms, Min), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventRandomLetterInRange_Parms, Max), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventRandomLetterInRange_Parms*)Obj)->bToUpper = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper = { "bToUpper", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventRandomLetterInRange_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventRandomLetterInRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_bToUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Math|Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random Things that can help you\n// Get a random letter by range, is useful for generating random text, as a plate\n" },
#endif
		{ "CPP_Default_bToUpper", "true" },
		{ "CPP_Default_Max", "26" },
		{ "CPP_Default_Min", "0" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random Things that can help you\nGet a random letter by range, is useful for generating random text, as a plate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "RandomLetterInRange", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::FriesLibraryBPLibrary_eventRandomLetterInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::FriesLibraryBPLibrary_eventRandomLetterInRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics
	{
		struct FriesLibraryBPLibrary_eventRayTracingIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventRayTracingIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventRayTracingIsEnabled_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Ray Tracing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ray Tracing Additional Functions\n// Verify is ray tracing is enabled.\n" },
#endif
		{ "Keywords", "raytracing" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray Tracing Additional Functions\nVerify is ray tracing is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "RayTracingIsEnabled", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::FriesLibraryBPLibrary_eventRayTracingIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::FriesLibraryBPLibrary_eventRayTracingIsEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics
	{
		struct FriesLibraryBPLibrary_eventRayTracingIsSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventRayTracingIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventRayTracingIsSupported_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Ray Tracing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ray Tracing Additional Functions\n// Verify if ray tracing is available in current GPU.\n" },
#endif
		{ "Keywords", "raytracing" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray Tracing Additional Functions\nVerify if ray tracing is available in current GPU." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "RayTracingIsSupported", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::FriesLibraryBPLibrary_eventRayTracingIsSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::FriesLibraryBPLibrary_eventRayTracingIsSupported_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Save and apply all game user settings\n" },
#endif
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nSave and apply all game user settings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SaveGameUserSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics
	{
		struct FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms
		{
			const UObject* WorldContextObject;
			EFlAmbientOcclusion NewAmbientOcclusion;
			bool bSaveInConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAmbientOcclusion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAmbientOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveInConfig_MetaData[];
#endif
		static void NewProp_bSaveInConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveInConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion = { "NewAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms, NewAmbientOcclusion), Z_Construct_UEnum_FriesLibrary_EFlAmbientOcclusion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion_MetaData) }; // 1444725162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms*)Obj)->bSaveInConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig = { "bSaveInConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_NewAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::NewProp_bSaveInConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Settings|Ambient Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Set ambient occlusion method\n" },
#endif
		{ "CPP_Default_bSaveInConfig", "true" },
		{ "Keywords", "set ambient" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nSet ambient occlusion method" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetAmbientOcclusion", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::FriesLibraryBPLibrary_eventSetAmbientOcclusion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics
	{
		struct FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms
		{
			const UObject* WorldContextObject;
			EFlAntiAliasingMethod NewAntiAliasingMethod;
			bool bSaveInConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAntiAliasingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAntiAliasingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAntiAliasingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveInConfig_MetaData[];
#endif
		static void NewProp_bSaveInConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveInConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod = { "NewAntiAliasingMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms, NewAntiAliasingMethod), Z_Construct_UEnum_FriesLibrary_EFlAntiAliasingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod_MetaData) }; // 4226385385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms*)Obj)->bSaveInConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig = { "bSaveInConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_NewAntiAliasingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::NewProp_bSaveInConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Settings|Anti-Aliasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Set anti-aliasing method\n" },
#endif
		{ "CPP_Default_bSaveInConfig", "true" },
		{ "Keywords", "set anti" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nSet anti-aliasing method" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetAntiAliasingMethod", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::FriesLibraryBPLibrary_eventSetAntiAliasingMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics
	{
		struct FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms
		{
			const UObject* WorldContextObject;
			EFlGlobalIlluminationMethod NewGlobalIllumination;
			bool bSaveInConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGlobalIllumination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGlobalIllumination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGlobalIllumination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveInConfig_MetaData[];
#endif
		static void NewProp_bSaveInConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveInConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination = { "NewGlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms, NewGlobalIllumination), Z_Construct_UEnum_FriesLibrary_EFlGlobalIlluminationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination_MetaData) }; // 1260209559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms*)Obj)->bSaveInConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig = { "bSaveInConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_NewGlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::NewProp_bSaveInConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Settings|Illumination" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Set global illumination method\n" },
#endif
		{ "CPP_Default_bSaveInConfig", "true" },
		{ "Keywords", "set global" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nSet global illumination method" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetGlobalIlluminationMethod", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::FriesLibraryBPLibrary_eventSetGlobalIlluminationMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics
	{
		struct FriesLibraryBPLibrary_eventSetGraphicsRHI_Parms
		{
			EGraphicsRHI GraphicsRHI;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_GraphicsRHI_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsRHI_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphicsRHI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI = { "GraphicsRHI", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetGraphicsRHI_Parms, GraphicsRHI), Z_Construct_UEnum_FriesLibrary_EGraphicsRHI, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_MetaData) }; // 2761940311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|RHI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// RHI Functions\n// Set current RHI in the game (Needs restart)\n" },
#endif
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RHI Functions\nSet current RHI in the game (Needs restart)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetGraphicsRHI", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::FriesLibraryBPLibrary_eventSetGraphicsRHI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::FriesLibraryBPLibrary_eventSetGraphicsRHI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics
	{
		struct FriesLibraryBPLibrary_eventSetOverallScalability_Parms
		{
			const UOverallScalability* OverallData;
			EFlEngineScalabilityLevel NewScalabilityLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverallData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewScalabilityLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewScalabilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewScalabilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_OverallData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_OverallData = { "OverallData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetOverallScalability_Parms, OverallData), Z_Construct_UClass_UOverallScalability_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_OverallData_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_OverallData_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel = { "NewScalabilityLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetOverallScalability_Parms, NewScalabilityLevel), Z_Construct_UEnum_FriesLibrary_EFlEngineScalabilityLevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel_MetaData) }; // 2465420634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_OverallData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::NewProp_NewScalabilityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::Function_MetaDataParams[] = {
		{ "Category", "FriesLibrary|Settings|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional Functions to Game User Settings\n// Modify all scalability types by level\n" },
#endif
		{ "Keywords", "scalability" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Functions to Game User Settings\nModify all scalability types by level" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetOverallScalability", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::FriesLibraryBPLibrary_eventSetOverallScalability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::FriesLibraryBPLibrary_eventSetOverallScalability_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics
	{
		struct FriesLibraryBPLibrary_eventSetRayTracing_Parms
		{
			const UObject* WorldContextObject;
			bool bEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FriesLibraryBPLibrary_eventSetRayTracing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventSetRayTracing_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventSetRayTracing_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled_MetaData), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled_MetaData) };
	void Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FriesLibraryBPLibrary_eventSetRayTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FriesLibraryBPLibrary_eventSetRayTracing_Parms), &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FriesLibrary|Settings|Ray Tracing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ray Tracing Additional Functions\n// Set ray tracing enabled/disabled in current GPU if available.\n" },
#endif
		{ "Keywords", "raytracing" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray Tracing Additional Functions\nSet ray tracing enabled/disabled in current GPU if available." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriesLibraryBPLibrary, nullptr, "SetRayTracing", nullptr, nullptr, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::FriesLibraryBPLibrary_eventSetRayTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::FriesLibraryBPLibrary_eventSetRayTracing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFriesLibraryBPLibrary);
	UClass* Z_Construct_UClass_UFriesLibraryBPLibrary_NoRegister()
	{
		return UFriesLibraryBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFriesLibraryBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FriesLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAmbientOcclusion, "GetAmbientOcclusion" }, // 474295665
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_GetAntiAliasingMethod, "GetAntiAliasingMethod" }, // 2327121049
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_GetCurrentGraphicsRHI, "GetCurrentGraphicsRHI" }, // 3603652960
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_GetGlobalIllumination, "GetGlobalIllumination" }, // 3066499588
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_GetScalabilityLevel, "GetScalabilityLevel" }, // 2064030422
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_IsAIControlled, "IsAIControlled" }, // 212003277
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_ModifyScalability, "ModifyScalability" }, // 4005359145
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintBoolean, "PrintBoolean" }, // 1517090658
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintFloat, "PrintFloat" }, // 455941962
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintInteger, "PrintInteger" }, // 2158679953
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintName, "PrintName" }, // 544408825
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintObject, "PrintObject" }, // 1884941831
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintRotator, "PrintRotator" }, // 1921136836
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintTransform, "PrintTransform" }, // 2850560896
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_PrintVector, "PrintVector" }, // 1209222681
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetter, "RandomLetter" }, // 2329988534
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_RandomLetterInRange, "RandomLetterInRange" }, // 2993513007
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsEnabled, "RayTracingIsEnabled" }, // 1360235195
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_RayTracingIsSupported, "RayTracingIsSupported" }, // 779732302
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SaveGameUserSettings, "SaveGameUserSettings" }, // 2504754992
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAmbientOcclusion, "SetAmbientOcclusion" }, // 3666069646
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetAntiAliasingMethod, "SetAntiAliasingMethod" }, // 3732216101
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGlobalIlluminationMethod, "SetGlobalIlluminationMethod" }, // 2127142543
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetGraphicsRHI, "SetGraphicsRHI" }, // 3754057592
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetOverallScalability, "SetOverallScalability" }, // 1041385986
		{ &Z_Construct_UFunction_UFriesLibraryBPLibrary_SetRayTracing, "SetRayTracing" }, // 3509135160
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FriesLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FriesLibraryBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriesLibraryBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::ClassParams = {
		&UFriesLibraryBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFriesLibraryBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFriesLibraryBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFriesLibraryBPLibrary.OuterSingleton, Z_Construct_UClass_UFriesLibraryBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFriesLibraryBPLibrary.OuterSingleton;
	}
	template<> FRIESLIBRARY_API UClass* StaticClass<UFriesLibraryBPLibrary>()
	{
		return UFriesLibraryBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriesLibraryBPLibrary);
	UFriesLibraryBPLibrary::~UFriesLibraryBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFriesLibraryBPLibrary, UFriesLibraryBPLibrary::StaticClass, TEXT("UFriesLibraryBPLibrary"), &Z_Registration_Info_UClass_UFriesLibraryBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFriesLibraryBPLibrary), 1358139463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_1315662545(TEXT("/Script/FriesLibrary"),
		Z_CompiledInDeferFile_FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Frontline_New_Revolution_Plugins_Fries_Library_Dev_Build_FriesLibrary_Source_FriesLibrary_Public_FriesLibraryBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
