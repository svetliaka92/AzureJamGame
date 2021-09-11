// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventsWriteEventsResponse;
class UObject;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FEventsWriteEventsRequest;
class UPlayFabEventsAPI;
#ifdef PLAYFAB_PlayFabEventsAPI_generated_h
#error "PlayFabEventsAPI.generated.h already included, missing '#pragma once' in PlayFabEventsAPI.h"
#endif
#define PLAYFAB_PlayFabEventsAPI_generated_h

#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_79_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms \
{ \
	FEventsWriteEventsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteTelemetryEvents.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_66_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms \
{ \
	FEventsWriteEventsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteEvents.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_32_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabEventsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEventsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabEventsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA
#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEvents); \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execWriteEvents);


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEvents); \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execWriteEvents);


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public:


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabEventsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, ResponseJsonObj); }


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_26_PROLOG
#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS_NO_PURE_DECLS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabEventsAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEventsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
