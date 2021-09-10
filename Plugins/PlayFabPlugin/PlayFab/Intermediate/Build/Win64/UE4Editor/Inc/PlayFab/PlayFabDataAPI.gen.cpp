// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabDataAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataAPI() {}
// Cross Module References
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataAPI();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms
		{
			FDataSetObjectsResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms, result), Z_Construct_UScriptStruct_FDataSetObjectsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessSetObjects__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms
		{
			FDataGetObjectsResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms, result), Z_Construct_UScriptStruct_FDataGetObjectsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Object\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "/\n Object\n\n callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessGetObjects__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms
		{
			FDataInitiateFileUploadsResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessInitiateFileUploads__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms
		{
			FDataGetFilesResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms, result), Z_Construct_UScriptStruct_FDataGetFilesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessGetFiles__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms
		{
			FDataFinalizeFileUploadsResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessFinalizeFileUploads__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms
		{
			FDataDeleteFilesResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms, result), Z_Construct_UScriptStruct_FDataDeleteFilesResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessDeleteFiles__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms
		{
			FDataAbortFileUploadsResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// File\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "/\n File\n\n callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessAbortFileUploads__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms
		{
			FPlayFabError error;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_error;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabDataRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperSetObjects)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperSetObjects(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execSetObjects)
	{
		P_GET_STRUCT(FDataSetObjectsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::SetObjects(Z_Param_request,FDelegateOnSuccessSetObjects(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperGetObjects)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetObjects(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execGetObjects)
	{
		P_GET_STRUCT(FDataGetObjectsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::GetObjects(Z_Param_request,FDelegateOnSuccessGetObjects(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperInitiateFileUploads)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperInitiateFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execInitiateFileUploads)
	{
		P_GET_STRUCT(FDataInitiateFileUploadsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::InitiateFileUploads(Z_Param_request,FDelegateOnSuccessInitiateFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperGetFiles)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetFiles(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execGetFiles)
	{
		P_GET_STRUCT(FDataGetFilesRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::GetFiles(Z_Param_request,FDelegateOnSuccessGetFiles(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperFinalizeFileUploads)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperFinalizeFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execFinalizeFileUploads)
	{
		P_GET_STRUCT(FDataFinalizeFileUploadsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::FinalizeFileUploads(Z_Param_request,FDelegateOnSuccessFinalizeFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperDeleteFiles)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperDeleteFiles(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execDeleteFiles)
	{
		P_GET_STRUCT(FDataDeleteFilesRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::DeleteFiles(Z_Param_request,FDelegateOnSuccessDeleteFiles(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execHelperAbortFileUploads)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperAbortFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataAPI::execAbortFileUploads)
	{
		P_GET_STRUCT(FDataAbortFileUploadsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::AbortFileUploads(Z_Param_request,FDelegateOnSuccessAbortFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabDataAPI::StaticRegisterNativesUPlayFabDataAPI()
	{
		UClass* Class = UPlayFabDataAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortFileUploads", &UPlayFabDataAPI::execAbortFileUploads },
			{ "DeleteFiles", &UPlayFabDataAPI::execDeleteFiles },
			{ "FinalizeFileUploads", &UPlayFabDataAPI::execFinalizeFileUploads },
			{ "GetFiles", &UPlayFabDataAPI::execGetFiles },
			{ "GetObjects", &UPlayFabDataAPI::execGetObjects },
			{ "HelperAbortFileUploads", &UPlayFabDataAPI::execHelperAbortFileUploads },
			{ "HelperDeleteFiles", &UPlayFabDataAPI::execHelperDeleteFiles },
			{ "HelperFinalizeFileUploads", &UPlayFabDataAPI::execHelperFinalizeFileUploads },
			{ "HelperGetFiles", &UPlayFabDataAPI::execHelperGetFiles },
			{ "HelperGetObjects", &UPlayFabDataAPI::execHelperGetObjects },
			{ "HelperInitiateFileUploads", &UPlayFabDataAPI::execHelperInitiateFileUploads },
			{ "HelperSetObjects", &UPlayFabDataAPI::execHelperSetObjects },
			{ "InitiateFileUploads", &UPlayFabDataAPI::execInitiateFileUploads },
			{ "SetObjects", &UPlayFabDataAPI::execSetObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics
	{
		struct PlayFabDataAPI_eventAbortFileUploads_Parms
		{
			FDataAbortFileUploadsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "/** Abort pending file uploads to an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Abort pending file uploads to an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "AbortFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventAbortFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics
	{
		struct PlayFabDataAPI_eventDeleteFiles_Parms
		{
			FDataDeleteFilesRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, request), Z_Construct_UScriptStruct_FDataDeleteFilesRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "/** Delete files on an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Delete files on an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DeleteFiles", nullptr, nullptr, sizeof(PlayFabDataAPI_eventDeleteFiles_Parms), Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics
	{
		struct PlayFabDataAPI_eventFinalizeFileUploads_Parms
		{
			FDataFinalizeFileUploadsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "/** Finalize file uploads to an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Finalize file uploads to an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "FinalizeFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventFinalizeFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics
	{
		struct PlayFabDataAPI_eventGetFiles_Parms
		{
			FDataGetFilesRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, request), Z_Construct_UScriptStruct_FDataGetFilesRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "/** Retrieves file metadata from an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Retrieves file metadata from an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "GetFiles", nullptr, nullptr, sizeof(PlayFabDataAPI_eventGetFiles_Parms), Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_GetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics
	{
		struct PlayFabDataAPI_eventGetObjects_Parms
		{
			FDataGetObjectsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, request), Z_Construct_UScriptStruct_FDataGetObjectsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
		{ "Comment", "/** Retrieves objects from an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Retrieves objects from an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "GetObjects", nullptr, nullptr, sizeof(PlayFabDataAPI_eventGetObjects_Parms), Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_GetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics
	{
		struct PlayFabDataAPI_eventHelperAbortFileUploads_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperAbortFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperAbortFileUploads_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperAbortFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperAbortFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperAbortFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics
	{
		struct PlayFabDataAPI_eventHelperDeleteFiles_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperDeleteFiles_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperDeleteFiles_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperDeleteFiles_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperDeleteFiles", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperDeleteFiles_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics
	{
		struct PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperFinalizeFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics
	{
		struct PlayFabDataAPI_eventHelperGetFiles_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetFiles_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperGetFiles_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperGetFiles_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperGetFiles", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperGetFiles_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics
	{
		struct PlayFabDataAPI_eventHelperGetObjects_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetObjects_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperGetObjects_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperGetObjects_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperGetObjects", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperGetObjects_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics
	{
		struct PlayFabDataAPI_eventHelperInitiateFileUploads_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperInitiateFileUploads_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperInitiateFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics
	{
		struct PlayFabDataAPI_eventHelperSetObjects_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperSetObjects_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabDataAPI_eventHelperSetObjects_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperSetObjects_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperSetObjects", nullptr, nullptr, sizeof(PlayFabDataAPI_eventHelperSetObjects_Parms), Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics
	{
		struct PlayFabDataAPI_eventInitiateFileUploads_Parms
		{
			FDataInitiateFileUploadsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
		{ "Comment", "/** Initiates file uploads to an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Initiates file uploads to an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "InitiateFileUploads", nullptr, nullptr, sizeof(PlayFabDataAPI_eventInitiateFileUploads_Parms), Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics
	{
		struct PlayFabDataAPI_eventSetObjects_Parms
		{
			FDataSetObjectsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabDataAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, request), Z_Construct_UScriptStruct_FDataSetObjectsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
		{ "Comment", "/** Sets objects on an entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Sets objects on an entity's profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "SetObjects", nullptr, nullptr, sizeof(PlayFabDataAPI_eventSetObjects_Parms), Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataAPI_SetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabDataAPI_NoRegister()
	{
		return UPlayFabDataAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabDataAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayFabResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallAuthenticationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabDataAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabDataAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads, "AbortFileUploads" }, // 2981174131
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3125623751
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature, "DelegateOnSuccessAbortFileUploads__DelegateSignature" }, // 3752749756
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature, "DelegateOnSuccessDeleteFiles__DelegateSignature" }, // 1304738350
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature, "DelegateOnSuccessFinalizeFileUploads__DelegateSignature" }, // 1589999672
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature, "DelegateOnSuccessGetFiles__DelegateSignature" }, // 153286396
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature, "DelegateOnSuccessGetObjects__DelegateSignature" }, // 1743012790
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature, "DelegateOnSuccessInitiateFileUploads__DelegateSignature" }, // 1090165990
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature, "DelegateOnSuccessSetObjects__DelegateSignature" }, // 2938982968
		{ &Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles, "DeleteFiles" }, // 1957802383
		{ &Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads, "FinalizeFileUploads" }, // 3505850134
		{ &Z_Construct_UFunction_UPlayFabDataAPI_GetFiles, "GetFiles" }, // 1316597543
		{ &Z_Construct_UFunction_UPlayFabDataAPI_GetObjects, "GetObjects" }, // 422620017
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads, "HelperAbortFileUploads" }, // 1603877205
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles, "HelperDeleteFiles" }, // 2204782608
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads, "HelperFinalizeFileUploads" }, // 2636152733
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles, "HelperGetFiles" }, // 4028789353
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects, "HelperGetObjects" }, // 2380925423
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads, "HelperInitiateFileUploads" }, // 3996875719
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects, "HelperSetObjects" }, // 3947786059
		{ &Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads, "InitiateFileUploads" }, // 2403571581
		{ &Z_Construct_UFunction_UPlayFabDataAPI_SetObjects, "SetObjects" }, // 2104121593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabDataAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabDataAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabDataAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabDataAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabDataAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabDataAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabDataAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabDataAPI_Statics::ClassParams = {
		&UPlayFabDataAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabDataAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabDataAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabDataAPI, 2268747743);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabDataAPI>()
	{
		return UPlayFabDataAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabDataAPI(Z_Construct_UClass_UPlayFabDataAPI, &UPlayFabDataAPI::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabDataAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabDataAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
