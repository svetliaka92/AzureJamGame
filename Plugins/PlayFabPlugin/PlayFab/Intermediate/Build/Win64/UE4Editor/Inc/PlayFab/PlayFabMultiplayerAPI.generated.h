// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultiplayerEmptyResponse;
class UObject;
struct FMultiplayerBuildAliasDetailsResponse;
struct FMultiplayerRolloverContainerRegistryCredentialsResponse;
struct FMultiplayerRequestMultiplayerServerResponse;
struct FMultiplayerListVirtualMachineSummariesResponse;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse;
struct FMultiplayerListQosServersForTitleResponse;
struct FMultiplayerListPartyQosServersResponse;
struct FMultiplayerListMultiplayerServersResponse;
struct FMultiplayerListContainerImageTagsResponse;
struct FMultiplayerListContainerImagesResponse;
struct FMultiplayerListCertificateSummariesResponse;
struct FMultiplayerListBuildSummariesResponse;
struct FMultiplayerListBuildAliasesResponse;
struct FMultiplayerListAssetSummariesResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;
struct FMultiplayerGetRemoteLoginEndpointResponse;
struct FMultiplayerGetMultiplayerServerLogsResponse;
struct FMultiplayerGetMultiplayerServerDetailsResponse;
struct FMultiplayerGetContainerRegistryCredentialsResponse;
struct FMultiplayerGetBuildResponse;
struct FMultiplayerGetAssetUploadUrlResponse;
struct FMultiplayerGetAssetDownloadUrlResponse;
struct FMultiplayerEnableMultiplayerServersForTitleResponse;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerCreateRemoteUserResponse;
struct FMultiplayerCreateBuildWithProcessBasedServerResponse;
struct FMultiplayerCreateBuildWithManagedContainerResponse;
struct FMultiplayerCreateBuildWithCustomContainerResponse;
struct FMultiplayerListServerBackfillTicketsForPlayerResult;
struct FMultiplayerListMatchmakingTicketsForPlayerResult;
struct FMultiplayerJoinMatchmakingTicketResult;
struct FMultiplayerGetServerBackfillTicketResult;
struct FMultiplayerGetQueueStatisticsResult;
struct FMultiplayerGetMatchmakingTicketResult;
struct FMultiplayerGetMatchResult;
struct FMultiplayerCreateMatchmakingTicketResult;
struct FMultiplayerCreateServerBackfillTicketResult;
struct FMultiplayerCancelServerBackfillTicketResult;
struct FMultiplayerCancelMatchmakingTicketResult;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult;
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FMultiplayerUploadCertificateRequest;
class UPlayFabMultiplayerAPI;
struct FMultiplayerUpdateBuildRegionsRequest;
struct FMultiplayerUpdateBuildRegionRequest;
struct FMultiplayerUpdateBuildNameRequest;
struct FMultiplayerUpdateBuildAliasRequest;
struct FMultiplayerUntagContainerImageRequest;
struct FMultiplayerShutdownMultiplayerServerRequest;
struct FMultiplayerRolloverContainerRegistryCredentialsRequest;
struct FMultiplayerRequestMultiplayerServerRequest;
struct FMultiplayerListVirtualMachineSummariesRequest;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest;
struct FMultiplayerListQosServersForTitleRequest;
struct FMultiplayerListPartyQosServersRequest;
struct FMultiplayerListMultiplayerServersRequest;
struct FMultiplayerListContainerImageTagsRequest;
struct FMultiplayerListContainerImagesRequest;
struct FMultiplayerListCertificateSummariesRequest;
struct FMultiplayerListBuildSummariesRequest;
struct FMultiplayerListBuildAliasesRequest;
struct FMultiplayerListAssetSummariesRequest;
struct FMultiplayerGetTitleMultiplayerServersQuotasRequest;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest;
struct FMultiplayerGetRemoteLoginEndpointRequest;
struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest;
struct FMultiplayerGetMultiplayerServerLogsRequest;
struct FMultiplayerGetMultiplayerServerDetailsRequest;
struct FMultiplayerGetContainerRegistryCredentialsRequest;
struct FMultiplayerGetBuildAliasRequest;
struct FMultiplayerGetBuildRequest;
struct FMultiplayerGetAssetUploadUrlRequest;
struct FMultiplayerGetAssetDownloadUrlRequest;
struct FMultiplayerEnableMultiplayerServersForTitleRequest;
struct FMultiplayerDeleteRemoteUserRequest;
struct FMultiplayerDeleteContainerImageRequest;
struct FMultiplayerDeleteCertificateRequest;
struct FMultiplayerDeleteBuildRegionRequest;
struct FMultiplayerDeleteBuildAliasRequest;
struct FMultiplayerDeleteBuildRequest;
struct FMultiplayerDeleteAssetRequest;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest;
struct FMultiplayerCreateRemoteUserRequest;
struct FMultiplayerCreateBuildWithProcessBasedServerRequest;
struct FMultiplayerCreateBuildWithManagedContainerRequest;
struct FMultiplayerCreateBuildWithCustomContainerRequest;
struct FMultiplayerCreateBuildAliasRequest;
struct FMultiplayerListServerBackfillTicketsForPlayerRequest;
struct FMultiplayerListMatchmakingTicketsForPlayerRequest;
struct FMultiplayerJoinMatchmakingTicketRequest;
struct FMultiplayerGetServerBackfillTicketRequest;
struct FMultiplayerGetQueueStatisticsRequest;
struct FMultiplayerGetMatchmakingTicketRequest;
struct FMultiplayerGetMatchRequest;
struct FMultiplayerCreateServerMatchmakingTicketRequest;
struct FMultiplayerCreateServerBackfillTicketRequest;
struct FMultiplayerCreateMatchmakingTicketRequest;
struct FMultiplayerCancelServerBackfillTicketRequest;
struct FMultiplayerCancelMatchmakingTicketRequest;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest;
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest;
#ifdef PLAYFAB_PlayFabMultiplayerAPI_generated_h
#error "PlayFabMultiplayerAPI.generated.h already included, missing '#pragma once' in PlayFabMultiplayerAPI.h"
#endif
#define PLAYFAB_PlayFabMultiplayerAPI_generated_h

