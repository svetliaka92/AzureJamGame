// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FServerSetTitleDataResult;
struct FServerSetPublisherDataResult;
struct FServerGetTitleNewsResult;
struct FServerGetTitleDataResult;
struct FServerGetTimeResult;
struct FServerGetStoreItemsResult;
struct FServerGetPublisherDataResult;
struct FServerGetCatalogItemsResult;
struct FServerUpdateSharedGroupDataResult;
struct FServerRemoveSharedGroupMembersResult;
struct FServerGetSharedGroupDataResult;
struct FServerCreateSharedGroupResult;
struct FServerAddSharedGroupMembersResult;
struct FServerExecuteCloudScriptResult;
struct FServerRemovePlayerTagResult;
struct FServerGetPlayerTagsResult;
struct FServerGetPlayersInSegmentResult;
struct FServerGetPlayerSegmentsResult;
struct FServerGetAllSegmentsResult;
struct FServerAddPlayerTagResult;
struct FServerUnlockContainerItemResult;
struct FServerRevokeInventoryItemsResult;
struct FServerRevokeInventoryResult;
struct FServerReportPlayerServerResult;
struct FServerRedeemCouponResult;
struct FServerMoveItemToUserFromCharacterResult;
struct FServerMoveItemToCharacterFromUserResult;
struct FServerMoveItemToCharacterFromCharacterResult;
struct FServerModifyItemUsesResult;
struct FServerGrantItemsToUsersResult;
struct FServerGrantItemsToUserResult;
struct FServerGrantItemsToCharacterResult;
struct FServerGetUserInventoryResult;
struct FServerGetRandomResultTablesResult;
struct FServerGetCharacterInventoryResult;
struct FServerEvaluateRandomResultTableResult;
struct FServerConsumeItemResult;
struct FServerModifyUserVirtualCurrencyResult;
struct FServerModifyCharacterVirtualCurrencyResult;
struct FServerUpdateUserDataResult;
struct FServerUpdatePlayerStatisticsResult;
struct FServerGetUserDataResult;
struct FServerGetPlayerStatisticVersionsResult;
struct FServerGetPlayerStatisticsResult;
struct FServerGetPlayerCombinedInfoResult;
struct FServerGetLeaderboardAroundUserResult;
struct FServerGetLeaderboardResult;
struct FServerAwardSteamAchievementResult;
struct FServerSetGameServerInstanceTagsResult;
struct FServerSetGameServerInstanceStateResult;
struct FServerSetGameServerInstanceDataResult;
struct FServerRegisterGameResponse;
struct FServerRefreshGameServerInstanceHeartbeatResult;
struct FServerRedeemMatchmakerTicketResult;
struct FServerNotifyMatchmakerPlayerLeftResult;
struct FServerDeregisterGameResponse;
struct FServerGetFriendsListResult;
struct FServerGetContentDownloadUrlResult;
struct FServerUpdateCharacterStatisticsResult;
struct FServerGrantCharacterToUserResult;
struct FServerGetLeaderboardForUsersCharactersResult;
struct FServerGetLeaderboardAroundCharacterResult;
struct FServerGetCharacterStatisticsResult;
struct FServerGetCharacterLeaderboardResult;
struct FServerListUsersCharactersResult;
struct FServerDeleteCharacterFromUserResult;
struct FServerUpdateCharacterDataResult;
struct FServerGetCharacterDataResult;
struct FServerSetPlayerSecretResult;
struct FServerServerLoginResult;
struct FServerAuthenticateSessionTicketResult;
struct FServerWriteEventResponse;
struct FServerUpdateBansResult;
struct FServerEmptyResponse;
struct FServerUnlinkXboxAccountResult;
struct FServerUnlinkServerCustomIdResult;
struct FServerUnlinkPSNAccountResult;
struct FServerSendPushNotificationResult;
struct FServerSendEmailFromTemplateResult;
struct FServerSendCustomAccountRecoveryEmailResult;
struct FServerSavePushNotificationTemplateResult;
struct FServerRevokeBansResult;
struct FServerRevokeAllBansForUserResult;
struct FServerLinkXboxAccountResult;
struct FServerLinkServerCustomIdResult;
struct FServerLinkPSNAccountResult;
struct FServerGetUserBansResult;
struct FServerGetUserAccountInfoResult;
struct FServerGetServerCustomIDsFromPlayFabIDsResult;
struct FServerGetPlayFabIDsFromXboxLiveIDsResult;
struct FServerGetPlayFabIDsFromSteamIDsResult;
struct FServerGetPlayFabIDsFromPSNAccountIDsResult;
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;
struct FServerGetPlayFabIDsFromGenericIDsResult;
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult;
struct FServerGetPlayFabIDsFromFacebookIDsResult;
struct FServerGetPlayerProfileResult;
struct FServerDeletePushNotificationTemplateResult;
struct FServerDeletePlayerResult;
struct FServerBanUsersResult;
struct FServerEmptyResult;
#ifdef PLAYFAB_PlayFabServerModelDecoder_generated_h
#error "PlayFabServerModelDecoder.generated.h already included, missing '#pragma once' in PlayFabServerModelDecoder.h"
#endif
#define PLAYFAB_PlayFabServerModelDecoder_generated_h

