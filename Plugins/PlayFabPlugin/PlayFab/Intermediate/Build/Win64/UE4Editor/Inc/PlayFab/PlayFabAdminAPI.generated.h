// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdminUpdateStoreItemsResult;
class UObject;
struct FAdminUpdateRandomResultTablesResult;
struct FAdminUpdateCatalogItemsResult;
struct FAdminSetupPushNotificationResult;
struct FAdminSetTitleDataResult;
struct FAdminSetTitleDataAndOverridesResult;
struct FAdminBlankResult;
struct FAdminListVirtualCurrencyTypesResult;
struct FAdminGetTitleDataResult;
struct FAdminGetStoreItemsResult;
struct FAdminGetRandomResultTablesResult;
struct FAdminGetPublisherDataResult;
struct FAdminGetCatalogItemsResult;
struct FAdminDeleteTitleDataOverrideResult;
struct FAdminDeleteStoreResult;
struct FAdminAddNewsResult;
struct FAdminAddLocalizedNewsResult;
struct FAdminSetPublisherDataResult;
struct FAdminUpdateCloudScriptResult;
struct FAdminSetPublishedRevisionResult;
struct FAdminGetCloudScriptVersionsResult;
struct FAdminGetCloudScriptRevisionResult;
struct FAdminUpdateSegmentResponse;
struct FAdminGetSegmentsResponse;
struct FAdminDeleteSegmentsResponse;
struct FAdminCreateSegmentResponse;
struct FAdminEmptyResponse;
struct FAdminRunTaskResult;
struct FAdminGetTasksResult;
struct FAdminGetTaskInstancesResult;
struct FAdminGetCloudScriptTaskInstanceResult;
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult;
struct FAdminCreateTaskResult;
struct FAdminRemovePlayerTagResult;
struct FAdminGetPlayerTagsResult;
struct FAdminGetPlayersInSegmentResult;
struct FAdminGetPlayerSegmentsResult;
struct FAdminGetAllSegmentsResult;
struct FAdminAddPlayerTagResult;
struct FAdminModifyUserVirtualCurrencyResult;
struct FAdminRevokeInventoryItemsResult;
struct FAdminRevokeInventoryResult;
struct FAdminIncrementLimitedEditionItemAvailabilityResult;
struct FAdminGrantItemsToUsersResult;
struct FAdminGetUserInventoryResult;
struct FAdminCheckLimitedEditionItemAvailabilityResult;
struct FAdminUpdateUserDataResult;
struct FAdminUpdatePlayerStatisticDefinitionResult;
struct FAdminResolvePurchaseDisputeResponse;
struct FAdminResetUserStatisticsResult;
struct FAdminRefundPurchaseResponse;
struct FAdminIncrementPlayerStatisticVersionResult;
struct FAdminGetUserDataResult;
struct FAdminGetPlayerStatisticVersionsResult;
struct FAdminGetPlayerStatisticDefinitionsResult;
struct FAdminGetDataReportResult;
struct FAdminCreatePlayerStatisticDefinitionResult;
struct FAdminModifyMatchmakerGameModesResult;
struct FAdminGetMatchmakerGameModesResult;
struct FAdminGetMatchmakerGameInfoResult;
struct FAdminRemoveServerBuildResult;
struct FAdminModifyServerBuildResult;
struct FAdminListBuildsResult;
struct FAdminGetServerBuildUploadURLResult;
struct FAdminGetServerBuildInfoResult;
struct FAdminAddServerBuildResult;
struct FAdminGetContentUploadUrlResult;
struct FAdminGetContentListResult;
struct FAdminResetCharacterStatisticsResult;
struct FAdminUpdatePolicyResponse;
struct FAdminUpdatePlayerSharedSecretResult;
struct FAdminSetPlayerSecretResult;
struct FAdminListOpenIdConnectionResponse;
struct FAdminGetPolicyResponse;
struct FAdminGetPlayerSharedSecretsResult;
struct FAdminDeletePlayerSharedSecretResult;
struct FAdminCreatePlayerSharedSecretResult;
struct FAdminUpdateUserTitleDisplayNameResult;
struct FAdminUpdateBansResult;
struct FAdminSendAccountRecoveryEmailResult;
struct FAdminRevokeBansResult;
struct FAdminRevokeAllBansForUserResult;
struct FAdminResetPasswordResult;
struct FAdminGetUserBansResult;
struct FAdminLookupUserAccountInfoResult;
struct FAdminGetPlayerProfileResult;
struct FAdminGetPlayerIdFromAuthTokenResult;
struct FAdminGetPlayedTitleListResult;
struct FAdminExportMasterPlayerDataResult;
struct FAdminDeleteTitleResult;
struct FAdminDeletePlayerResult;
struct FAdminDeleteMasterPlayerAccountResult;
struct FAdminBanUsersResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FAdminUpdateStoreItemsRequest;
class UPlayFabAdminAPI;
struct FAdminUpdateRandomResultTablesRequest;
struct FAdminUpdateCatalogItemsRequest;
struct FAdminSetupPushNotificationRequest;
struct FAdminSetTitleDataRequest;
struct FAdminSetTitleDataAndOverridesRequest;
struct FAdminRemoveVirtualCurrencyTypesRequest;
struct FAdminListVirtualCurrencyTypesRequest;
struct FAdminGetTitleDataRequest;
struct FAdminGetStoreItemsRequest;
struct FAdminGetRandomResultTablesRequest;
struct FAdminGetPublisherDataRequest;
struct FAdminGetCatalogItemsRequest;
struct FAdminDeleteTitleDataOverrideRequest;
struct FAdminDeleteStoreRequest;
struct FAdminAddVirtualCurrencyTypesRequest;
struct FAdminAddNewsRequest;
struct FAdminAddLocalizedNewsRequest;
struct FAdminSetPublisherDataRequest;
struct FAdminUpdateCloudScriptRequest;
struct FAdminSetPublishedRevisionRequest;
struct FAdminGetCloudScriptVersionsRequest;
struct FAdminGetCloudScriptRevisionRequest;
struct FAdminUpdateSegmentRequest;
struct FAdminGetSegmentsRequest;
struct FAdminDeleteSegmentRequest;
struct FAdminCreateSegmentRequest;
struct FAdminUpdateTaskRequest;
struct FAdminRunTaskRequest;
struct FAdminGetTasksRequest;
struct FAdminGetTaskInstancesRequest;
struct FAdminGetTaskInstanceRequest;
struct FAdminDeleteTaskRequest;
struct FAdminCreateInsightsScheduledScalingTaskRequest;
struct FAdminCreateCloudScriptTaskRequest;
struct FAdminCreateActionsOnPlayerSegmentTaskRequest;
struct FAdminAbortTaskInstanceRequest;
struct FAdminRemovePlayerTagRequest;
struct FAdminGetPlayerTagsRequest;
struct FAdminGetPlayersInSegmentRequest;
struct FAdminGetPlayersSegmentsRequest;
struct FAdminGetAllSegmentsRequest;
struct FAdminAddPlayerTagRequest;
struct FAdminSubtractUserVirtualCurrencyRequest;
struct FAdminRevokeInventoryItemsRequest;
struct FAdminRevokeInventoryItemRequest;
struct FAdminIncrementLimitedEditionItemAvailabilityRequest;
struct FAdminGrantItemsToUsersRequest;
struct FAdminGetUserInventoryRequest;
struct FAdminCheckLimitedEditionItemAvailabilityRequest;
struct FAdminAddUserVirtualCurrencyRequest;
struct FAdminUpdateUserDataRequest;
struct FAdminUpdateUserInternalDataRequest;
struct FAdminUpdatePlayerStatisticDefinitionRequest;
struct FAdminResolvePurchaseDisputeRequest;
struct FAdminResetUserStatisticsRequest;
struct FAdminRefundPurchaseRequest;
struct FAdminIncrementPlayerStatisticVersionRequest;
struct FAdminGetUserDataRequest;
struct FAdminGetPlayerStatisticVersionsRequest;
struct FAdminGetPlayerStatisticDefinitionsRequest;
struct FAdminGetDataReportRequest;
struct FAdminCreatePlayerStatisticDefinitionRequest;
struct FAdminModifyMatchmakerGameModesRequest;
struct FAdminGetMatchmakerGameModesRequest;
struct FAdminGetMatchmakerGameInfoRequest;
struct FAdminRemoveServerBuildRequest;
struct FAdminModifyServerBuildRequest;
struct FAdminListBuildsRequest;
struct FAdminGetServerBuildUploadURLRequest;
struct FAdminGetServerBuildInfoRequest;
struct FAdminAddServerBuildRequest;
struct FAdminGetContentUploadUrlRequest;
struct FAdminGetContentListRequest;
struct FAdminDeleteContentRequest;
struct FAdminResetCharacterStatisticsRequest;
struct FAdminUpdatePolicyRequest;
struct FAdminUpdatePlayerSharedSecretRequest;
struct FAdminUpdateOpenIdConnectionRequest;
struct FAdminSetPlayerSecretRequest;
struct FAdminListOpenIdConnectionRequest;
struct FAdminGetPolicyRequest;
struct FAdminGetPlayerSharedSecretsRequest;
struct FAdminDeletePlayerSharedSecretRequest;
struct FAdminDeleteOpenIdConnectionRequest;
struct FAdminCreatePlayerSharedSecretRequest;
struct FAdminCreateOpenIdConnectionRequest;
struct FAdminUpdateUserTitleDisplayNameRequest;
struct FAdminUpdateBansRequest;
struct FAdminSendAccountRecoveryEmailRequest;
struct FAdminRevokeBansRequest;
struct FAdminRevokeAllBansForUserRequest;
struct FAdminResetPasswordRequest;
struct FAdminGetUserBansRequest;
struct FAdminLookupUserAccountInfoRequest;
struct FAdminGetPlayerProfileRequest;
struct FAdminGetPlayerIdFromAuthTokenRequest;
struct FAdminGetPlayedTitleListRequest;
struct FAdminExportMasterPlayerDataRequest;
struct FAdminDeleteTitleRequest;
struct FAdminDeletePlayerRequest;
struct FAdminDeleteMasterPlayerAccountRequest;
struct FAdminBanUsersRequest;
#ifdef PLAYFAB_PlayFabAdminAPI_generated_h
#error "PlayFabAdminAPI.generated.h already included, missing '#pragma once' in PlayFabAdminAPI.h"
#endif
#define PLAYFAB_PlayFabAdminAPI_generated_h