#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_875_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUploadCertificate_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUploadCertificate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUploadCertificate, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUploadCertificate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUploadCertificate.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_862_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegions_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildRegions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildRegions, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildRegions.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_849_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegion_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildRegion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildRegion, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildRegion_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildRegion.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_836_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildName_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildName_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildName, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildName_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildName.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_823_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBuildAlias, FMultiplayerBuildAliasDetailsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUpdateBuildAlias_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_810_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessUntagContainerImage_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUntagContainerImage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUntagContainerImage, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessUntagContainerImage_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUntagContainerImage.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_797_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessShutdownMultiplayerServer_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessShutdownMultiplayerServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessShutdownMultiplayerServer, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessShutdownMultiplayerServer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessShutdownMultiplayerServer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_784_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessRolloverContainerRegistryCredentials_Parms \
{ \
	FMultiplayerRolloverContainerRegistryCredentialsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRolloverContainerRegistryCredentials_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRolloverContainerRegistryCredentials, FMultiplayerRolloverContainerRegistryCredentialsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessRolloverContainerRegistryCredentials_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRolloverContainerRegistryCredentials.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_768_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessRequestMultiplayerServer_Parms \
{ \
	FMultiplayerRequestMultiplayerServerResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRequestMultiplayerServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRequestMultiplayerServer, FMultiplayerRequestMultiplayerServerResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessRequestMultiplayerServer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRequestMultiplayerServer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_755_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListVirtualMachineSummaries_Parms \
{ \
	FMultiplayerListVirtualMachineSummariesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListVirtualMachineSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListVirtualMachineSummaries, FMultiplayerListVirtualMachineSummariesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListVirtualMachineSummaries_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListVirtualMachineSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_742_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_Parms \
{ \
	FMultiplayerListTitleMultiplayerServersQuotaChangesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTitleMultiplayerServersQuotaChanges, FMultiplayerListTitleMultiplayerServersQuotaChangesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListTitleMultiplayerServersQuotaChanges_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListTitleMultiplayerServersQuotaChanges.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_726_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListQosServersForTitle_Parms \
{ \
	FMultiplayerListQosServersForTitleResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListQosServersForTitle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQosServersForTitle, FMultiplayerListQosServersForTitleResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListQosServersForTitle_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListQosServersForTitle.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_713_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListPartyQosServers_Parms \
{ \
	FMultiplayerListPartyQosServersResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListPartyQosServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListPartyQosServers, FMultiplayerListPartyQosServersResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListPartyQosServers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListPartyQosServers.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_700_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListMultiplayerServers_Parms \
{ \
	FMultiplayerListMultiplayerServersResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMultiplayerServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMultiplayerServers, FMultiplayerListMultiplayerServersResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListMultiplayerServers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMultiplayerServers.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_687_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImageTags_Parms \
{ \
	FMultiplayerListContainerImageTagsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListContainerImageTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListContainerImageTags, FMultiplayerListContainerImageTagsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImageTags_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListContainerImageTags.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_674_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImages_Parms \
{ \
	FMultiplayerListContainerImagesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListContainerImages_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListContainerImages, FMultiplayerListContainerImagesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListContainerImages_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListContainerImages.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_661_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListCertificateSummaries_Parms \
{ \
	FMultiplayerListCertificateSummariesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListCertificateSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListCertificateSummaries, FMultiplayerListCertificateSummariesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListCertificateSummaries_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListCertificateSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_645_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildSummariesV2_Parms \
{ \
	FMultiplayerListBuildSummariesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListBuildSummariesV2_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListBuildSummariesV2, FMultiplayerListBuildSummariesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildSummariesV2_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListBuildSummariesV2.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_629_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildAliases_Parms \
{ \
	FMultiplayerListBuildAliasesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListBuildAliases_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListBuildAliases, FMultiplayerListBuildAliasesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListBuildAliases_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListBuildAliases.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_616_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListAssetSummaries_Parms \
{ \
	FMultiplayerListAssetSummariesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListAssetSummaries_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListAssetSummaries, FMultiplayerListAssetSummariesResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListAssetSummaries_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListAssetSummaries.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_603_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListArchivedMultiplayerServers_Parms \
{ \
	FMultiplayerListMultiplayerServersResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListArchivedMultiplayerServers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListArchivedMultiplayerServers, FMultiplayerListMultiplayerServersResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListArchivedMultiplayerServers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListArchivedMultiplayerServers.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_590_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotas_Parms \
{ \
	FMultiplayerGetTitleMultiplayerServersQuotasResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleMultiplayerServersQuotas_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleMultiplayerServersQuotas, FMultiplayerGetTitleMultiplayerServersQuotasResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotas_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleMultiplayerServersQuotas.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_577_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_Parms \
{ \
	FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleMultiplayerServersQuotaChange, FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleMultiplayerServersQuotaChange_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleMultiplayerServersQuotaChange.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_564_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_Parms \
{ \
	FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus, FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_551_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetRemoteLoginEndpoint_Parms \
{ \
	FMultiplayerGetRemoteLoginEndpointResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetRemoteLoginEndpoint_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetRemoteLoginEndpoint, FMultiplayerGetRemoteLoginEndpointResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetRemoteLoginEndpoint_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetRemoteLoginEndpoint.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_538_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_Parms \
{ \
	FMultiplayerGetMultiplayerServerLogsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerSessionLogsBySessionId, FMultiplayerGetMultiplayerServerLogsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerSessionLogsBySessionId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerSessionLogsBySessionId.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_525_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerLogs_Parms \
{ \
	FMultiplayerGetMultiplayerServerLogsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerServerLogs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerServerLogs, FMultiplayerGetMultiplayerServerLogsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerLogs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerServerLogs.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_512_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerDetails_Parms \
{ \
	FMultiplayerGetMultiplayerServerDetailsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMultiplayerServerDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMultiplayerServerDetails, FMultiplayerGetMultiplayerServerDetailsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMultiplayerServerDetails_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMultiplayerServerDetails.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_499_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetContainerRegistryCredentials_Parms \
{ \
	FMultiplayerGetContainerRegistryCredentialsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContainerRegistryCredentials_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContainerRegistryCredentials, FMultiplayerGetContainerRegistryCredentialsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetContainerRegistryCredentials_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContainerRegistryCredentials.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_486_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetBuildAlias, FMultiplayerBuildAliasDetailsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuildAlias_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_473_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuild_Parms \
{ \
	FMultiplayerGetBuildResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetBuild, FMultiplayerGetBuildResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetBuild_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetBuild.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_457_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetUploadUrl_Parms \
{ \
	FMultiplayerGetAssetUploadUrlResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAssetUploadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAssetUploadUrl, FMultiplayerGetAssetUploadUrlResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetUploadUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAssetUploadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_441_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetDownloadUrl_Parms \
{ \
	FMultiplayerGetAssetDownloadUrlResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAssetDownloadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAssetDownloadUrl, FMultiplayerGetAssetDownloadUrlResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetAssetDownloadUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAssetDownloadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_428_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessEnableMultiplayerServersForTitle_Parms \
{ \
	FMultiplayerEnableMultiplayerServersForTitleResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessEnableMultiplayerServersForTitle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessEnableMultiplayerServersForTitle, FMultiplayerEnableMultiplayerServersForTitleResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessEnableMultiplayerServersForTitle_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessEnableMultiplayerServersForTitle.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_415_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteRemoteUser_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteRemoteUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRemoteUser, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteRemoteUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteRemoteUser.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_402_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteContainerImageRepository_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteContainerImageRepository_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteContainerImageRepository, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteContainerImageRepository_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteContainerImageRepository.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_389_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteCertificate_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteCertificate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteCertificate, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteCertificate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteCertificate.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_376_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildRegion_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuildRegion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuildRegion, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildRegion_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuildRegion.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_363_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildAlias_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuildAlias, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuildAlias_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_350_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuild_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteBuild, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteBuild_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteBuild.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_337_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteAsset_Parms \
{ \
	FMultiplayerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteAsset_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteAsset, FMultiplayerEmptyResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessDeleteAsset_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteAsset.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_324_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_Parms \
{ \
	FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange, FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_311_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateRemoteUser_Parms \
{ \
	FMultiplayerCreateRemoteUserResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateRemoteUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRemoteUser, FMultiplayerCreateRemoteUserResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateRemoteUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateRemoteUser.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_298_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithProcessBasedServer_Parms \
{ \
	FMultiplayerCreateBuildWithProcessBasedServerResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithProcessBasedServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithProcessBasedServer, FMultiplayerCreateBuildWithProcessBasedServerResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithProcessBasedServer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithProcessBasedServer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_285_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithManagedContainer_Parms \
{ \
	FMultiplayerCreateBuildWithManagedContainerResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithManagedContainer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithManagedContainer, FMultiplayerCreateBuildWithManagedContainerResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithManagedContainer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithManagedContainer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_272_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithCustomContainer_Parms \
{ \
	FMultiplayerCreateBuildWithCustomContainerResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildWithCustomContainer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildWithCustomContainer, FMultiplayerCreateBuildWithCustomContainerResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildWithCustomContainer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildWithCustomContainer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_259_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildAlias_Parms \
{ \
	FMultiplayerBuildAliasDetailsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateBuildAlias_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateBuildAlias, FMultiplayerBuildAliasDetailsResponse result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateBuildAlias_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateBuildAlias.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_238_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListServerBackfillTicketsForPlayer_Parms \
{ \
	FMultiplayerListServerBackfillTicketsForPlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListServerBackfillTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListServerBackfillTicketsForPlayer, FMultiplayerListServerBackfillTicketsForPlayerResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListServerBackfillTicketsForPlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListServerBackfillTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_225_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessListMatchmakingTicketsForPlayer_Parms \
{ \
	FMultiplayerListMatchmakingTicketsForPlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMatchmakingTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMatchmakingTicketsForPlayer, FMultiplayerListMatchmakingTicketsForPlayerResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessListMatchmakingTicketsForPlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMatchmakingTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_212_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessJoinMatchmakingTicket_Parms \
{ \
	FMultiplayerJoinMatchmakingTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessJoinMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessJoinMatchmakingTicket, FMultiplayerJoinMatchmakingTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessJoinMatchmakingTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessJoinMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_199_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetServerBackfillTicket_Parms \
{ \
	FMultiplayerGetServerBackfillTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerBackfillTicket, FMultiplayerGetServerBackfillTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetServerBackfillTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_186_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetQueueStatistics_Parms \
{ \
	FMultiplayerGetQueueStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetQueueStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetQueueStatistics, FMultiplayerGetQueueStatisticsResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetQueueStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetQueueStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_173_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatchmakingTicket_Parms \
{ \
	FMultiplayerGetMatchmakingTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatchmakingTicket, FMultiplayerGetMatchmakingTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatchmakingTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_160_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatch_Parms \
{ \
	FMultiplayerGetMatchResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatch_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatch, FMultiplayerGetMatchResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessGetMatch_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatch.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_144_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerMatchmakingTicket_Parms \
{ \
	FMultiplayerCreateMatchmakingTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateServerMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateServerMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerMatchmakingTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateServerMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_127_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerBackfillTicket_Parms \
{ \
	FMultiplayerCreateServerBackfillTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateServerBackfillTicket, FMultiplayerCreateServerBackfillTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateServerBackfillTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_114_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateMatchmakingTicket_Parms \
{ \
	FMultiplayerCreateMatchmakingTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCreateMatchmakingTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_101_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelServerBackfillTicket_Parms \
{ \
	FMultiplayerCancelServerBackfillTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelServerBackfillTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelServerBackfillTicket, FMultiplayerCancelServerBackfillTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelServerBackfillTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelServerBackfillTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_88_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelMatchmakingTicket_Parms \
{ \
	FMultiplayerCancelMatchmakingTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelMatchmakingTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelMatchmakingTicket, FMultiplayerCancelMatchmakingTicketResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelMatchmakingTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelMatchmakingTicket.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_75_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_Parms \
{ \
	FMultiplayerCancelAllServerBackfillTicketsForPlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer, FMultiplayerCancelAllServerBackfillTicketsForPlayerResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_62_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_Parms \
{ \
	FMultiplayerCancelAllMatchmakingTicketsForPlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer, FMultiplayerCancelAllMatchmakingTicketsForPlayerResult result, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_32_DELEGATE \
struct PlayFabMultiplayerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabMultiplayerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabMultiplayerRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabMultiplayerRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabMultiplayerRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabMultiplayerRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabMultiplayerRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_SPARSE_DATA
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUploadCertificate); \
	DECLARE_FUNCTION(execUploadCertificate); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegions); \
	DECLARE_FUNCTION(execUpdateBuildRegions); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegion); \
	DECLARE_FUNCTION(execUpdateBuildRegion); \
	DECLARE_FUNCTION(execHelperUpdateBuildName); \
	DECLARE_FUNCTION(execUpdateBuildName); \
	DECLARE_FUNCTION(execHelperUpdateBuildAlias); \
	DECLARE_FUNCTION(execUpdateBuildAlias); \
	DECLARE_FUNCTION(execHelperUntagContainerImage); \
	DECLARE_FUNCTION(execUntagContainerImage); \
	DECLARE_FUNCTION(execHelperShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execHelperRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperRequestMultiplayerServer); \
	DECLARE_FUNCTION(execRequestMultiplayerServer); \
	DECLARE_FUNCTION(execHelperListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execHelperListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execHelperListQosServersForTitle); \
	DECLARE_FUNCTION(execListQosServersForTitle); \
	DECLARE_FUNCTION(execHelperListPartyQosServers); \
	DECLARE_FUNCTION(execListPartyQosServers); \
	DECLARE_FUNCTION(execHelperListMultiplayerServers); \
	DECLARE_FUNCTION(execListMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListContainerImageTags); \
	DECLARE_FUNCTION(execListContainerImageTags); \
	DECLARE_FUNCTION(execHelperListContainerImages); \
	DECLARE_FUNCTION(execListContainerImages); \
	DECLARE_FUNCTION(execHelperListCertificateSummaries); \
	DECLARE_FUNCTION(execListCertificateSummaries); \
	DECLARE_FUNCTION(execHelperListBuildSummariesV2); \
	DECLARE_FUNCTION(execListBuildSummariesV2); \
	DECLARE_FUNCTION(execHelperListBuildAliases); \
	DECLARE_FUNCTION(execListBuildAliases); \
	DECLARE_FUNCTION(execHelperListAssetSummaries); \
	DECLARE_FUNCTION(execListAssetSummaries); \
	DECLARE_FUNCTION(execHelperListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execHelperGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execHelperGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execHelperGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperGetBuildAlias); \
	DECLARE_FUNCTION(execGetBuildAlias); \
	DECLARE_FUNCTION(execHelperGetBuild); \
	DECLARE_FUNCTION(execGetBuild); \
	DECLARE_FUNCTION(execHelperGetAssetUploadUrl); \
	DECLARE_FUNCTION(execGetAssetUploadUrl); \
	DECLARE_FUNCTION(execHelperGetAssetDownloadUrl); \
	DECLARE_FUNCTION(execGetAssetDownloadUrl); \
	DECLARE_FUNCTION(execHelperEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execHelperDeleteRemoteUser); \
	DECLARE_FUNCTION(execDeleteRemoteUser); \
	DECLARE_FUNCTION(execHelperDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execHelperDeleteCertificate); \
	DECLARE_FUNCTION(execDeleteCertificate); \
	DECLARE_FUNCTION(execHelperDeleteBuildRegion); \
	DECLARE_FUNCTION(execDeleteBuildRegion); \
	DECLARE_FUNCTION(execHelperDeleteBuildAlias); \
	DECLARE_FUNCTION(execDeleteBuildAlias); \
	DECLARE_FUNCTION(execHelperDeleteBuild); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execHelperDeleteAsset); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execHelperCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperCreateRemoteUser); \
	DECLARE_FUNCTION(execCreateRemoteUser); \
	DECLARE_FUNCTION(execHelperCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildAlias); \
	DECLARE_FUNCTION(execCreateBuildAlias); \
	DECLARE_FUNCTION(execHelperListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetServerBackfillTicket); \
	DECLARE_FUNCTION(execGetServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperGetQueueStatistics); \
	DECLARE_FUNCTION(execGetQueueStatistics); \
	DECLARE_FUNCTION(execHelperGetMatchmakingTicket); \
	DECLARE_FUNCTION(execGetMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetMatch); \
	DECLARE_FUNCTION(execGetMatch); \
	DECLARE_FUNCTION(execHelperCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllMatchmakingTicketsForPlayer);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUploadCertificate); \
	DECLARE_FUNCTION(execUploadCertificate); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegions); \
	DECLARE_FUNCTION(execUpdateBuildRegions); \
	DECLARE_FUNCTION(execHelperUpdateBuildRegion); \
	DECLARE_FUNCTION(execUpdateBuildRegion); \
	DECLARE_FUNCTION(execHelperUpdateBuildName); \
	DECLARE_FUNCTION(execUpdateBuildName); \
	DECLARE_FUNCTION(execHelperUpdateBuildAlias); \
	DECLARE_FUNCTION(execUpdateBuildAlias); \
	DECLARE_FUNCTION(execHelperUntagContainerImage); \
	DECLARE_FUNCTION(execUntagContainerImage); \
	DECLARE_FUNCTION(execHelperShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execShutdownMultiplayerServer); \
	DECLARE_FUNCTION(execHelperRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execRolloverContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperRequestMultiplayerServer); \
	DECLARE_FUNCTION(execRequestMultiplayerServer); \
	DECLARE_FUNCTION(execHelperListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execListVirtualMachineSummaries); \
	DECLARE_FUNCTION(execHelperListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execListTitleMultiplayerServersQuotaChanges); \
	DECLARE_FUNCTION(execHelperListQosServersForTitle); \
	DECLARE_FUNCTION(execListQosServersForTitle); \
	DECLARE_FUNCTION(execHelperListPartyQosServers); \
	DECLARE_FUNCTION(execListPartyQosServers); \
	DECLARE_FUNCTION(execHelperListMultiplayerServers); \
	DECLARE_FUNCTION(execListMultiplayerServers); \
	DECLARE_FUNCTION(execHelperListContainerImageTags); \
	DECLARE_FUNCTION(execListContainerImageTags); \
	DECLARE_FUNCTION(execHelperListContainerImages); \
	DECLARE_FUNCTION(execListContainerImages); \
	DECLARE_FUNCTION(execHelperListCertificateSummaries); \
	DECLARE_FUNCTION(execListCertificateSummaries); \
	DECLARE_FUNCTION(execHelperListBuildSummariesV2); \
	DECLARE_FUNCTION(execListBuildSummariesV2); \
	DECLARE_FUNCTION(execHelperListBuildAliases); \
	DECLARE_FUNCTION(execListBuildAliases); \
	DECLARE_FUNCTION(execHelperListAssetSummaries); \
	DECLARE_FUNCTION(execListAssetSummaries); \
	DECLARE_FUNCTION(execHelperListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execListArchivedMultiplayerServers); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotas); \
	DECLARE_FUNCTION(execHelperGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execGetTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execGetTitleEnabledForMultiplayerServersStatus); \
	DECLARE_FUNCTION(execHelperGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execGetRemoteLoginEndpoint); \
	DECLARE_FUNCTION(execHelperGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execGetMultiplayerSessionLogsBySessionId); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execGetMultiplayerServerLogs); \
	DECLARE_FUNCTION(execHelperGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execGetMultiplayerServerDetails); \
	DECLARE_FUNCTION(execHelperGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execGetContainerRegistryCredentials); \
	DECLARE_FUNCTION(execHelperGetBuildAlias); \
	DECLARE_FUNCTION(execGetBuildAlias); \
	DECLARE_FUNCTION(execHelperGetBuild); \
	DECLARE_FUNCTION(execGetBuild); \
	DECLARE_FUNCTION(execHelperGetAssetUploadUrl); \
	DECLARE_FUNCTION(execGetAssetUploadUrl); \
	DECLARE_FUNCTION(execHelperGetAssetDownloadUrl); \
	DECLARE_FUNCTION(execGetAssetDownloadUrl); \
	DECLARE_FUNCTION(execHelperEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execEnableMultiplayerServersForTitle); \
	DECLARE_FUNCTION(execHelperDeleteRemoteUser); \
	DECLARE_FUNCTION(execDeleteRemoteUser); \
	DECLARE_FUNCTION(execHelperDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execDeleteContainerImageRepository); \
	DECLARE_FUNCTION(execHelperDeleteCertificate); \
	DECLARE_FUNCTION(execDeleteCertificate); \
	DECLARE_FUNCTION(execHelperDeleteBuildRegion); \
	DECLARE_FUNCTION(execDeleteBuildRegion); \
	DECLARE_FUNCTION(execHelperDeleteBuildAlias); \
	DECLARE_FUNCTION(execDeleteBuildAlias); \
	DECLARE_FUNCTION(execHelperDeleteBuild); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execHelperDeleteAsset); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execHelperCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execCreateTitleMultiplayerServersQuotaChange); \
	DECLARE_FUNCTION(execHelperCreateRemoteUser); \
	DECLARE_FUNCTION(execCreateRemoteUser); \
	DECLARE_FUNCTION(execHelperCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execCreateBuildWithProcessBasedServer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execCreateBuildWithManagedContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execCreateBuildWithCustomContainer); \
	DECLARE_FUNCTION(execHelperCreateBuildAlias); \
	DECLARE_FUNCTION(execCreateBuildAlias); \
	DECLARE_FUNCTION(execHelperListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execListServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execListMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execJoinMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetServerBackfillTicket); \
	DECLARE_FUNCTION(execGetServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperGetQueueStatistics); \
	DECLARE_FUNCTION(execGetQueueStatistics); \
	DECLARE_FUNCTION(execHelperGetMatchmakingTicket); \
	DECLARE_FUNCTION(execGetMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperGetMatch); \
	DECLARE_FUNCTION(execGetMatch); \
	DECLARE_FUNCTION(execHelperCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateServerMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execCreateServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execCreateMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execCancelServerBackfillTicket); \
	DECLARE_FUNCTION(execHelperCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execCancelMatchmakingTicket); \
	DECLARE_FUNCTION(execHelperCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllServerBackfillTicketsForPlayer); \
	DECLARE_FUNCTION(execHelperCancelAllMatchmakingTicketsForPlayer); \
	DECLARE_FUNCTION(execCancelAllMatchmakingTicketsForPlayer);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerAPI(UPlayFabMultiplayerAPI&&); \
	NO_API UPlayFabMultiplayerAPI(const UPlayFabMultiplayerAPI&); \
public:


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMultiplayerAPI(UPlayFabMultiplayerAPI&&); \
	NO_API UPlayFabMultiplayerAPI(const UPlayFabMultiplayerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabMultiplayerAPI, ResponseJsonObj); }


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_26_PROLOG
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_RPC_WRAPPERS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_INCLASS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_INCLASS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabMultiplayerAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMultiplayerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