#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_SPARSE_DATA
#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTimeResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSharedGroupResultResponse); \
	DECLARE_FUNCTION(execdecodeAddSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlockContainerItemResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeReportPlayerServerResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemCouponResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToUserFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyItemUsesResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeEvaluateRandomResultTableResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeItemResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyCharacterVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerCombinedInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeAwardSteamAchievementResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceStateResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceDataResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeRefreshGameServerInstanceHeartbeatResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMatchmakerTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeNotifyMatchmakerPlayerLeftResultResponse); \
	DECLARE_FUNCTION(execdecodeDeregisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendsListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentDownloadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantCharacterToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardForUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeListUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeServerLoginResultResponse); \
	DECLARE_FUNCTION(execdecodeAuthenticateSessionTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeWriteEventResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeSendPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeSendEmailFromTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendCustomAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSavePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerCustomIDsFromPlayFabIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromXboxLiveIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromSteamIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNAccountIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGenericIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse);


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTimeResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSharedGroupResultResponse); \
	DECLARE_FUNCTION(execdecodeAddSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlockContainerItemResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeReportPlayerServerResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemCouponResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToUserFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeMoveItemToCharacterFromCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyItemUsesResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeEvaluateRandomResultTableResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeItemResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyCharacterVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerCombinedInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeAwardSteamAchievementResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceStateResultResponse); \
	DECLARE_FUNCTION(execdecodeSetGameServerInstanceDataResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeRefreshGameServerInstanceHeartbeatResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMatchmakerTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeNotifyMatchmakerPlayerLeftResultResponse); \
	DECLARE_FUNCTION(execdecodeDeregisterGameResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendsListResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentDownloadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantCharacterToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardForUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeListUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteCharacterFromUserResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeServerLoginResultResponse); \
	DECLARE_FUNCTION(execdecodeAuthenticateSessionTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeWriteEventResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeSendPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeSendEmailFromTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeSendCustomAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeSavePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkServerCustomIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerCustomIDsFromPlayFabIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromXboxLiveIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromSteamIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNAccountIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGenericIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePushNotificationTemplateResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse);


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabServerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabServerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerModelDecoder)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabServerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabServerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerModelDecoder)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerModelDecoder(UPlayFabServerModelDecoder&&); \
	NO_API UPlayFabServerModelDecoder(const UPlayFabServerModelDecoder&); \
public:


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerModelDecoder(UPlayFabServerModelDecoder&&); \
	NO_API UPlayFabServerModelDecoder(const UPlayFabServerModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerModelDecoder)


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_23_PROLOG
#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_SPARSE_DATA \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_RPC_WRAPPERS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_INCLASS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_SPARSE_DATA \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabServerModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AzureJam_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