#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1679_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateStoreItems_Parms \
{ \
	FAdminUpdateStoreItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateStoreItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateStoreItems, FAdminUpdateStoreItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateStoreItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateStoreItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1666_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateRandomResultTables_Parms \
{ \
	FAdminUpdateRandomResultTablesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateRandomResultTables_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateRandomResultTables, FAdminUpdateRandomResultTablesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateRandomResultTables_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateRandomResultTables.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1653_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateCatalogItems_Parms \
{ \
	FAdminUpdateCatalogItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCatalogItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCatalogItems, FAdminUpdateCatalogItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateCatalogItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCatalogItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1636_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetupPushNotification_Parms \
{ \
	FAdminSetupPushNotificationResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetupPushNotification_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetupPushNotification, FAdminSetupPushNotificationResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetupPushNotification_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetupPushNotification.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1623_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetTitleInternalData_Parms \
{ \
	FAdminSetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleInternalData, FAdminSetTitleDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetTitleInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1610_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetTitleDataAndOverrides_Parms \
{ \
	FAdminSetTitleDataAndOverridesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleDataAndOverrides_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleDataAndOverrides, FAdminSetTitleDataAndOverridesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetTitleDataAndOverrides_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleDataAndOverrides.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1597_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetTitleData_Parms \
{ \
	FAdminSetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleData, FAdminSetTitleDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetTitleData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1584_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetStoreItems_Parms \
{ \
	FAdminUpdateStoreItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetStoreItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetStoreItems, FAdminUpdateStoreItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetStoreItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetStoreItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1571_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetCatalogItems_Parms \
{ \
	FAdminUpdateCatalogItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetCatalogItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetCatalogItems, FAdminUpdateCatalogItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetCatalogItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetCatalogItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1558_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRemoveVirtualCurrencyTypes_Parms \
{ \
	FAdminBlankResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveVirtualCurrencyTypes_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveVirtualCurrencyTypes, FAdminBlankResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRemoveVirtualCurrencyTypes_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveVirtualCurrencyTypes.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1545_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessListVirtualCurrencyTypes_Parms \
{ \
	FAdminListVirtualCurrencyTypesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListVirtualCurrencyTypes_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListVirtualCurrencyTypes, FAdminListVirtualCurrencyTypesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessListVirtualCurrencyTypes_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListVirtualCurrencyTypes.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1532_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetTitleInternalData_Parms \
{ \
	FAdminGetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleInternalData, FAdminGetTitleDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetTitleInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1519_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetTitleData_Parms \
{ \
	FAdminGetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleData, FAdminGetTitleDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetTitleData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1506_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetStoreItems_Parms \
{ \
	FAdminGetStoreItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetStoreItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStoreItems, FAdminGetStoreItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetStoreItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetStoreItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1493_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetRandomResultTables_Parms \
{ \
	FAdminGetRandomResultTablesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetRandomResultTables_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetRandomResultTables, FAdminGetRandomResultTablesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetRandomResultTables_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetRandomResultTables.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1480_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPublisherData_Parms \
{ \
	FAdminGetPublisherDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPublisherData, FAdminGetPublisherDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1467_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetCatalogItems_Parms \
{ \
	FAdminGetCatalogItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCatalogItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCatalogItems, FAdminGetCatalogItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetCatalogItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCatalogItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1454_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteTitleDataOverride_Parms \
{ \
	FAdminDeleteTitleDataOverrideResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteTitleDataOverride_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTitleDataOverride, FAdminDeleteTitleDataOverrideResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteTitleDataOverride_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteTitleDataOverride.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1441_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteStore_Parms \
{ \
	FAdminDeleteStoreResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteStore_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteStore, FAdminDeleteStoreResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteStore_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteStore.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1425_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddVirtualCurrencyTypes_Parms \
{ \
	FAdminBlankResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddVirtualCurrencyTypes_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddVirtualCurrencyTypes, FAdminBlankResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddVirtualCurrencyTypes_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddVirtualCurrencyTypes.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1412_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddNews_Parms \
{ \
	FAdminAddNewsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddNews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddNews, FAdminAddNewsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddNews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddNews.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1399_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddLocalizedNews_Parms \
{ \
	FAdminAddLocalizedNewsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddLocalizedNews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddLocalizedNews, FAdminAddLocalizedNewsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddLocalizedNews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddLocalizedNews.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1382_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetPublisherData_Parms \
{ \
	FAdminSetPublisherDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPublisherData, FAdminSetPublisherDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1362_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateCloudScript_Parms \
{ \
	FAdminUpdateCloudScriptResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCloudScript, FAdminUpdateCloudScriptResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateCloudScript_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCloudScript.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1349_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetPublishedRevision_Parms \
{ \
	FAdminSetPublishedRevisionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPublishedRevision_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPublishedRevision, FAdminSetPublishedRevisionResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetPublishedRevision_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPublishedRevision.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1333_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptVersions_Parms \
{ \
	FAdminGetCloudScriptVersionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCloudScriptVersions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCloudScriptVersions, FAdminGetCloudScriptVersionsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptVersions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCloudScriptVersions.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1320_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptRevision_Parms \
{ \
	FAdminGetCloudScriptRevisionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCloudScriptRevision_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCloudScriptRevision, FAdminGetCloudScriptRevisionResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptRevision_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCloudScriptRevision.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1303_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateSegment_Parms \
{ \
	FAdminUpdateSegmentResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateSegment, FAdminUpdateSegmentResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateSegment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateSegment.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1290_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetSegments_Parms \
{ \
	FAdminGetSegmentsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetSegments, FAdminGetSegmentsResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetSegments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetSegments.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1277_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteSegment_Parms \
{ \
	FAdminDeleteSegmentsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteSegment, FAdminDeleteSegmentsResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteSegment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteSegment.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1261_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreateSegment_Parms \
{ \
	FAdminCreateSegmentResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateSegment, FAdminCreateSegmentResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreateSegment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateSegment.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1244_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateTask_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateTask, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1231_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRunTask_Parms \
{ \
	FAdminRunTaskResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRunTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRunTask, FAdminRunTaskResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRunTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRunTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1218_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetTasks_Parms \
{ \
	FAdminGetTasksResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTasks_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTasks, FAdminGetTasksResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetTasks_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTasks.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1205_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetTaskInstances_Parms \
{ \
	FAdminGetTaskInstancesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTaskInstances_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTaskInstances, FAdminGetTaskInstancesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetTaskInstances_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTaskInstances.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1192_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptTaskInstance_Parms \
{ \
	FAdminGetCloudScriptTaskInstanceResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCloudScriptTaskInstance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCloudScriptTaskInstance, FAdminGetCloudScriptTaskInstanceResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetCloudScriptTaskInstance_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCloudScriptTaskInstance.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1179_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance_Parms \
{ \
	FAdminGetActionsOnPlayersInSegmentTaskInstanceResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance, FAdminGetActionsOnPlayersInSegmentTaskInstanceResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1166_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteTask_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTask, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1153_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreateInsightsScheduledScalingTask_Parms \
{ \
	FAdminCreateTaskResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateInsightsScheduledScalingTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateInsightsScheduledScalingTask, FAdminCreateTaskResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreateInsightsScheduledScalingTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateInsightsScheduledScalingTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1140_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreateCloudScriptTask_Parms \
{ \
	FAdminCreateTaskResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateCloudScriptTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateCloudScriptTask, FAdminCreateTaskResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreateCloudScriptTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateCloudScriptTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1127_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreateActionsOnPlayersInSegmentTask_Parms \
{ \
	FAdminCreateTaskResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateActionsOnPlayersInSegmentTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateActionsOnPlayersInSegmentTask, FAdminCreateTaskResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreateActionsOnPlayersInSegmentTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateActionsOnPlayersInSegmentTask.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1114_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAbortTaskInstance_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAbortTaskInstance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAbortTaskInstance, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAbortTaskInstance_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAbortTaskInstance.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1097_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRemovePlayerTag_Parms \
{ \
	FAdminRemovePlayerTagResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemovePlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemovePlayerTag, FAdminRemovePlayerTagResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRemovePlayerTag_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemovePlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1084_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerTags_Parms \
{ \
	FAdminGetPlayerTagsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerTags, FAdminGetPlayerTagsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerTags_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerTags.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1065_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms \
{ \
	FAdminGetPlayersInSegmentResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayersInSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayersInSegment, FAdminGetPlayersInSegmentResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayersInSegment.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1052_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerSegments_Parms \
{ \
	FAdminGetPlayerSegmentsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerSegments, FAdminGetPlayerSegmentsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerSegments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerSegments.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1036_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetAllSegments_Parms \
{ \
	FAdminGetAllSegmentsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAllSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllSegments, FAdminGetAllSegmentsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetAllSegments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAllSegments.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1023_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddPlayerTag_Parms \
{ \
	FAdminAddPlayerTagResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddPlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddPlayerTag, FAdminAddPlayerTagResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddPlayerTag_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddPlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_1006_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms \
{ \
	FAdminModifyUserVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_993_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms \
{ \
	FAdminRevokeInventoryItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItems, FAdminRevokeInventoryItemsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_980_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms \
{ \
	FAdminRevokeInventoryResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItem, FAdminRevokeInventoryResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItem.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_967_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessIncrementLimitedEditionItemAvailability_Parms \
{ \
	FAdminIncrementLimitedEditionItemAvailabilityResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessIncrementLimitedEditionItemAvailability_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIncrementLimitedEditionItemAvailability, FAdminIncrementLimitedEditionItemAvailabilityResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessIncrementLimitedEditionItemAvailability_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessIncrementLimitedEditionItemAvailability.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_954_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms \
{ \
	FAdminGrantItemsToUsersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToUsers, FAdminGrantItemsToUsersResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToUsers.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_941_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserInventory_Parms \
{ \
	FAdminGetUserInventoryResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInventory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInventory, FAdminGetUserInventoryResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserInventory_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInventory.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_928_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCheckLimitedEditionItemAvailability_Parms \
{ \
	FAdminCheckLimitedEditionItemAvailabilityResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCheckLimitedEditionItemAvailability_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCheckLimitedEditionItemAvailability, FAdminCheckLimitedEditionItemAvailabilityResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCheckLimitedEditionItemAvailability_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCheckLimitedEditionItemAvailability.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_915_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms \
{ \
	FAdminModifyUserVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddUserVirtualCurrency, FAdminModifyUserVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_898_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserReadOnlyData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_885_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherReadOnlyData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_872_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherInternalData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_859_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_846_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserInternalData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_833_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserData_Parms \
{ \
	FAdminUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserData, FAdminUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_820_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdatePlayerStatisticDefinition_Parms \
{ \
	FAdminUpdatePlayerStatisticDefinitionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdatePlayerStatisticDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdatePlayerStatisticDefinition, FAdminUpdatePlayerStatisticDefinitionResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdatePlayerStatisticDefinition_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdatePlayerStatisticDefinition.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_807_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessResolvePurchaseDispute_Parms \
{ \
	FAdminResolvePurchaseDisputeResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessResolvePurchaseDispute_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessResolvePurchaseDispute, FAdminResolvePurchaseDisputeResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessResolvePurchaseDispute_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessResolvePurchaseDispute.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_794_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessResetUserStatistics_Parms \
{ \
	FAdminResetUserStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessResetUserStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessResetUserStatistics, FAdminResetUserStatisticsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessResetUserStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessResetUserStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_781_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRefundPurchase_Parms \
{ \
	FAdminRefundPurchaseResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRefundPurchase_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRefundPurchase, FAdminRefundPurchaseResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRefundPurchase_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRefundPurchase.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_768_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessIncrementPlayerStatisticVersion_Parms \
{ \
	FAdminIncrementPlayerStatisticVersionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessIncrementPlayerStatisticVersion_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIncrementPlayerStatisticVersion, FAdminIncrementPlayerStatisticVersionResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessIncrementPlayerStatisticVersion_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessIncrementPlayerStatisticVersion.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_755_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserReadOnlyData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_742_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherReadOnlyData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_729_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherInternalData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_716_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_703_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserInternalData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInternalData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_690_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserData_Parms \
{ \
	FAdminGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserData, FAdminGetUserDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_677_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms \
{ \
	FAdminGetPlayerStatisticVersionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatisticVersions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatisticVersions, FAdminGetPlayerStatisticVersionsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatisticVersions.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_661_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerStatisticDefinitions_Parms \
{ \
	FAdminGetPlayerStatisticDefinitionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatisticDefinitions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatisticDefinitions, FAdminGetPlayerStatisticDefinitionsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerStatisticDefinitions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatisticDefinitions.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_648_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetDataReport_Parms \
{ \
	FAdminGetDataReportResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetDataReport_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDataReport, FAdminGetDataReportResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetDataReport_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetDataReport.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_632_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreatePlayerStatisticDefinition_Parms \
{ \
	FAdminCreatePlayerStatisticDefinitionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreatePlayerStatisticDefinition_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreatePlayerStatisticDefinition, FAdminCreatePlayerStatisticDefinitionResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreatePlayerStatisticDefinition_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreatePlayerStatisticDefinition.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_615_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessModifyMatchmakerGameModes_Parms \
{ \
	FAdminModifyMatchmakerGameModesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessModifyMatchmakerGameModes_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessModifyMatchmakerGameModes, FAdminModifyMatchmakerGameModesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessModifyMatchmakerGameModes_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessModifyMatchmakerGameModes.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_602_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetMatchmakerGameModes_Parms \
{ \
	FAdminGetMatchmakerGameModesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatchmakerGameModes_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatchmakerGameModes, FAdminGetMatchmakerGameModesResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetMatchmakerGameModes_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatchmakerGameModes.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_589_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetMatchmakerGameInfo_Parms \
{ \
	FAdminGetMatchmakerGameInfoResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMatchmakerGameInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMatchmakerGameInfo, FAdminGetMatchmakerGameInfoResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetMatchmakerGameInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMatchmakerGameInfo.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_569_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRemoveServerBuild_Parms \
{ \
	FAdminRemoveServerBuildResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveServerBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveServerBuild, FAdminRemoveServerBuildResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRemoveServerBuild_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveServerBuild.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_556_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessModifyServerBuild_Parms \
{ \
	FAdminModifyServerBuildResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessModifyServerBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessModifyServerBuild, FAdminModifyServerBuildResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessModifyServerBuild_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessModifyServerBuild.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_543_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessListServerBuilds_Parms \
{ \
	FAdminListBuildsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListServerBuilds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListServerBuilds, FAdminListBuildsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessListServerBuilds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListServerBuilds.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_527_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetServerBuildUploadUrl_Parms \
{ \
	FAdminGetServerBuildUploadURLResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerBuildUploadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerBuildUploadUrl, FAdminGetServerBuildUploadURLResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetServerBuildUploadUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerBuildUploadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_514_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetServerBuildInfo_Parms \
{ \
	FAdminGetServerBuildInfoResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerBuildInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerBuildInfo, FAdminGetServerBuildInfoResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetServerBuildInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerBuildInfo.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_498_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessAddServerBuild_Parms \
{ \
	FAdminAddServerBuildResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddServerBuild_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddServerBuild, FAdminAddServerBuildResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessAddServerBuild_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddServerBuild.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_477_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetContentUploadUrl_Parms \
{ \
	FAdminGetContentUploadUrlResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContentUploadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContentUploadUrl, FAdminGetContentUploadUrlResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetContentUploadUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContentUploadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_464_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetContentList_Parms \
{ \
	FAdminGetContentListResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContentList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContentList, FAdminGetContentListResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetContentList_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContentList.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_451_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteContent_Parms \
{ \
	FAdminBlankResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteContent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteContent, FAdminBlankResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteContent_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteContent.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_434_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessResetCharacterStatistics_Parms \
{ \
	FAdminResetCharacterStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessResetCharacterStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessResetCharacterStatistics, FAdminResetCharacterStatisticsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessResetCharacterStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessResetCharacterStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_417_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdatePolicy_Parms \
{ \
	FAdminUpdatePolicyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdatePolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdatePolicy, FAdminUpdatePolicyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdatePolicy_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdatePolicy.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_401_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdatePlayerSharedSecret_Parms \
{ \
	FAdminUpdatePlayerSharedSecretResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdatePlayerSharedSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdatePlayerSharedSecret, FAdminUpdatePlayerSharedSecretResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdatePlayerSharedSecret_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdatePlayerSharedSecret.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_388_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateOpenIdConnection_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateOpenIdConnection_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateOpenIdConnection, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateOpenIdConnection_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateOpenIdConnection.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_375_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSetPlayerSecret_Parms \
{ \
	FAdminSetPlayerSecretResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPlayerSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPlayerSecret, FAdminSetPlayerSecretResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSetPlayerSecret_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPlayerSecret.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_362_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessListOpenIdConnection_Parms \
{ \
	FAdminListOpenIdConnectionResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListOpenIdConnection_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListOpenIdConnection, FAdminListOpenIdConnectionResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessListOpenIdConnection_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListOpenIdConnection.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_349_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPolicy_Parms \
{ \
	FAdminGetPolicyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPolicy, FAdminGetPolicyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPolicy_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_336_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerSharedSecrets_Parms \
{ \
	FAdminGetPlayerSharedSecretsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerSharedSecrets_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerSharedSecrets, FAdminGetPlayerSharedSecretsResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerSharedSecrets_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerSharedSecrets.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_320_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeletePlayerSharedSecret_Parms \
{ \
	FAdminDeletePlayerSharedSecretResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePlayerSharedSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePlayerSharedSecret, FAdminDeletePlayerSharedSecretResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeletePlayerSharedSecret_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePlayerSharedSecret.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_307_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteOpenIdConnection_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteOpenIdConnection_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteOpenIdConnection, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteOpenIdConnection_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteOpenIdConnection.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_291_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreatePlayerSharedSecret_Parms \
{ \
	FAdminCreatePlayerSharedSecretResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreatePlayerSharedSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreatePlayerSharedSecret, FAdminCreatePlayerSharedSecretResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreatePlayerSharedSecret_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreatePlayerSharedSecret.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_278_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessCreateOpenIdConnection_Parms \
{ \
	FAdminEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateOpenIdConnection_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOpenIdConnection, FAdminEmptyResponse result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessCreateOpenIdConnection_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateOpenIdConnection.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_261_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserTitleDisplayName_Parms \
{ \
	FAdminUpdateUserTitleDisplayNameResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserTitleDisplayName_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserTitleDisplayName, FAdminUpdateUserTitleDisplayNameResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateUserTitleDisplayName_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserTitleDisplayName.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_248_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessUpdateBans_Parms \
{ \
	FAdminUpdateBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBans, FAdminUpdateBansResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessUpdateBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBans.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_231_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessSendAccountRecoveryEmail_Parms \
{ \
	FAdminSendAccountRecoveryEmailResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendAccountRecoveryEmail_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendAccountRecoveryEmail, FAdminSendAccountRecoveryEmailResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessSendAccountRecoveryEmail_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendAccountRecoveryEmail.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_218_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRevokeBans_Parms \
{ \
	FAdminRevokeBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeBans, FAdminRevokeBansResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRevokeBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeBans.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_205_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms \
{ \
	FAdminRevokeAllBansForUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeAllBansForUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeAllBansForUser, FAdminRevokeAllBansForUserResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeAllBansForUser.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_192_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessResetPassword_Parms \
{ \
	FAdminResetPasswordResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessResetPassword_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessResetPassword, FAdminResetPasswordResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessResetPassword_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessResetPassword.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_179_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserBans_Parms \
{ \
	FAdminGetUserBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserBans, FAdminGetUserBansResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserBans.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_166_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms \
{ \
	FAdminLookupUserAccountInfoResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserAccountInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserAccountInfo, FAdminLookupUserAccountInfoResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserAccountInfo.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_153_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerProfile_Parms \
{ \
	FAdminGetPlayerProfileResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerProfile, FAdminGetPlayerProfileResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerProfile_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerProfile.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_140_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerIdFromAuthToken_Parms \
{ \
	FAdminGetPlayerIdFromAuthTokenResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerIdFromAuthToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerIdFromAuthToken, FAdminGetPlayerIdFromAuthTokenResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayerIdFromAuthToken_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerIdFromAuthToken.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_127_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessGetPlayedTitleList_Parms \
{ \
	FAdminGetPlayedTitleListResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayedTitleList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayedTitleList, FAdminGetPlayedTitleListResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessGetPlayedTitleList_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayedTitleList.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_114_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessExportMasterPlayerData_Parms \
{ \
	FAdminExportMasterPlayerDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExportMasterPlayerData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExportMasterPlayerData, FAdminExportMasterPlayerDataResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessExportMasterPlayerData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessExportMasterPlayerData.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_101_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteTitle_Parms \
{ \
	FAdminDeleteTitleResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteTitle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTitle, FAdminDeleteTitleResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteTitle_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteTitle.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_88_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeletePlayer_Parms \
{ \
	FAdminDeletePlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePlayer, FAdminDeletePlayerResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeletePlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePlayer.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_75_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessDeleteMasterPlayerAccount_Parms \
{ \
	FAdminDeleteMasterPlayerAccountResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteMasterPlayerAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteMasterPlayerAccount, FAdminDeleteMasterPlayerAccountResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessDeleteMasterPlayerAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteMasterPlayerAccount.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_62_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnSuccessBanUsers_Parms \
{ \
	FAdminBanUsersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessBanUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBanUsers, FAdminBanUsersResult result, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnSuccessBanUsers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessBanUsers.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_32_DELEGATE \
struct PlayFabAdminAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabAdminAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabAdminRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabAdminRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabAdminRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabAdminRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabAdminRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_SPARSE_DATA
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUpdateStoreItems); \
	DECLARE_FUNCTION(execUpdateStoreItems); \
	DECLARE_FUNCTION(execHelperUpdateRandomResultTables); \
	DECLARE_FUNCTION(execUpdateRandomResultTables); \
	DECLARE_FUNCTION(execHelperUpdateCatalogItems); \
	DECLARE_FUNCTION(execUpdateCatalogItems); \
	DECLARE_FUNCTION(execHelperSetupPushNotification); \
	DECLARE_FUNCTION(execSetupPushNotification); \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSetTitleDataAndOverrides); \
	DECLARE_FUNCTION(execSetTitleDataAndOverrides); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execHelperSetStoreItems); \
	DECLARE_FUNCTION(execSetStoreItems); \
	DECLARE_FUNCTION(execHelperSetCatalogItems); \
	DECLARE_FUNCTION(execSetCatalogItems); \
	DECLARE_FUNCTION(execHelperRemoveVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execRemoveVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperListVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execListVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execHelperDeleteTitleDataOverride); \
	DECLARE_FUNCTION(execDeleteTitleDataOverride); \
	DECLARE_FUNCTION(execHelperDeleteStore); \
	DECLARE_FUNCTION(execDeleteStore); \
	DECLARE_FUNCTION(execHelperAddVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execAddVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperAddNews); \
	DECLARE_FUNCTION(execAddNews); \
	DECLARE_FUNCTION(execHelperAddLocalizedNews); \
	DECLARE_FUNCTION(execAddLocalizedNews); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateCloudScript); \
	DECLARE_FUNCTION(execUpdateCloudScript); \
	DECLARE_FUNCTION(execHelperSetPublishedRevision); \
	DECLARE_FUNCTION(execSetPublishedRevision); \
	DECLARE_FUNCTION(execHelperGetCloudScriptVersions); \
	DECLARE_FUNCTION(execGetCloudScriptVersions); \
	DECLARE_FUNCTION(execHelperGetCloudScriptRevision); \
	DECLARE_FUNCTION(execGetCloudScriptRevision); \
	DECLARE_FUNCTION(execHelperUpdateSegment); \
	DECLARE_FUNCTION(execUpdateSegment); \
	DECLARE_FUNCTION(execHelperGetSegments); \
	DECLARE_FUNCTION(execGetSegments); \
	DECLARE_FUNCTION(execHelperDeleteSegment); \
	DECLARE_FUNCTION(execDeleteSegment); \
	DECLARE_FUNCTION(execHelperCreateSegment); \
	DECLARE_FUNCTION(execCreateSegment); \
	DECLARE_FUNCTION(execHelperUpdateTask); \
	DECLARE_FUNCTION(execUpdateTask); \
	DECLARE_FUNCTION(execHelperRunTask); \
	DECLARE_FUNCTION(execRunTask); \
	DECLARE_FUNCTION(execHelperGetTasks); \
	DECLARE_FUNCTION(execGetTasks); \
	DECLARE_FUNCTION(execHelperGetTaskInstances); \
	DECLARE_FUNCTION(execGetTaskInstances); \
	DECLARE_FUNCTION(execHelperGetCloudScriptTaskInstance); \
	DECLARE_FUNCTION(execGetCloudScriptTaskInstance); \
	DECLARE_FUNCTION(execHelperGetActionsOnPlayersInSegmentTaskInstance); \
	DECLARE_FUNCTION(execGetActionsOnPlayersInSegmentTaskInstance); \
	DECLARE_FUNCTION(execHelperDeleteTask); \
	DECLARE_FUNCTION(execDeleteTask); \
	DECLARE_FUNCTION(execHelperCreateInsightsScheduledScalingTask); \
	DECLARE_FUNCTION(execCreateInsightsScheduledScalingTask); \
	DECLARE_FUNCTION(execHelperCreateCloudScriptTask); \
	DECLARE_FUNCTION(execCreateCloudScriptTask); \
	DECLARE_FUNCTION(execHelperCreateActionsOnPlayersInSegmentTask); \
	DECLARE_FUNCTION(execCreateActionsOnPlayersInSegmentTask); \
	DECLARE_FUNCTION(execHelperAbortTaskInstance); \
	DECLARE_FUNCTION(execAbortTaskInstance); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperIncrementLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execIncrementLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execHelperCheckLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execCheckLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execUpdatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execHelperResolvePurchaseDispute); \
	DECLARE_FUNCTION(execResolvePurchaseDispute); \
	DECLARE_FUNCTION(execHelperResetUserStatistics); \
	DECLARE_FUNCTION(execResetUserStatistics); \
	DECLARE_FUNCTION(execHelperRefundPurchase); \
	DECLARE_FUNCTION(execRefundPurchase); \
	DECLARE_FUNCTION(execHelperIncrementPlayerStatisticVersion); \
	DECLARE_FUNCTION(execIncrementPlayerStatisticVersion); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticDefinitions); \
	DECLARE_FUNCTION(execGetPlayerStatisticDefinitions); \
	DECLARE_FUNCTION(execHelperGetDataReport); \
	DECLARE_FUNCTION(execGetDataReport); \
	DECLARE_FUNCTION(execHelperCreatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execCreatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execHelperModifyMatchmakerGameModes); \
	DECLARE_FUNCTION(execModifyMatchmakerGameModes); \
	DECLARE_FUNCTION(execHelperGetMatchmakerGameModes); \
	DECLARE_FUNCTION(execGetMatchmakerGameModes); \
	DECLARE_FUNCTION(execHelperGetMatchmakerGameInfo); \
	DECLARE_FUNCTION(execGetMatchmakerGameInfo); \
	DECLARE_FUNCTION(execHelperRemoveServerBuild); \
	DECLARE_FUNCTION(execRemoveServerBuild); \
	DECLARE_FUNCTION(execHelperModifyServerBuild); \
	DECLARE_FUNCTION(execModifyServerBuild); \
	DECLARE_FUNCTION(execHelperListServerBuilds); \
	DECLARE_FUNCTION(execListServerBuilds); \
	DECLARE_FUNCTION(execHelperGetServerBuildUploadUrl); \
	DECLARE_FUNCTION(execGetServerBuildUploadUrl); \
	DECLARE_FUNCTION(execHelperGetServerBuildInfo); \
	DECLARE_FUNCTION(execGetServerBuildInfo); \
	DECLARE_FUNCTION(execHelperAddServerBuild); \
	DECLARE_FUNCTION(execAddServerBuild); \
	DECLARE_FUNCTION(execHelperGetContentUploadUrl); \
	DECLARE_FUNCTION(execGetContentUploadUrl); \
	DECLARE_FUNCTION(execHelperGetContentList); \
	DECLARE_FUNCTION(execGetContentList); \
	DECLARE_FUNCTION(execHelperDeleteContent); \
	DECLARE_FUNCTION(execDeleteContent); \
	DECLARE_FUNCTION(execHelperResetCharacterStatistics); \
	DECLARE_FUNCTION(execResetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperUpdatePolicy); \
	DECLARE_FUNCTION(execUpdatePolicy); \
	DECLARE_FUNCTION(execHelperUpdatePlayerSharedSecret); \
	DECLARE_FUNCTION(execUpdatePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperUpdateOpenIdConnection); \
	DECLARE_FUNCTION(execUpdateOpenIdConnection); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperListOpenIdConnection); \
	DECLARE_FUNCTION(execListOpenIdConnection); \
	DECLARE_FUNCTION(execHelperGetPolicy); \
	DECLARE_FUNCTION(execGetPolicy); \
	DECLARE_FUNCTION(execHelperGetPlayerSharedSecrets); \
	DECLARE_FUNCTION(execGetPlayerSharedSecrets); \
	DECLARE_FUNCTION(execHelperDeletePlayerSharedSecret); \
	DECLARE_FUNCTION(execDeletePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperDeleteOpenIdConnection); \
	DECLARE_FUNCTION(execDeleteOpenIdConnection); \
	DECLARE_FUNCTION(execHelperCreatePlayerSharedSecret); \
	DECLARE_FUNCTION(execCreatePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperCreateOpenIdConnection); \
	DECLARE_FUNCTION(execCreateOpenIdConnection); \
	DECLARE_FUNCTION(execHelperUpdateUserTitleDisplayName); \
	DECLARE_FUNCTION(execUpdateUserTitleDisplayName); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execHelperSendAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperResetPassword); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperGetPlayerIdFromAuthToken); \
	DECLARE_FUNCTION(execGetPlayerIdFromAuthToken); \
	DECLARE_FUNCTION(execHelperGetPlayedTitleList); \
	DECLARE_FUNCTION(execGetPlayedTitleList); \
	DECLARE_FUNCTION(execHelperExportMasterPlayerData); \
	DECLARE_FUNCTION(execExportMasterPlayerData); \
	DECLARE_FUNCTION(execHelperDeleteTitle); \
	DECLARE_FUNCTION(execDeleteTitle); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execHelperDeleteMasterPlayerAccount); \
	DECLARE_FUNCTION(execDeleteMasterPlayerAccount); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execBanUsers);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUpdateStoreItems); \
	DECLARE_FUNCTION(execUpdateStoreItems); \
	DECLARE_FUNCTION(execHelperUpdateRandomResultTables); \
	DECLARE_FUNCTION(execUpdateRandomResultTables); \
	DECLARE_FUNCTION(execHelperUpdateCatalogItems); \
	DECLARE_FUNCTION(execUpdateCatalogItems); \
	DECLARE_FUNCTION(execHelperSetupPushNotification); \
	DECLARE_FUNCTION(execSetupPushNotification); \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSetTitleDataAndOverrides); \
	DECLARE_FUNCTION(execSetTitleDataAndOverrides); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execHelperSetStoreItems); \
	DECLARE_FUNCTION(execSetStoreItems); \
	DECLARE_FUNCTION(execHelperSetCatalogItems); \
	DECLARE_FUNCTION(execSetCatalogItems); \
	DECLARE_FUNCTION(execHelperRemoveVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execRemoveVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperListVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execListVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execHelperDeleteTitleDataOverride); \
	DECLARE_FUNCTION(execDeleteTitleDataOverride); \
	DECLARE_FUNCTION(execHelperDeleteStore); \
	DECLARE_FUNCTION(execDeleteStore); \
	DECLARE_FUNCTION(execHelperAddVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execAddVirtualCurrencyTypes); \
	DECLARE_FUNCTION(execHelperAddNews); \
	DECLARE_FUNCTION(execAddNews); \
	DECLARE_FUNCTION(execHelperAddLocalizedNews); \
	DECLARE_FUNCTION(execAddLocalizedNews); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateCloudScript); \
	DECLARE_FUNCTION(execUpdateCloudScript); \
	DECLARE_FUNCTION(execHelperSetPublishedRevision); \
	DECLARE_FUNCTION(execSetPublishedRevision); \
	DECLARE_FUNCTION(execHelperGetCloudScriptVersions); \
	DECLARE_FUNCTION(execGetCloudScriptVersions); \
	DECLARE_FUNCTION(execHelperGetCloudScriptRevision); \
	DECLARE_FUNCTION(execGetCloudScriptRevision); \
	DECLARE_FUNCTION(execHelperUpdateSegment); \
	DECLARE_FUNCTION(execUpdateSegment); \
	DECLARE_FUNCTION(execHelperGetSegments); \
	DECLARE_FUNCTION(execGetSegments); \
	DECLARE_FUNCTION(execHelperDeleteSegment); \
	DECLARE_FUNCTION(execDeleteSegment); \
	DECLARE_FUNCTION(execHelperCreateSegment); \
	DECLARE_FUNCTION(execCreateSegment); \
	DECLARE_FUNCTION(execHelperUpdateTask); \
	DECLARE_FUNCTION(execUpdateTask); \
	DECLARE_FUNCTION(execHelperRunTask); \
	DECLARE_FUNCTION(execRunTask); \
	DECLARE_FUNCTION(execHelperGetTasks); \
	DECLARE_FUNCTION(execGetTasks); \
	DECLARE_FUNCTION(execHelperGetTaskInstances); \
	DECLARE_FUNCTION(execGetTaskInstances); \
	DECLARE_FUNCTION(execHelperGetCloudScriptTaskInstance); \
	DECLARE_FUNCTION(execGetCloudScriptTaskInstance); \
	DECLARE_FUNCTION(execHelperGetActionsOnPlayersInSegmentTaskInstance); \
	DECLARE_FUNCTION(execGetActionsOnPlayersInSegmentTaskInstance); \
	DECLARE_FUNCTION(execHelperDeleteTask); \
	DECLARE_FUNCTION(execDeleteTask); \
	DECLARE_FUNCTION(execHelperCreateInsightsScheduledScalingTask); \
	DECLARE_FUNCTION(execCreateInsightsScheduledScalingTask); \
	DECLARE_FUNCTION(execHelperCreateCloudScriptTask); \
	DECLARE_FUNCTION(execCreateCloudScriptTask); \
	DECLARE_FUNCTION(execHelperCreateActionsOnPlayersInSegmentTask); \
	DECLARE_FUNCTION(execCreateActionsOnPlayersInSegmentTask); \
	DECLARE_FUNCTION(execHelperAbortTaskInstance); \
	DECLARE_FUNCTION(execAbortTaskInstance); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperIncrementLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execIncrementLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execHelperCheckLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execCheckLimitedEditionItemAvailability); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execUpdatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execHelperResolvePurchaseDispute); \
	DECLARE_FUNCTION(execResolvePurchaseDispute); \
	DECLARE_FUNCTION(execHelperResetUserStatistics); \
	DECLARE_FUNCTION(execResetUserStatistics); \
	DECLARE_FUNCTION(execHelperRefundPurchase); \
	DECLARE_FUNCTION(execRefundPurchase); \
	DECLARE_FUNCTION(execHelperIncrementPlayerStatisticVersion); \
	DECLARE_FUNCTION(execIncrementPlayerStatisticVersion); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticDefinitions); \
	DECLARE_FUNCTION(execGetPlayerStatisticDefinitions); \
	DECLARE_FUNCTION(execHelperGetDataReport); \
	DECLARE_FUNCTION(execGetDataReport); \
	DECLARE_FUNCTION(execHelperCreatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execCreatePlayerStatisticDefinition); \
	DECLARE_FUNCTION(execHelperModifyMatchmakerGameModes); \
	DECLARE_FUNCTION(execModifyMatchmakerGameModes); \
	DECLARE_FUNCTION(execHelperGetMatchmakerGameModes); \
	DECLARE_FUNCTION(execGetMatchmakerGameModes); \
	DECLARE_FUNCTION(execHelperGetMatchmakerGameInfo); \
	DECLARE_FUNCTION(execGetMatchmakerGameInfo); \
	DECLARE_FUNCTION(execHelperRemoveServerBuild); \
	DECLARE_FUNCTION(execRemoveServerBuild); \
	DECLARE_FUNCTION(execHelperModifyServerBuild); \
	DECLARE_FUNCTION(execModifyServerBuild); \
	DECLARE_FUNCTION(execHelperListServerBuilds); \
	DECLARE_FUNCTION(execListServerBuilds); \
	DECLARE_FUNCTION(execHelperGetServerBuildUploadUrl); \
	DECLARE_FUNCTION(execGetServerBuildUploadUrl); \
	DECLARE_FUNCTION(execHelperGetServerBuildInfo); \
	DECLARE_FUNCTION(execGetServerBuildInfo); \
	DECLARE_FUNCTION(execHelperAddServerBuild); \
	DECLARE_FUNCTION(execAddServerBuild); \
	DECLARE_FUNCTION(execHelperGetContentUploadUrl); \
	DECLARE_FUNCTION(execGetContentUploadUrl); \
	DECLARE_FUNCTION(execHelperGetContentList); \
	DECLARE_FUNCTION(execGetContentList); \
	DECLARE_FUNCTION(execHelperDeleteContent); \
	DECLARE_FUNCTION(execDeleteContent); \
	DECLARE_FUNCTION(execHelperResetCharacterStatistics); \
	DECLARE_FUNCTION(execResetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperUpdatePolicy); \
	DECLARE_FUNCTION(execUpdatePolicy); \
	DECLARE_FUNCTION(execHelperUpdatePlayerSharedSecret); \
	DECLARE_FUNCTION(execUpdatePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperUpdateOpenIdConnection); \
	DECLARE_FUNCTION(execUpdateOpenIdConnection); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperListOpenIdConnection); \
	DECLARE_FUNCTION(execListOpenIdConnection); \
	DECLARE_FUNCTION(execHelperGetPolicy); \
	DECLARE_FUNCTION(execGetPolicy); \
	DECLARE_FUNCTION(execHelperGetPlayerSharedSecrets); \
	DECLARE_FUNCTION(execGetPlayerSharedSecrets); \
	DECLARE_FUNCTION(execHelperDeletePlayerSharedSecret); \
	DECLARE_FUNCTION(execDeletePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperDeleteOpenIdConnection); \
	DECLARE_FUNCTION(execDeleteOpenIdConnection); \
	DECLARE_FUNCTION(execHelperCreatePlayerSharedSecret); \
	DECLARE_FUNCTION(execCreatePlayerSharedSecret); \
	DECLARE_FUNCTION(execHelperCreateOpenIdConnection); \
	DECLARE_FUNCTION(execCreateOpenIdConnection); \
	DECLARE_FUNCTION(execHelperUpdateUserTitleDisplayName); \
	DECLARE_FUNCTION(execUpdateUserTitleDisplayName); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execHelperSendAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperResetPassword); \
	DECLARE_FUNCTION(execResetPassword); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperGetPlayerIdFromAuthToken); \
	DECLARE_FUNCTION(execGetPlayerIdFromAuthToken); \
	DECLARE_FUNCTION(execHelperGetPlayedTitleList); \
	DECLARE_FUNCTION(execGetPlayedTitleList); \
	DECLARE_FUNCTION(execHelperExportMasterPlayerData); \
	DECLARE_FUNCTION(execExportMasterPlayerData); \
	DECLARE_FUNCTION(execHelperDeleteTitle); \
	DECLARE_FUNCTION(execDeleteTitle); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execHelperDeleteMasterPlayerAccount); \
	DECLARE_FUNCTION(execDeleteMasterPlayerAccount); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execBanUsers);


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAdminAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAdminAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAdminAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAdminAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminAPI(UPlayFabAdminAPI&&); \
	NO_API UPlayFabAdminAPI(const UPlayFabAdminAPI&); \
public:


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminAPI(UPlayFabAdminAPI&&); \
	NO_API UPlayFabAdminAPI(const UPlayFabAdminAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminAPI)


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabAdminAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabAdminAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabAdminAPI, ResponseJsonObj); }


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_26_PROLOG
#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_RPC_WRAPPERS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_INCLASS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_SPARSE_DATA \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_INCLASS_NO_PURE_DECLS \
	AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabAdminAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAdminAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AzureJamGame_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
