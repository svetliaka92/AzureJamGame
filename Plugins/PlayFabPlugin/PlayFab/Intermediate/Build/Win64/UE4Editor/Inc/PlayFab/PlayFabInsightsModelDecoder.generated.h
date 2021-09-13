// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FInsightsInsightsOperationResponse;
struct FInsightsInsightsGetPendingOperationsResponse;
struct FInsightsInsightsGetOperationStatusResponse;
struct FInsightsInsightsGetLimitsResponse;
struct FInsightsInsightsGetDetailsResponse;
#ifdef PLAYFAB_PlayFabInsightsModelDecoder_generated_h
#error "PlayFabInsightsModelDecoder.generated.h already included, missing '#pragma once' in PlayFabInsightsModelDecoder.h"
#endif
#define PLAYFAB_PlayFabInsightsModelDecoder_generated_h

#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_SPARSE_DATA
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeInsightsOperationResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetPendingOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetOperationStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetLimitsResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetDetailsResponseResponse);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeInsightsOperationResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetPendingOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetOperationStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetLimitsResponseResponse); \
	DECLARE_FUNCTION(execdecodeInsightsGetDetailsResponseResponse);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsModelDecoder)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsModelDecoder)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsModelDecoder(UPlayFabInsightsModelDecoder&&); \
	NO_API UPlayFabInsightsModelDecoder(const UPlayFabInsightsModelDecoder&); \
public:


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsModelDecoder(UPlayFabInsightsModelDecoder&&); \
	NO_API UPlayFabInsightsModelDecoder(const UPlayFabInsightsModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsModelDecoder)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_23_PROLOG
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_RPC_WRAPPERS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_INCLASS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabInsightsModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
