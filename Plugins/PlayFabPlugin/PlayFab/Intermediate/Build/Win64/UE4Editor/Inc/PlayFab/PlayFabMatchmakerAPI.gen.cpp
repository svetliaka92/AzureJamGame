// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabMatchmakerAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerAPI() {}
// Cross Module References
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms
		{
			FMatchmakerUserInfoResponse result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms, result), Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessUserInfo__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms
		{
			FMatchmakerStartGameResponse result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms, result), Z_Construct_UScriptStruct_FMatchmakerStartGameResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessStartGame__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms
		{
			FMatchmakerPlayerLeftResponse result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms, result), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessPlayerLeft__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms
		{
			FMatchmakerPlayerJoinedResponse result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms, result), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessPlayerJoined__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms
		{
			FMatchmakerAuthUserResponse result;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms, result), Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Matchmaking\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "/\n Matchmaking\n\n callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessAuthUser__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabMatchmakerRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperUserInfo)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperUserInfo(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execUserInfo)
	{
		P_GET_STRUCT(FMatchmakerUserInfoRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::UserInfo(Z_Param_request,FDelegateOnSuccessUserInfo(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperStartGame)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperStartGame(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execStartGame)
	{
		P_GET_STRUCT(FMatchmakerStartGameRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::StartGame(Z_Param_request,FDelegateOnSuccessStartGame(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperPlayerLeft)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPlayerLeft(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execPlayerLeft)
	{
		P_GET_STRUCT(FMatchmakerPlayerLeftRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::PlayerLeft(Z_Param_request,FDelegateOnSuccessPlayerLeft(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperPlayerJoined)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPlayerJoined(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execPlayerJoined)
	{
		P_GET_STRUCT(FMatchmakerPlayerJoinedRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::PlayerJoined(Z_Param_request,FDelegateOnSuccessPlayerJoined(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperAuthUser)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperAuthUser(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execAuthUser)
	{
		P_GET_STRUCT(FMatchmakerAuthUserRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::AuthUser(Z_Param_request,FDelegateOnSuccessAuthUser(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabMatchmakerAPI::StaticRegisterNativesUPlayFabMatchmakerAPI()
	{
		UClass* Class = UPlayFabMatchmakerAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthUser", &UPlayFabMatchmakerAPI::execAuthUser },
			{ "HelperAuthUser", &UPlayFabMatchmakerAPI::execHelperAuthUser },
			{ "HelperPlayerJoined", &UPlayFabMatchmakerAPI::execHelperPlayerJoined },
			{ "HelperPlayerLeft", &UPlayFabMatchmakerAPI::execHelperPlayerLeft },
			{ "HelperStartGame", &UPlayFabMatchmakerAPI::execHelperStartGame },
			{ "HelperUserInfo", &UPlayFabMatchmakerAPI::execHelperUserInfo },
			{ "PlayerJoined", &UPlayFabMatchmakerAPI::execPlayerJoined },
			{ "PlayerLeft", &UPlayFabMatchmakerAPI::execPlayerLeft },
			{ "StartGame", &UPlayFabMatchmakerAPI::execStartGame },
			{ "UserInfo", &UPlayFabMatchmakerAPI::execUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics
	{
		struct PlayFabMatchmakerAPI_eventAuthUser_Parms
		{
			FMatchmakerAuthUserRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, request), Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Validates a user with the PlayFab service */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Validates a user with the PlayFab service" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "AuthUser", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventAuthUser_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperAuthUser_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperAuthUser_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperAuthUser", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperPlayerJoined", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperPlayerLeft", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperStartGame_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperStartGame_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperStartGame_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperStartGame_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperStartGame_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperStartGame", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventHelperStartGame_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperUserInfo_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperUserInfo_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperUserInfo", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics
	{
		struct PlayFabMatchmakerAPI_eventPlayerJoined_Parms
		{
			FMatchmakerPlayerJoinedRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, request), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Informs the PlayFab game server hosting service that the indicated user has joined the Game Server Instance specified */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Informs the PlayFab game server hosting service that the indicated user has joined the Game Server Instance specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "PlayerJoined", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventPlayerJoined_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics
	{
		struct PlayFabMatchmakerAPI_eventPlayerLeft_Parms
		{
			FMatchmakerPlayerLeftRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, request), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Informs the PlayFab game server hosting service that the indicated user has left the Game Server Instance specified */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Informs the PlayFab game server hosting service that the indicated user has left the Game Server Instance specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "PlayerLeft", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventPlayerLeft_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics
	{
		struct PlayFabMatchmakerAPI_eventStartGame_Parms
		{
			FMatchmakerStartGameRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventStartGame_Parms, request), Z_Construct_UScriptStruct_FMatchmakerStartGameRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventStartGame_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventStartGame_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventStartGame_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventStartGame_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Instructs the PlayFab game server hosting service to instantiate a new Game Server Instance */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Instructs the PlayFab game server hosting service to instantiate a new Game Server Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "StartGame", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventStartGame_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics
	{
		struct PlayFabMatchmakerAPI_eventUserInfo_Parms
		{
			FMatchmakerUserInfoRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, request), Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/**\n     * Retrieves the relevant details for a specified user, which the external match-making service can then use to compute\n     * effective matches\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Retrieves the relevant details for a specified user, which the external match-making service can then use to compute\neffective matches" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "UserInfo", nullptr, nullptr, sizeof(PlayFabMatchmakerAPI_eventUserInfo_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister()
	{
		return UPlayFabMatchmakerAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser, "AuthUser" }, // 1876567052
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3066023626
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature, "DelegateOnSuccessAuthUser__DelegateSignature" }, // 1009477714
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature, "DelegateOnSuccessPlayerJoined__DelegateSignature" }, // 244330125
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature, "DelegateOnSuccessPlayerLeft__DelegateSignature" }, // 2795853833
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessStartGame__DelegateSignature, "DelegateOnSuccessStartGame__DelegateSignature" }, // 2760393739
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature, "DelegateOnSuccessUserInfo__DelegateSignature" }, // 1089693871
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser, "HelperAuthUser" }, // 4023772899
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined, "HelperPlayerJoined" }, // 941367095
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft, "HelperPlayerLeft" }, // 3443198085
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperStartGame, "HelperStartGame" }, // 3896589048
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo, "HelperUserInfo" }, // 3877894839
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined, "PlayerJoined" }, // 653933376
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft, "PlayerLeft" }, // 3854359131
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_StartGame, "StartGame" }, // 3713062163
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo, "UserInfo" }, // 2891375254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabMatchmakerAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabMatchmakerAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabMatchmakerAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabMatchmakerAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabMatchmakerAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabMatchmakerAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::ClassParams = {
		&UPlayFabMatchmakerAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabMatchmakerAPI, 191678757);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabMatchmakerAPI>()
	{
		return UPlayFabMatchmakerAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabMatchmakerAPI(Z_Construct_UClass_UPlayFabMatchmakerAPI, &UPlayFabMatchmakerAPI::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabMatchmakerAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabMatchmakerAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
