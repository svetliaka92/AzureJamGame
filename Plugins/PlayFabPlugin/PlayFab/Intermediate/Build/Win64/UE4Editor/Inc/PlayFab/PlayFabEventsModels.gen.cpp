// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEventsModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEventsWriteEventsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsWriteEventsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsWriteEventsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsResponse>()
{
	return FEventsWriteEventsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsWriteEventsResponse(FEventsWriteEventsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsWriteEventsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsWriteEventsResponse>(FName(TEXT("EventsWriteEventsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse;
	struct Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedEventIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssignedEventIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/**\n     * The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\n     * returned if FlushToPlayStream option is true.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\nreturned if FlushToPlayStream option is true." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds = { "AssignedEventIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsResponse, AssignedEventIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsWriteEventsResponse",
		sizeof(FEventsWriteEventsResponse),
		alignof(FEventsWriteEventsResponse),
		Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash() { return 3517599118U; }

static_assert(std::is_polymorphic<FEventsWriteEventsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsWriteEventsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsWriteEventsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsRequest"), sizeof(FEventsWriteEventsRequest), Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsRequest>()
{
	return FEventsWriteEventsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsWriteEventsRequest(FEventsWriteEventsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsWriteEventsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsWriteEventsRequest>(FName(TEXT("EventsWriteEventsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest;
	struct Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// PlayStream Events\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "/\n PlayStream Events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Collection of events to write to PlayStream. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Collection of events to write to PlayStream." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsRequest, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsWriteEventsRequest",
		sizeof(FEventsWriteEventsRequest),
		alignof(FEventsWriteEventsRequest),
		Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsWriteEventsRequest"), sizeof(FEventsWriteEventsRequest), Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash() { return 2596915916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
