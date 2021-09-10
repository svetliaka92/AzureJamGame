// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEnums() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EServerType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EProtocolType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOsPlatform();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECancellationReason();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmFamily();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureRegion();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentState();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAnalysisTaskState();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPfTriggerType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPlayerConnectionState();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETransactionStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETradeStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EMatchmakeStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EGameInstanceState();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAdActivity();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EUserOrigination();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EUserDataPermission();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleActivationStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETaskInstanceStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionArchivalStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPfSourceType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentPushNotificationDevicePlatform();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentFilterComparison();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentCurrency();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentCountryCode();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EScheduledTaskType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EResultTableNodeType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EResolutionOutcome();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ERegion();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPushSetupPlatform();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPushNotificationPlatform();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EGameBuildStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EEmailVerificationStatus();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EEffectType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECurrency();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECountryCode();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContinentCode();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EConditionals();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAuthTokenType();
// End Cross Module References
	static UEnum* ETitleMultiplayerServerEnabledStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETitleMultiplayerServerEnabledStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETitleMultiplayerServerEnabledStatus>()
	{
		return ETitleMultiplayerServerEnabledStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETitleMultiplayerServerEnabledStatus(ETitleMultiplayerServerEnabledStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETitleMultiplayerServerEnabledStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus_Hash() { return 197106144U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETitleMultiplayerServerEnabledStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Initializing", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Initializing },
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Enabled", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Enabled },
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Disabled", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TitleMultiplayerServerEnabledStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Disabled.DisplayName", "Disabled" },
				{ "pfenum_Disabled.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Disabled" },
				{ "pfenum_Enabled.DisplayName", "Enabled" },
				{ "pfenum_Enabled.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Enabled" },
				{ "pfenum_Initializing.DisplayName", "Initializing" },
				{ "pfenum_Initializing.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Initializing" },
				{ "ToolTip", "TitleMultiplayerServerEnabledStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETitleMultiplayerServerEnabledStatus",
				"ETitleMultiplayerServerEnabledStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EServerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EServerType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EServerType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EServerType>()
	{
		return EServerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EServerType(EServerType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EServerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EServerType_Hash() { return 4150462988U; }
	UEnum* Z_Construct_UEnum_PlayFab_EServerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EServerType"), 0, Get_Z_Construct_UEnum_PlayFab_EServerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EServerType::pfenum_Container", (int64)EServerType::pfenum_Container },
				{ "EServerType::pfenum_Process", (int64)EServerType::pfenum_Process },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ServerType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Container.DisplayName", "Container" },
				{ "pfenum_Container.Name", "EServerType::pfenum_Container" },
				{ "pfenum_Process.DisplayName", "Process" },
				{ "pfenum_Process.Name", "EServerType::pfenum_Process" },
				{ "ToolTip", "ServerType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EServerType",
				"EServerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EProtocolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EProtocolType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EProtocolType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EProtocolType>()
	{
		return EProtocolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProtocolType(EProtocolType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EProtocolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EProtocolType_Hash() { return 4148530857U; }
	UEnum* Z_Construct_UEnum_PlayFab_EProtocolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProtocolType"), 0, Get_Z_Construct_UEnum_PlayFab_EProtocolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProtocolType::pfenum_TCP", (int64)EProtocolType::pfenum_TCP },
				{ "EProtocolType::pfenum_UDP", (int64)EProtocolType::pfenum_UDP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ProtocolType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_TCP.DisplayName", "TCP" },
				{ "pfenum_TCP.Name", "EProtocolType::pfenum_TCP" },
				{ "pfenum_UDP.DisplayName", "UDP" },
				{ "pfenum_UDP.Name", "EProtocolType::pfenum_UDP" },
				{ "ToolTip", "ProtocolType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EProtocolType",
				"EProtocolType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOsPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EOsPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EOsPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EOsPlatform>()
	{
		return EOsPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOsPlatform(EOsPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EOsPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EOsPlatform_Hash() { return 1731138269U; }
	UEnum* Z_Construct_UEnum_PlayFab_EOsPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOsPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EOsPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOsPlatform::pfenum_Windows", (int64)EOsPlatform::pfenum_Windows },
				{ "EOsPlatform::pfenum_Linux", (int64)EOsPlatform::pfenum_Linux },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** OsPlatform */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Linux.DisplayName", "Linux" },
				{ "pfenum_Linux.Name", "EOsPlatform::pfenum_Linux" },
				{ "pfenum_Windows.DisplayName", "Windows" },
				{ "pfenum_Windows.Name", "EOsPlatform::pfenum_Windows" },
				{ "ToolTip", "OsPlatform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EOsPlatform",
				"EOsPlatform",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EContainerFlavor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EContainerFlavor, Z_Construct_UPackage__Script_PlayFab(), TEXT("EContainerFlavor"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EContainerFlavor>()
	{
		return EContainerFlavor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContainerFlavor(EContainerFlavor_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EContainerFlavor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EContainerFlavor_Hash() { return 708996471U; }
	UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContainerFlavor"), 0, Get_Z_Construct_UEnum_PlayFab_EContainerFlavor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContainerFlavor::pfenum_ManagedWindowsServerCore", (int64)EContainerFlavor::pfenum_ManagedWindowsServerCore },
				{ "EContainerFlavor::pfenum_CustomLinux", (int64)EContainerFlavor::pfenum_CustomLinux },
				{ "EContainerFlavor::pfenum_ManagedWindowsServerCorePreview", (int64)EContainerFlavor::pfenum_ManagedWindowsServerCorePreview },
				{ "EContainerFlavor::pfenum_Invalid", (int64)EContainerFlavor::pfenum_Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ContainerFlavor */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_CustomLinux.DisplayName", "CustomLinux" },
				{ "pfenum_CustomLinux.Name", "EContainerFlavor::pfenum_CustomLinux" },
				{ "pfenum_Invalid.DisplayName", "Invalid" },
				{ "pfenum_Invalid.Name", "EContainerFlavor::pfenum_Invalid" },
				{ "pfenum_ManagedWindowsServerCore.DisplayName", "ManagedWindowsServerCore" },
				{ "pfenum_ManagedWindowsServerCore.Name", "EContainerFlavor::pfenum_ManagedWindowsServerCore" },
				{ "pfenum_ManagedWindowsServerCorePreview.DisplayName", "ManagedWindowsServerCorePreview" },
				{ "pfenum_ManagedWindowsServerCorePreview.Name", "EContainerFlavor::pfenum_ManagedWindowsServerCorePreview" },
				{ "ToolTip", "ContainerFlavor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EContainerFlavor",
				"EContainerFlavor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECancellationReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECancellationReason, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECancellationReason"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECancellationReason>()
	{
		return ECancellationReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECancellationReason(ECancellationReason_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECancellationReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECancellationReason_Hash() { return 1602495603U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECancellationReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECancellationReason"), 0, Get_Z_Construct_UEnum_PlayFab_ECancellationReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECancellationReason::pfenum_Requested", (int64)ECancellationReason::pfenum_Requested },
				{ "ECancellationReason::pfenum_Internal", (int64)ECancellationReason::pfenum_Internal },
				{ "ECancellationReason::pfenum_Timeout", (int64)ECancellationReason::pfenum_Timeout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** CancellationReason */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Internal.DisplayName", "Internal" },
				{ "pfenum_Internal.Name", "ECancellationReason::pfenum_Internal" },
				{ "pfenum_Requested.DisplayName", "Requested" },
				{ "pfenum_Requested.Name", "ECancellationReason::pfenum_Requested" },
				{ "pfenum_Timeout.DisplayName", "Timeout" },
				{ "pfenum_Timeout.Name", "ECancellationReason::pfenum_Timeout" },
				{ "ToolTip", "CancellationReason" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECancellationReason",
				"ECancellationReason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAzureVmSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureVmSize, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureVmSize"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmSize>()
	{
		return EAzureVmSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureVmSize(EAzureVmSize_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureVmSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureVmSize_Hash() { return 3628313056U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureVmSize"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureVmSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureVmSize::pfenum_Standard_A1", (int64)EAzureVmSize::pfenum_Standard_A1 },
				{ "EAzureVmSize::pfenum_Standard_A2", (int64)EAzureVmSize::pfenum_Standard_A2 },
				{ "EAzureVmSize::pfenum_Standard_A3", (int64)EAzureVmSize::pfenum_Standard_A3 },
				{ "EAzureVmSize::pfenum_Standard_A4", (int64)EAzureVmSize::pfenum_Standard_A4 },
				{ "EAzureVmSize::pfenum_Standard_A1_v2", (int64)EAzureVmSize::pfenum_Standard_A1_v2 },
				{ "EAzureVmSize::pfenum_Standard_A2_v2", (int64)EAzureVmSize::pfenum_Standard_A2_v2 },
				{ "EAzureVmSize::pfenum_Standard_A4_v2", (int64)EAzureVmSize::pfenum_Standard_A4_v2 },
				{ "EAzureVmSize::pfenum_Standard_A8_v2", (int64)EAzureVmSize::pfenum_Standard_A8_v2 },
				{ "EAzureVmSize::pfenum_Standard_D1_v2", (int64)EAzureVmSize::pfenum_Standard_D1_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2_v2", (int64)EAzureVmSize::pfenum_Standard_D2_v2 },
				{ "EAzureVmSize::pfenum_Standard_D3_v2", (int64)EAzureVmSize::pfenum_Standard_D3_v2 },
				{ "EAzureVmSize::pfenum_Standard_D4_v2", (int64)EAzureVmSize::pfenum_Standard_D4_v2 },
				{ "EAzureVmSize::pfenum_Standard_D5_v2", (int64)EAzureVmSize::pfenum_Standard_D5_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2_v3", (int64)EAzureVmSize::pfenum_Standard_D2_v3 },
				{ "EAzureVmSize::pfenum_Standard_D4_v3", (int64)EAzureVmSize::pfenum_Standard_D4_v3 },
				{ "EAzureVmSize::pfenum_Standard_D8_v3", (int64)EAzureVmSize::pfenum_Standard_D8_v3 },
				{ "EAzureVmSize::pfenum_Standard_D16_v3", (int64)EAzureVmSize::pfenum_Standard_D16_v3 },
				{ "EAzureVmSize::pfenum_Standard_F1", (int64)EAzureVmSize::pfenum_Standard_F1 },
				{ "EAzureVmSize::pfenum_Standard_F2", (int64)EAzureVmSize::pfenum_Standard_F2 },
				{ "EAzureVmSize::pfenum_Standard_F4", (int64)EAzureVmSize::pfenum_Standard_F4 },
				{ "EAzureVmSize::pfenum_Standard_F8", (int64)EAzureVmSize::pfenum_Standard_F8 },
				{ "EAzureVmSize::pfenum_Standard_F16", (int64)EAzureVmSize::pfenum_Standard_F16 },
				{ "EAzureVmSize::pfenum_Standard_F2s_v2", (int64)EAzureVmSize::pfenum_Standard_F2s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F4s_v2", (int64)EAzureVmSize::pfenum_Standard_F4s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F8s_v2", (int64)EAzureVmSize::pfenum_Standard_F8s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F16s_v2", (int64)EAzureVmSize::pfenum_Standard_F16s_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2as_v4", (int64)EAzureVmSize::pfenum_Standard_D2as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4as_v4", (int64)EAzureVmSize::pfenum_Standard_D4as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8as_v4", (int64)EAzureVmSize::pfenum_Standard_D8as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16as_v4", (int64)EAzureVmSize::pfenum_Standard_D16as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D2a_v4", (int64)EAzureVmSize::pfenum_Standard_D2a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4a_v4", (int64)EAzureVmSize::pfenum_Standard_D4a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8a_v4", (int64)EAzureVmSize::pfenum_Standard_D8a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16a_v4", (int64)EAzureVmSize::pfenum_Standard_D16a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E2a_v4", (int64)EAzureVmSize::pfenum_Standard_E2a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E4a_v4", (int64)EAzureVmSize::pfenum_Standard_E4a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E8a_v4", (int64)EAzureVmSize::pfenum_Standard_E8a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E16a_v4", (int64)EAzureVmSize::pfenum_Standard_E16a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E2as_v4", (int64)EAzureVmSize::pfenum_Standard_E2as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E4as_v4", (int64)EAzureVmSize::pfenum_Standard_E4as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E8as_v4", (int64)EAzureVmSize::pfenum_Standard_E8as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E16as_v4", (int64)EAzureVmSize::pfenum_Standard_E16as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D2s_v3", (int64)EAzureVmSize::pfenum_Standard_D2s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D4s_v3", (int64)EAzureVmSize::pfenum_Standard_D4s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D8s_v3", (int64)EAzureVmSize::pfenum_Standard_D8s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D16s_v3", (int64)EAzureVmSize::pfenum_Standard_D16s_v3 },
				{ "EAzureVmSize::pfenum_Standard_DS1_v2", (int64)EAzureVmSize::pfenum_Standard_DS1_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS2_v2", (int64)EAzureVmSize::pfenum_Standard_DS2_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS3_v2", (int64)EAzureVmSize::pfenum_Standard_DS3_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS4_v2", (int64)EAzureVmSize::pfenum_Standard_DS4_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS5_v2", (int64)EAzureVmSize::pfenum_Standard_DS5_v2 },
				{ "EAzureVmSize::pfenum_Standard_NC4as_T4_v3", (int64)EAzureVmSize::pfenum_Standard_NC4as_T4_v3 },
				{ "EAzureVmSize::pfenum_Standard_D2d_v4", (int64)EAzureVmSize::pfenum_Standard_D2d_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4d_v4", (int64)EAzureVmSize::pfenum_Standard_D4d_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8d_v4", (int64)EAzureVmSize::pfenum_Standard_D8d_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16d_v4", (int64)EAzureVmSize::pfenum_Standard_D16d_v4 },
				{ "EAzureVmSize::pfenum_Standard_D2ds_v4", (int64)EAzureVmSize::pfenum_Standard_D2ds_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4ds_v4", (int64)EAzureVmSize::pfenum_Standard_D4ds_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8ds_v4", (int64)EAzureVmSize::pfenum_Standard_D8ds_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16ds_v4", (int64)EAzureVmSize::pfenum_Standard_D16ds_v4 },
				{ "EAzureVmSize::pfenum_Standard_HB120_16rs_v3", (int64)EAzureVmSize::pfenum_Standard_HB120_16rs_v3 },
				{ "EAzureVmSize::pfenum_Standard_HB120_32rs_v3", (int64)EAzureVmSize::pfenum_Standard_HB120_32rs_v3 },
				{ "EAzureVmSize::pfenum_Standard_HB120_64rs_v3", (int64)EAzureVmSize::pfenum_Standard_HB120_64rs_v3 },
				{ "EAzureVmSize::pfenum_Standard_HB120_96rs_v3", (int64)EAzureVmSize::pfenum_Standard_HB120_96rs_v3 },
				{ "EAzureVmSize::pfenum_Standard_HB120rs_v3", (int64)EAzureVmSize::pfenum_Standard_HB120rs_v3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AzureVmSize */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Standard_A1.DisplayName", "Standard_A1" },
				{ "pfenum_Standard_A1.Name", "EAzureVmSize::pfenum_Standard_A1" },
				{ "pfenum_Standard_A1_v2.DisplayName", "Standard_A1_v2" },
				{ "pfenum_Standard_A1_v2.Name", "EAzureVmSize::pfenum_Standard_A1_v2" },
				{ "pfenum_Standard_A2.DisplayName", "Standard_A2" },
				{ "pfenum_Standard_A2.Name", "EAzureVmSize::pfenum_Standard_A2" },
				{ "pfenum_Standard_A2_v2.DisplayName", "Standard_A2_v2" },
				{ "pfenum_Standard_A2_v2.Name", "EAzureVmSize::pfenum_Standard_A2_v2" },
				{ "pfenum_Standard_A3.DisplayName", "Standard_A3" },
				{ "pfenum_Standard_A3.Name", "EAzureVmSize::pfenum_Standard_A3" },
				{ "pfenum_Standard_A4.DisplayName", "Standard_A4" },
				{ "pfenum_Standard_A4.Name", "EAzureVmSize::pfenum_Standard_A4" },
				{ "pfenum_Standard_A4_v2.DisplayName", "Standard_A4_v2" },
				{ "pfenum_Standard_A4_v2.Name", "EAzureVmSize::pfenum_Standard_A4_v2" },
				{ "pfenum_Standard_A8_v2.DisplayName", "Standard_A8_v2" },
				{ "pfenum_Standard_A8_v2.Name", "EAzureVmSize::pfenum_Standard_A8_v2" },
				{ "pfenum_Standard_D16_v3.DisplayName", "Standard_D16_v3" },
				{ "pfenum_Standard_D16_v3.Name", "EAzureVmSize::pfenum_Standard_D16_v3" },
				{ "pfenum_Standard_D16a_v4.DisplayName", "Standard_D16a_v4" },
				{ "pfenum_Standard_D16a_v4.Name", "EAzureVmSize::pfenum_Standard_D16a_v4" },
				{ "pfenum_Standard_D16as_v4.DisplayName", "Standard_D16as_v4" },
				{ "pfenum_Standard_D16as_v4.Name", "EAzureVmSize::pfenum_Standard_D16as_v4" },
				{ "pfenum_Standard_D16d_v4.DisplayName", "Standard_D16d_v4" },
				{ "pfenum_Standard_D16d_v4.Name", "EAzureVmSize::pfenum_Standard_D16d_v4" },
				{ "pfenum_Standard_D16ds_v4.DisplayName", "Standard_D16ds_v4" },
				{ "pfenum_Standard_D16ds_v4.Name", "EAzureVmSize::pfenum_Standard_D16ds_v4" },
				{ "pfenum_Standard_D16s_v3.DisplayName", "Standard_D16s_v3" },
				{ "pfenum_Standard_D16s_v3.Name", "EAzureVmSize::pfenum_Standard_D16s_v3" },
				{ "pfenum_Standard_D1_v2.DisplayName", "Standard_D1_v2" },
				{ "pfenum_Standard_D1_v2.Name", "EAzureVmSize::pfenum_Standard_D1_v2" },
				{ "pfenum_Standard_D2_v2.DisplayName", "Standard_D2_v2" },
				{ "pfenum_Standard_D2_v2.Name", "EAzureVmSize::pfenum_Standard_D2_v2" },
				{ "pfenum_Standard_D2_v3.DisplayName", "Standard_D2_v3" },
				{ "pfenum_Standard_D2_v3.Name", "EAzureVmSize::pfenum_Standard_D2_v3" },
				{ "pfenum_Standard_D2a_v4.DisplayName", "Standard_D2a_v4" },
				{ "pfenum_Standard_D2a_v4.Name", "EAzureVmSize::pfenum_Standard_D2a_v4" },
				{ "pfenum_Standard_D2as_v4.DisplayName", "Standard_D2as_v4" },
				{ "pfenum_Standard_D2as_v4.Name", "EAzureVmSize::pfenum_Standard_D2as_v4" },
				{ "pfenum_Standard_D2d_v4.DisplayName", "Standard_D2d_v4" },
				{ "pfenum_Standard_D2d_v4.Name", "EAzureVmSize::pfenum_Standard_D2d_v4" },
				{ "pfenum_Standard_D2ds_v4.DisplayName", "Standard_D2ds_v4" },
				{ "pfenum_Standard_D2ds_v4.Name", "EAzureVmSize::pfenum_Standard_D2ds_v4" },
				{ "pfenum_Standard_D2s_v3.DisplayName", "Standard_D2s_v3" },
				{ "pfenum_Standard_D2s_v3.Name", "EAzureVmSize::pfenum_Standard_D2s_v3" },
				{ "pfenum_Standard_D3_v2.DisplayName", "Standard_D3_v2" },
				{ "pfenum_Standard_D3_v2.Name", "EAzureVmSize::pfenum_Standard_D3_v2" },
				{ "pfenum_Standard_D4_v2.DisplayName", "Standard_D4_v2" },
				{ "pfenum_Standard_D4_v2.Name", "EAzureVmSize::pfenum_Standard_D4_v2" },
				{ "pfenum_Standard_D4_v3.DisplayName", "Standard_D4_v3" },
				{ "pfenum_Standard_D4_v3.Name", "EAzureVmSize::pfenum_Standard_D4_v3" },
				{ "pfenum_Standard_D4a_v4.DisplayName", "Standard_D4a_v4" },
				{ "pfenum_Standard_D4a_v4.Name", "EAzureVmSize::pfenum_Standard_D4a_v4" },
				{ "pfenum_Standard_D4as_v4.DisplayName", "Standard_D4as_v4" },
				{ "pfenum_Standard_D4as_v4.Name", "EAzureVmSize::pfenum_Standard_D4as_v4" },
				{ "pfenum_Standard_D4d_v4.DisplayName", "Standard_D4d_v4" },
				{ "pfenum_Standard_D4d_v4.Name", "EAzureVmSize::pfenum_Standard_D4d_v4" },
				{ "pfenum_Standard_D4ds_v4.DisplayName", "Standard_D4ds_v4" },
				{ "pfenum_Standard_D4ds_v4.Name", "EAzureVmSize::pfenum_Standard_D4ds_v4" },
				{ "pfenum_Standard_D4s_v3.DisplayName", "Standard_D4s_v3" },
				{ "pfenum_Standard_D4s_v3.Name", "EAzureVmSize::pfenum_Standard_D4s_v3" },
				{ "pfenum_Standard_D5_v2.DisplayName", "Standard_D5_v2" },
				{ "pfenum_Standard_D5_v2.Name", "EAzureVmSize::pfenum_Standard_D5_v2" },
				{ "pfenum_Standard_D8_v3.DisplayName", "Standard_D8_v3" },
				{ "pfenum_Standard_D8_v3.Name", "EAzureVmSize::pfenum_Standard_D8_v3" },
				{ "pfenum_Standard_D8a_v4.DisplayName", "Standard_D8a_v4" },
				{ "pfenum_Standard_D8a_v4.Name", "EAzureVmSize::pfenum_Standard_D8a_v4" },
				{ "pfenum_Standard_D8as_v4.DisplayName", "Standard_D8as_v4" },
				{ "pfenum_Standard_D8as_v4.Name", "EAzureVmSize::pfenum_Standard_D8as_v4" },
				{ "pfenum_Standard_D8d_v4.DisplayName", "Standard_D8d_v4" },
				{ "pfenum_Standard_D8d_v4.Name", "EAzureVmSize::pfenum_Standard_D8d_v4" },
				{ "pfenum_Standard_D8ds_v4.DisplayName", "Standard_D8ds_v4" },
				{ "pfenum_Standard_D8ds_v4.Name", "EAzureVmSize::pfenum_Standard_D8ds_v4" },
				{ "pfenum_Standard_D8s_v3.DisplayName", "Standard_D8s_v3" },
				{ "pfenum_Standard_D8s_v3.Name", "EAzureVmSize::pfenum_Standard_D8s_v3" },
				{ "pfenum_Standard_DS1_v2.DisplayName", "Standard_DS1_v2" },
				{ "pfenum_Standard_DS1_v2.Name", "EAzureVmSize::pfenum_Standard_DS1_v2" },
				{ "pfenum_Standard_DS2_v2.DisplayName", "Standard_DS2_v2" },
				{ "pfenum_Standard_DS2_v2.Name", "EAzureVmSize::pfenum_Standard_DS2_v2" },
				{ "pfenum_Standard_DS3_v2.DisplayName", "Standard_DS3_v2" },
				{ "pfenum_Standard_DS3_v2.Name", "EAzureVmSize::pfenum_Standard_DS3_v2" },
				{ "pfenum_Standard_DS4_v2.DisplayName", "Standard_DS4_v2" },
				{ "pfenum_Standard_DS4_v2.Name", "EAzureVmSize::pfenum_Standard_DS4_v2" },
				{ "pfenum_Standard_DS5_v2.DisplayName", "Standard_DS5_v2" },
				{ "pfenum_Standard_DS5_v2.Name", "EAzureVmSize::pfenum_Standard_DS5_v2" },
				{ "pfenum_Standard_E16a_v4.DisplayName", "Standard_E16a_v4" },
				{ "pfenum_Standard_E16a_v4.Name", "EAzureVmSize::pfenum_Standard_E16a_v4" },
				{ "pfenum_Standard_E16as_v4.DisplayName", "Standard_E16as_v4" },
				{ "pfenum_Standard_E16as_v4.Name", "EAzureVmSize::pfenum_Standard_E16as_v4" },
				{ "pfenum_Standard_E2a_v4.DisplayName", "Standard_E2a_v4" },
				{ "pfenum_Standard_E2a_v4.Name", "EAzureVmSize::pfenum_Standard_E2a_v4" },
				{ "pfenum_Standard_E2as_v4.DisplayName", "Standard_E2as_v4" },
				{ "pfenum_Standard_E2as_v4.Name", "EAzureVmSize::pfenum_Standard_E2as_v4" },
				{ "pfenum_Standard_E4a_v4.DisplayName", "Standard_E4a_v4" },
				{ "pfenum_Standard_E4a_v4.Name", "EAzureVmSize::pfenum_Standard_E4a_v4" },
				{ "pfenum_Standard_E4as_v4.DisplayName", "Standard_E4as_v4" },
				{ "pfenum_Standard_E4as_v4.Name", "EAzureVmSize::pfenum_Standard_E4as_v4" },
				{ "pfenum_Standard_E8a_v4.DisplayName", "Standard_E8a_v4" },
				{ "pfenum_Standard_E8a_v4.Name", "EAzureVmSize::pfenum_Standard_E8a_v4" },
				{ "pfenum_Standard_E8as_v4.DisplayName", "Standard_E8as_v4" },
				{ "pfenum_Standard_E8as_v4.Name", "EAzureVmSize::pfenum_Standard_E8as_v4" },
				{ "pfenum_Standard_F1.DisplayName", "Standard_F1" },
				{ "pfenum_Standard_F1.Name", "EAzureVmSize::pfenum_Standard_F1" },
				{ "pfenum_Standard_F16.DisplayName", "Standard_F16" },
				{ "pfenum_Standard_F16.Name", "EAzureVmSize::pfenum_Standard_F16" },
				{ "pfenum_Standard_F16s_v2.DisplayName", "Standard_F16s_v2" },
				{ "pfenum_Standard_F16s_v2.Name", "EAzureVmSize::pfenum_Standard_F16s_v2" },
				{ "pfenum_Standard_F2.DisplayName", "Standard_F2" },
				{ "pfenum_Standard_F2.Name", "EAzureVmSize::pfenum_Standard_F2" },
				{ "pfenum_Standard_F2s_v2.DisplayName", "Standard_F2s_v2" },
				{ "pfenum_Standard_F2s_v2.Name", "EAzureVmSize::pfenum_Standard_F2s_v2" },
				{ "pfenum_Standard_F4.DisplayName", "Standard_F4" },
				{ "pfenum_Standard_F4.Name", "EAzureVmSize::pfenum_Standard_F4" },
				{ "pfenum_Standard_F4s_v2.DisplayName", "Standard_F4s_v2" },
				{ "pfenum_Standard_F4s_v2.Name", "EAzureVmSize::pfenum_Standard_F4s_v2" },
				{ "pfenum_Standard_F8.DisplayName", "Standard_F8" },
				{ "pfenum_Standard_F8.Name", "EAzureVmSize::pfenum_Standard_F8" },
				{ "pfenum_Standard_F8s_v2.DisplayName", "Standard_F8s_v2" },
				{ "pfenum_Standard_F8s_v2.Name", "EAzureVmSize::pfenum_Standard_F8s_v2" },
				{ "pfenum_Standard_HB120_16rs_v3.DisplayName", "Standard_HB120_16rs_v3" },
				{ "pfenum_Standard_HB120_16rs_v3.Name", "EAzureVmSize::pfenum_Standard_HB120_16rs_v3" },
				{ "pfenum_Standard_HB120_32rs_v3.DisplayName", "Standard_HB120_32rs_v3" },
				{ "pfenum_Standard_HB120_32rs_v3.Name", "EAzureVmSize::pfenum_Standard_HB120_32rs_v3" },
				{ "pfenum_Standard_HB120_64rs_v3.DisplayName", "Standard_HB120_64rs_v3" },
				{ "pfenum_Standard_HB120_64rs_v3.Name", "EAzureVmSize::pfenum_Standard_HB120_64rs_v3" },
				{ "pfenum_Standard_HB120_96rs_v3.DisplayName", "Standard_HB120_96rs_v3" },
				{ "pfenum_Standard_HB120_96rs_v3.Name", "EAzureVmSize::pfenum_Standard_HB120_96rs_v3" },
				{ "pfenum_Standard_HB120rs_v3.DisplayName", "Standard_HB120rs_v3" },
				{ "pfenum_Standard_HB120rs_v3.Name", "EAzureVmSize::pfenum_Standard_HB120rs_v3" },
				{ "pfenum_Standard_NC4as_T4_v3.DisplayName", "Standard_NC4as_T4_v3" },
				{ "pfenum_Standard_NC4as_T4_v3.Name", "EAzureVmSize::pfenum_Standard_NC4as_T4_v3" },
				{ "ToolTip", "AzureVmSize" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureVmSize",
				"EAzureVmSize",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAzureVmFamily_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureVmFamily, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureVmFamily"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmFamily>()
	{
		return EAzureVmFamily_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureVmFamily(EAzureVmFamily_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureVmFamily"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureVmFamily_Hash() { return 938124388U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureVmFamily()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureVmFamily"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureVmFamily_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureVmFamily::pfenum_A", (int64)EAzureVmFamily::pfenum_A },
				{ "EAzureVmFamily::pfenum_Av2", (int64)EAzureVmFamily::pfenum_Av2 },
				{ "EAzureVmFamily::pfenum_Dv2", (int64)EAzureVmFamily::pfenum_Dv2 },
				{ "EAzureVmFamily::pfenum_Dv3", (int64)EAzureVmFamily::pfenum_Dv3 },
				{ "EAzureVmFamily::pfenum_F", (int64)EAzureVmFamily::pfenum_F },
				{ "EAzureVmFamily::pfenum_Fsv2", (int64)EAzureVmFamily::pfenum_Fsv2 },
				{ "EAzureVmFamily::pfenum_Dasv4", (int64)EAzureVmFamily::pfenum_Dasv4 },
				{ "EAzureVmFamily::pfenum_Dav4", (int64)EAzureVmFamily::pfenum_Dav4 },
				{ "EAzureVmFamily::pfenum_Eav4", (int64)EAzureVmFamily::pfenum_Eav4 },
				{ "EAzureVmFamily::pfenum_Easv4", (int64)EAzureVmFamily::pfenum_Easv4 },
				{ "EAzureVmFamily::pfenum_Ev4", (int64)EAzureVmFamily::pfenum_Ev4 },
				{ "EAzureVmFamily::pfenum_Esv4", (int64)EAzureVmFamily::pfenum_Esv4 },
				{ "EAzureVmFamily::pfenum_Dsv3", (int64)EAzureVmFamily::pfenum_Dsv3 },
				{ "EAzureVmFamily::pfenum_Dsv2", (int64)EAzureVmFamily::pfenum_Dsv2 },
				{ "EAzureVmFamily::pfenum_NCasT4_v3", (int64)EAzureVmFamily::pfenum_NCasT4_v3 },
				{ "EAzureVmFamily::pfenum_Ddv4", (int64)EAzureVmFamily::pfenum_Ddv4 },
				{ "EAzureVmFamily::pfenum_Ddsv4", (int64)EAzureVmFamily::pfenum_Ddsv4 },
				{ "EAzureVmFamily::pfenum_HBv3", (int64)EAzureVmFamily::pfenum_HBv3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AzureVmFamily */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_A.DisplayName", "A" },
				{ "pfenum_A.Name", "EAzureVmFamily::pfenum_A" },
				{ "pfenum_Av2.DisplayName", "Av2" },
				{ "pfenum_Av2.Name", "EAzureVmFamily::pfenum_Av2" },
				{ "pfenum_Dasv4.DisplayName", "Dasv4" },
				{ "pfenum_Dasv4.Name", "EAzureVmFamily::pfenum_Dasv4" },
				{ "pfenum_Dav4.DisplayName", "Dav4" },
				{ "pfenum_Dav4.Name", "EAzureVmFamily::pfenum_Dav4" },
				{ "pfenum_Ddsv4.DisplayName", "Ddsv4" },
				{ "pfenum_Ddsv4.Name", "EAzureVmFamily::pfenum_Ddsv4" },
				{ "pfenum_Ddv4.DisplayName", "Ddv4" },
				{ "pfenum_Ddv4.Name", "EAzureVmFamily::pfenum_Ddv4" },
				{ "pfenum_Dsv2.DisplayName", "Dsv2" },
				{ "pfenum_Dsv2.Name", "EAzureVmFamily::pfenum_Dsv2" },
				{ "pfenum_Dsv3.DisplayName", "Dsv3" },
				{ "pfenum_Dsv3.Name", "EAzureVmFamily::pfenum_Dsv3" },
				{ "pfenum_Dv2.DisplayName", "Dv2" },
				{ "pfenum_Dv2.Name", "EAzureVmFamily::pfenum_Dv2" },
				{ "pfenum_Dv3.DisplayName", "Dv3" },
				{ "pfenum_Dv3.Name", "EAzureVmFamily::pfenum_Dv3" },
				{ "pfenum_Easv4.DisplayName", "Easv4" },
				{ "pfenum_Easv4.Name", "EAzureVmFamily::pfenum_Easv4" },
				{ "pfenum_Eav4.DisplayName", "Eav4" },
				{ "pfenum_Eav4.Name", "EAzureVmFamily::pfenum_Eav4" },
				{ "pfenum_Esv4.DisplayName", "Esv4" },
				{ "pfenum_Esv4.Name", "EAzureVmFamily::pfenum_Esv4" },
				{ "pfenum_Ev4.DisplayName", "Ev4" },
				{ "pfenum_Ev4.Name", "EAzureVmFamily::pfenum_Ev4" },
				{ "pfenum_F.DisplayName", "F" },
				{ "pfenum_F.Name", "EAzureVmFamily::pfenum_F" },
				{ "pfenum_Fsv2.DisplayName", "Fsv2" },
				{ "pfenum_Fsv2.Name", "EAzureVmFamily::pfenum_Fsv2" },
				{ "pfenum_HBv3.DisplayName", "HBv3" },
				{ "pfenum_HBv3.Name", "EAzureVmFamily::pfenum_HBv3" },
				{ "pfenum_NCasT4_v3.DisplayName", "NCasT4_v3" },
				{ "pfenum_NCasT4_v3.Name", "EAzureVmFamily::pfenum_NCasT4_v3" },
				{ "ToolTip", "AzureVmFamily" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureVmFamily",
				"EAzureVmFamily",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAzureRegion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureRegion, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureRegion"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureRegion>()
	{
		return EAzureRegion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureRegion(EAzureRegion_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureRegion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureRegion_Hash() { return 2458211071U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureRegion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureRegion"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureRegion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureRegion::pfenum_AustraliaEast", (int64)EAzureRegion::pfenum_AustraliaEast },
				{ "EAzureRegion::pfenum_AustraliaSoutheast", (int64)EAzureRegion::pfenum_AustraliaSoutheast },
				{ "EAzureRegion::pfenum_BrazilSouth", (int64)EAzureRegion::pfenum_BrazilSouth },
				{ "EAzureRegion::pfenum_CentralUs", (int64)EAzureRegion::pfenum_CentralUs },
				{ "EAzureRegion::pfenum_EastAsia", (int64)EAzureRegion::pfenum_EastAsia },
				{ "EAzureRegion::pfenum_EastUs", (int64)EAzureRegion::pfenum_EastUs },
				{ "EAzureRegion::pfenum_EastUs2", (int64)EAzureRegion::pfenum_EastUs2 },
				{ "EAzureRegion::pfenum_JapanEast", (int64)EAzureRegion::pfenum_JapanEast },
				{ "EAzureRegion::pfenum_JapanWest", (int64)EAzureRegion::pfenum_JapanWest },
				{ "EAzureRegion::pfenum_NorthCentralUs", (int64)EAzureRegion::pfenum_NorthCentralUs },
				{ "EAzureRegion::pfenum_NorthEurope", (int64)EAzureRegion::pfenum_NorthEurope },
				{ "EAzureRegion::pfenum_SouthCentralUs", (int64)EAzureRegion::pfenum_SouthCentralUs },
				{ "EAzureRegion::pfenum_SoutheastAsia", (int64)EAzureRegion::pfenum_SoutheastAsia },
				{ "EAzureRegion::pfenum_WestEurope", (int64)EAzureRegion::pfenum_WestEurope },
				{ "EAzureRegion::pfenum_WestUs", (int64)EAzureRegion::pfenum_WestUs },
				{ "EAzureRegion::pfenum_SouthAfricaNorth", (int64)EAzureRegion::pfenum_SouthAfricaNorth },
				{ "EAzureRegion::pfenum_WestCentralUs", (int64)EAzureRegion::pfenum_WestCentralUs },
				{ "EAzureRegion::pfenum_KoreaCentral", (int64)EAzureRegion::pfenum_KoreaCentral },
				{ "EAzureRegion::pfenum_FranceCentral", (int64)EAzureRegion::pfenum_FranceCentral },
				{ "EAzureRegion::pfenum_WestUs2", (int64)EAzureRegion::pfenum_WestUs2 },
				{ "EAzureRegion::pfenum_CentralIndia", (int64)EAzureRegion::pfenum_CentralIndia },
				{ "EAzureRegion::pfenum_UaeNorth", (int64)EAzureRegion::pfenum_UaeNorth },
				{ "EAzureRegion::pfenum_UkSouth", (int64)EAzureRegion::pfenum_UkSouth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AzureRegion */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AustraliaEast.DisplayName", "AustraliaEast" },
				{ "pfenum_AustraliaEast.Name", "EAzureRegion::pfenum_AustraliaEast" },
				{ "pfenum_AustraliaSoutheast.DisplayName", "AustraliaSoutheast" },
				{ "pfenum_AustraliaSoutheast.Name", "EAzureRegion::pfenum_AustraliaSoutheast" },
				{ "pfenum_BrazilSouth.DisplayName", "BrazilSouth" },
				{ "pfenum_BrazilSouth.Name", "EAzureRegion::pfenum_BrazilSouth" },
				{ "pfenum_CentralIndia.DisplayName", "CentralIndia" },
				{ "pfenum_CentralIndia.Name", "EAzureRegion::pfenum_CentralIndia" },
				{ "pfenum_CentralUs.DisplayName", "CentralUs" },
				{ "pfenum_CentralUs.Name", "EAzureRegion::pfenum_CentralUs" },
				{ "pfenum_EastAsia.DisplayName", "EastAsia" },
				{ "pfenum_EastAsia.Name", "EAzureRegion::pfenum_EastAsia" },
				{ "pfenum_EastUs.DisplayName", "EastUs" },
				{ "pfenum_EastUs.Name", "EAzureRegion::pfenum_EastUs" },
				{ "pfenum_EastUs2.DisplayName", "EastUs2" },
				{ "pfenum_EastUs2.Name", "EAzureRegion::pfenum_EastUs2" },
				{ "pfenum_FranceCentral.DisplayName", "FranceCentral" },
				{ "pfenum_FranceCentral.Name", "EAzureRegion::pfenum_FranceCentral" },
				{ "pfenum_JapanEast.DisplayName", "JapanEast" },
				{ "pfenum_JapanEast.Name", "EAzureRegion::pfenum_JapanEast" },
				{ "pfenum_JapanWest.DisplayName", "JapanWest" },
				{ "pfenum_JapanWest.Name", "EAzureRegion::pfenum_JapanWest" },
				{ "pfenum_KoreaCentral.DisplayName", "KoreaCentral" },
				{ "pfenum_KoreaCentral.Name", "EAzureRegion::pfenum_KoreaCentral" },
				{ "pfenum_NorthCentralUs.DisplayName", "NorthCentralUs" },
				{ "pfenum_NorthCentralUs.Name", "EAzureRegion::pfenum_NorthCentralUs" },
				{ "pfenum_NorthEurope.DisplayName", "NorthEurope" },
				{ "pfenum_NorthEurope.Name", "EAzureRegion::pfenum_NorthEurope" },
				{ "pfenum_SouthAfricaNorth.DisplayName", "SouthAfricaNorth" },
				{ "pfenum_SouthAfricaNorth.Name", "EAzureRegion::pfenum_SouthAfricaNorth" },
				{ "pfenum_SouthCentralUs.DisplayName", "SouthCentralUs" },
				{ "pfenum_SouthCentralUs.Name", "EAzureRegion::pfenum_SouthCentralUs" },
				{ "pfenum_SoutheastAsia.DisplayName", "SoutheastAsia" },
				{ "pfenum_SoutheastAsia.Name", "EAzureRegion::pfenum_SoutheastAsia" },
				{ "pfenum_UaeNorth.DisplayName", "UaeNorth" },
				{ "pfenum_UaeNorth.Name", "EAzureRegion::pfenum_UaeNorth" },
				{ "pfenum_UkSouth.DisplayName", "UkSouth" },
				{ "pfenum_UkSouth.Name", "EAzureRegion::pfenum_UkSouth" },
				{ "pfenum_WestCentralUs.DisplayName", "WestCentralUs" },
				{ "pfenum_WestCentralUs.Name", "EAzureRegion::pfenum_WestCentralUs" },
				{ "pfenum_WestEurope.DisplayName", "WestEurope" },
				{ "pfenum_WestEurope.Name", "EAzureRegion::pfenum_WestEurope" },
				{ "pfenum_WestUs.DisplayName", "WestUs" },
				{ "pfenum_WestUs.Name", "EAzureRegion::pfenum_WestUs" },
				{ "pfenum_WestUs2.DisplayName", "WestUs2" },
				{ "pfenum_WestUs2.Name", "EAzureRegion::pfenum_WestUs2" },
				{ "ToolTip", "AzureRegion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureRegion",
				"EAzureRegion",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EExperimentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EExperimentType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EExperimentType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EExperimentType>()
	{
		return EExperimentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExperimentType(EExperimentType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EExperimentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EExperimentType_Hash() { return 1477836004U; }
	UEnum* Z_Construct_UEnum_PlayFab_EExperimentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExperimentType"), 0, Get_Z_Construct_UEnum_PlayFab_EExperimentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExperimentType::pfenum_Active", (int64)EExperimentType::pfenum_Active },
				{ "EExperimentType::pfenum_Snapshot", (int64)EExperimentType::pfenum_Snapshot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ExperimentType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Active.DisplayName", "Active" },
				{ "pfenum_Active.Name", "EExperimentType::pfenum_Active" },
				{ "pfenum_Snapshot.DisplayName", "Snapshot" },
				{ "pfenum_Snapshot.Name", "EExperimentType::pfenum_Snapshot" },
				{ "ToolTip", "ExperimentType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EExperimentType",
				"EExperimentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EExperimentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EExperimentState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EExperimentState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EExperimentState>()
	{
		return EExperimentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExperimentState(EExperimentState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EExperimentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EExperimentState_Hash() { return 379358540U; }
	UEnum* Z_Construct_UEnum_PlayFab_EExperimentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExperimentState"), 0, Get_Z_Construct_UEnum_PlayFab_EExperimentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExperimentState::pfenum_New", (int64)EExperimentState::pfenum_New },
				{ "EExperimentState::pfenum_Started", (int64)EExperimentState::pfenum_Started },
				{ "EExperimentState::pfenum_Stopped", (int64)EExperimentState::pfenum_Stopped },
				{ "EExperimentState::pfenum_Deleted", (int64)EExperimentState::pfenum_Deleted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ExperimentState */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Deleted.DisplayName", "Deleted" },
				{ "pfenum_Deleted.Name", "EExperimentState::pfenum_Deleted" },
				{ "pfenum_New.DisplayName", "New" },
				{ "pfenum_New.Name", "EExperimentState::pfenum_New" },
				{ "pfenum_Started.DisplayName", "Started" },
				{ "pfenum_Started.Name", "EExperimentState::pfenum_Started" },
				{ "pfenum_Stopped.DisplayName", "Stopped" },
				{ "pfenum_Stopped.Name", "EExperimentState::pfenum_Stopped" },
				{ "ToolTip", "ExperimentState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EExperimentState",
				"EExperimentState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAnalysisTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAnalysisTaskState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAnalysisTaskState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAnalysisTaskState>()
	{
		return EAnalysisTaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnalysisTaskState(EAnalysisTaskState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAnalysisTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAnalysisTaskState_Hash() { return 1744091477U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAnalysisTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnalysisTaskState"), 0, Get_Z_Construct_UEnum_PlayFab_EAnalysisTaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnalysisTaskState::pfenum_Waiting", (int64)EAnalysisTaskState::pfenum_Waiting },
				{ "EAnalysisTaskState::pfenum_ReadyForSubmission", (int64)EAnalysisTaskState::pfenum_ReadyForSubmission },
				{ "EAnalysisTaskState::pfenum_SubmittingToPipeline", (int64)EAnalysisTaskState::pfenum_SubmittingToPipeline },
				{ "EAnalysisTaskState::pfenum_Running", (int64)EAnalysisTaskState::pfenum_Running },
				{ "EAnalysisTaskState::pfenum_Completed", (int64)EAnalysisTaskState::pfenum_Completed },
				{ "EAnalysisTaskState::pfenum_Failed", (int64)EAnalysisTaskState::pfenum_Failed },
				{ "EAnalysisTaskState::pfenum_Canceled", (int64)EAnalysisTaskState::pfenum_Canceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AnalysisTaskState */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Canceled.DisplayName", "Canceled" },
				{ "pfenum_Canceled.Name", "EAnalysisTaskState::pfenum_Canceled" },
				{ "pfenum_Completed.DisplayName", "Completed" },
				{ "pfenum_Completed.Name", "EAnalysisTaskState::pfenum_Completed" },
				{ "pfenum_Failed.DisplayName", "Failed" },
				{ "pfenum_Failed.Name", "EAnalysisTaskState::pfenum_Failed" },
				{ "pfenum_ReadyForSubmission.DisplayName", "ReadyForSubmission" },
				{ "pfenum_ReadyForSubmission.Name", "EAnalysisTaskState::pfenum_ReadyForSubmission" },
				{ "pfenum_Running.DisplayName", "Running" },
				{ "pfenum_Running.Name", "EAnalysisTaskState::pfenum_Running" },
				{ "pfenum_SubmittingToPipeline.DisplayName", "SubmittingToPipeline" },
				{ "pfenum_SubmittingToPipeline.Name", "EAnalysisTaskState::pfenum_SubmittingToPipeline" },
				{ "pfenum_Waiting.DisplayName", "Waiting" },
				{ "pfenum_Waiting.Name", "EAnalysisTaskState::pfenum_Waiting" },
				{ "ToolTip", "AnalysisTaskState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAnalysisTaskState",
				"EAnalysisTaskState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOperationTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EOperationTypes, Z_Construct_UPackage__Script_PlayFab(), TEXT("EOperationTypes"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EOperationTypes>()
	{
		return EOperationTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOperationTypes(EOperationTypes_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EOperationTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EOperationTypes_Hash() { return 2509240275U; }
	UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOperationTypes"), 0, Get_Z_Construct_UEnum_PlayFab_EOperationTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOperationTypes::pfenum_Created", (int64)EOperationTypes::pfenum_Created },
				{ "EOperationTypes::pfenum_Updated", (int64)EOperationTypes::pfenum_Updated },
				{ "EOperationTypes::pfenum_Deleted", (int64)EOperationTypes::pfenum_Deleted },
				{ "EOperationTypes::pfenum_None", (int64)EOperationTypes::pfenum_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** OperationTypes */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Created.DisplayName", "Created" },
				{ "pfenum_Created.Name", "EOperationTypes::pfenum_Created" },
				{ "pfenum_Deleted.DisplayName", "Deleted" },
				{ "pfenum_Deleted.Name", "EOperationTypes::pfenum_Deleted" },
				{ "pfenum_None.DisplayName", "None" },
				{ "pfenum_None.Name", "EOperationTypes::pfenum_None" },
				{ "pfenum_Updated.DisplayName", "Updated" },
				{ "pfenum_Updated.Name", "EOperationTypes::pfenum_Updated" },
				{ "ToolTip", "OperationTypes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EOperationTypes",
				"EOperationTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPfTriggerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPfTriggerType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPfTriggerType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPfTriggerType>()
	{
		return EPfTriggerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPfTriggerType(EPfTriggerType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPfTriggerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPfTriggerType_Hash() { return 527675598U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPfTriggerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPfTriggerType"), 0, Get_Z_Construct_UEnum_PlayFab_EPfTriggerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPfTriggerType::pfenum_HTTP", (int64)EPfTriggerType::pfenum_HTTP },
				{ "EPfTriggerType::pfenum_Queue", (int64)EPfTriggerType::pfenum_Queue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TriggerType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_HTTP.DisplayName", "HTTP" },
				{ "pfenum_HTTP.Name", "EPfTriggerType::pfenum_HTTP" },
				{ "pfenum_Queue.DisplayName", "Queue" },
				{ "pfenum_Queue.Name", "EPfTriggerType::pfenum_Queue" },
				{ "ToolTip", "TriggerType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPfTriggerType",
				"EPfTriggerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EIdentifiedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EIdentifiedDeviceType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EIdentifiedDeviceType>()
	{
		return EIdentifiedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIdentifiedDeviceType(EIdentifiedDeviceType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EIdentifiedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType_Hash() { return 3782354984U; }
	UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIdentifiedDeviceType"), 0, Get_Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIdentifiedDeviceType::pfenum_Unknown", (int64)EIdentifiedDeviceType::pfenum_Unknown },
				{ "EIdentifiedDeviceType::pfenum_XboxOne", (int64)EIdentifiedDeviceType::pfenum_XboxOne },
				{ "EIdentifiedDeviceType::pfenum_Scarlett", (int64)EIdentifiedDeviceType::pfenum_Scarlett },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** IdentifiedDeviceType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Scarlett.DisplayName", "Scarlett" },
				{ "pfenum_Scarlett.Name", "EIdentifiedDeviceType::pfenum_Scarlett" },
				{ "pfenum_Unknown.DisplayName", "Unknown" },
				{ "pfenum_Unknown.Name", "EIdentifiedDeviceType::pfenum_Unknown" },
				{ "pfenum_XboxOne.DisplayName", "XboxOne" },
				{ "pfenum_XboxOne.Name", "EIdentifiedDeviceType::pfenum_XboxOne" },
				{ "ToolTip", "IdentifiedDeviceType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EIdentifiedDeviceType",
				"EIdentifiedDeviceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlayerConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPlayerConnectionState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPlayerConnectionState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPlayerConnectionState>()
	{
		return EPlayerConnectionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerConnectionState(EPlayerConnectionState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPlayerConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPlayerConnectionState_Hash() { return 3046686358U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPlayerConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerConnectionState"), 0, Get_Z_Construct_UEnum_PlayFab_EPlayerConnectionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerConnectionState::pfenum_Unassigned", (int64)EPlayerConnectionState::pfenum_Unassigned },
				{ "EPlayerConnectionState::pfenum_Connecting", (int64)EPlayerConnectionState::pfenum_Connecting },
				{ "EPlayerConnectionState::pfenum_Participating", (int64)EPlayerConnectionState::pfenum_Participating },
				{ "EPlayerConnectionState::pfenum_Participated", (int64)EPlayerConnectionState::pfenum_Participated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** PlayerConnectionState */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Connecting.DisplayName", "Connecting" },
				{ "pfenum_Connecting.Name", "EPlayerConnectionState::pfenum_Connecting" },
				{ "pfenum_Participated.DisplayName", "Participated" },
				{ "pfenum_Participated.Name", "EPlayerConnectionState::pfenum_Participated" },
				{ "pfenum_Participating.DisplayName", "Participating" },
				{ "pfenum_Participating.Name", "EPlayerConnectionState::pfenum_Participating" },
				{ "pfenum_Unassigned.DisplayName", "Unassigned" },
				{ "pfenum_Unassigned.Name", "EPlayerConnectionState::pfenum_Unassigned" },
				{ "ToolTip", "PlayerConnectionState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPlayerConnectionState",
				"EPlayerConnectionState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransactionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETransactionStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETransactionStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETransactionStatus>()
	{
		return ETransactionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransactionStatus(ETransactionStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETransactionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETransactionStatus_Hash() { return 1600804460U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETransactionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransactionStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETransactionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransactionStatus::pfenum_CreateCart", (int64)ETransactionStatus::pfenum_CreateCart },
				{ "ETransactionStatus::pfenum_Init", (int64)ETransactionStatus::pfenum_Init },
				{ "ETransactionStatus::pfenum_Approved", (int64)ETransactionStatus::pfenum_Approved },
				{ "ETransactionStatus::pfenum_Succeeded", (int64)ETransactionStatus::pfenum_Succeeded },
				{ "ETransactionStatus::pfenum_FailedByProvider", (int64)ETransactionStatus::pfenum_FailedByProvider },
				{ "ETransactionStatus::pfenum_DisputePending", (int64)ETransactionStatus::pfenum_DisputePending },
				{ "ETransactionStatus::pfenum_RefundPending", (int64)ETransactionStatus::pfenum_RefundPending },
				{ "ETransactionStatus::pfenum_Refunded", (int64)ETransactionStatus::pfenum_Refunded },
				{ "ETransactionStatus::pfenum_RefundFailed", (int64)ETransactionStatus::pfenum_RefundFailed },
				{ "ETransactionStatus::pfenum_ChargedBack", (int64)ETransactionStatus::pfenum_ChargedBack },
				{ "ETransactionStatus::pfenum_FailedByUber", (int64)ETransactionStatus::pfenum_FailedByUber },
				{ "ETransactionStatus::pfenum_FailedByPlayFab", (int64)ETransactionStatus::pfenum_FailedByPlayFab },
				{ "ETransactionStatus::pfenum_Revoked", (int64)ETransactionStatus::pfenum_Revoked },
				{ "ETransactionStatus::pfenum_TradePending", (int64)ETransactionStatus::pfenum_TradePending },
				{ "ETransactionStatus::pfenum_Traded", (int64)ETransactionStatus::pfenum_Traded },
				{ "ETransactionStatus::pfenum_Upgraded", (int64)ETransactionStatus::pfenum_Upgraded },
				{ "ETransactionStatus::pfenum_StackPending", (int64)ETransactionStatus::pfenum_StackPending },
				{ "ETransactionStatus::pfenum_Stacked", (int64)ETransactionStatus::pfenum_Stacked },
				{ "ETransactionStatus::pfenum_Other", (int64)ETransactionStatus::pfenum_Other },
				{ "ETransactionStatus::pfenum_Failed", (int64)ETransactionStatus::pfenum_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TransactionStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Approved.DisplayName", "Approved" },
				{ "pfenum_Approved.Name", "ETransactionStatus::pfenum_Approved" },
				{ "pfenum_ChargedBack.DisplayName", "ChargedBack" },
				{ "pfenum_ChargedBack.Name", "ETransactionStatus::pfenum_ChargedBack" },
				{ "pfenum_CreateCart.DisplayName", "CreateCart" },
				{ "pfenum_CreateCart.Name", "ETransactionStatus::pfenum_CreateCart" },
				{ "pfenum_DisputePending.DisplayName", "DisputePending" },
				{ "pfenum_DisputePending.Name", "ETransactionStatus::pfenum_DisputePending" },
				{ "pfenum_Failed.DisplayName", "Failed" },
				{ "pfenum_Failed.Name", "ETransactionStatus::pfenum_Failed" },
				{ "pfenum_FailedByPlayFab.DisplayName", "FailedByPlayFab" },
				{ "pfenum_FailedByPlayFab.Name", "ETransactionStatus::pfenum_FailedByPlayFab" },
				{ "pfenum_FailedByProvider.DisplayName", "FailedByProvider" },
				{ "pfenum_FailedByProvider.Name", "ETransactionStatus::pfenum_FailedByProvider" },
				{ "pfenum_FailedByUber.DisplayName", "FailedByUber" },
				{ "pfenum_FailedByUber.Name", "ETransactionStatus::pfenum_FailedByUber" },
				{ "pfenum_Init.DisplayName", "Init" },
				{ "pfenum_Init.Name", "ETransactionStatus::pfenum_Init" },
				{ "pfenum_Other.DisplayName", "Other" },
				{ "pfenum_Other.Name", "ETransactionStatus::pfenum_Other" },
				{ "pfenum_Refunded.DisplayName", "Refunded" },
				{ "pfenum_Refunded.Name", "ETransactionStatus::pfenum_Refunded" },
				{ "pfenum_RefundFailed.DisplayName", "RefundFailed" },
				{ "pfenum_RefundFailed.Name", "ETransactionStatus::pfenum_RefundFailed" },
				{ "pfenum_RefundPending.DisplayName", "RefundPending" },
				{ "pfenum_RefundPending.Name", "ETransactionStatus::pfenum_RefundPending" },
				{ "pfenum_Revoked.DisplayName", "Revoked" },
				{ "pfenum_Revoked.Name", "ETransactionStatus::pfenum_Revoked" },
				{ "pfenum_Stacked.DisplayName", "Stacked" },
				{ "pfenum_Stacked.Name", "ETransactionStatus::pfenum_Stacked" },
				{ "pfenum_StackPending.DisplayName", "StackPending" },
				{ "pfenum_StackPending.Name", "ETransactionStatus::pfenum_StackPending" },
				{ "pfenum_Succeeded.DisplayName", "Succeeded" },
				{ "pfenum_Succeeded.Name", "ETransactionStatus::pfenum_Succeeded" },
				{ "pfenum_Traded.DisplayName", "Traded" },
				{ "pfenum_Traded.Name", "ETransactionStatus::pfenum_Traded" },
				{ "pfenum_TradePending.DisplayName", "TradePending" },
				{ "pfenum_TradePending.Name", "ETransactionStatus::pfenum_TradePending" },
				{ "pfenum_Upgraded.DisplayName", "Upgraded" },
				{ "pfenum_Upgraded.Name", "ETransactionStatus::pfenum_Upgraded" },
				{ "ToolTip", "TransactionStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETransactionStatus",
				"ETransactionStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETradeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETradeStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETradeStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETradeStatus>()
	{
		return ETradeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETradeStatus(ETradeStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETradeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETradeStatus_Hash() { return 2929048179U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETradeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETradeStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETradeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETradeStatus::pfenum_Invalid", (int64)ETradeStatus::pfenum_Invalid },
				{ "ETradeStatus::pfenum_Opening", (int64)ETradeStatus::pfenum_Opening },
				{ "ETradeStatus::pfenum_Open", (int64)ETradeStatus::pfenum_Open },
				{ "ETradeStatus::pfenum_Accepting", (int64)ETradeStatus::pfenum_Accepting },
				{ "ETradeStatus::pfenum_Accepted", (int64)ETradeStatus::pfenum_Accepted },
				{ "ETradeStatus::pfenum_Filled", (int64)ETradeStatus::pfenum_Filled },
				{ "ETradeStatus::pfenum_Cancelled", (int64)ETradeStatus::pfenum_Cancelled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TradeStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Accepted.DisplayName", "Accepted" },
				{ "pfenum_Accepted.Name", "ETradeStatus::pfenum_Accepted" },
				{ "pfenum_Accepting.DisplayName", "Accepting" },
				{ "pfenum_Accepting.Name", "ETradeStatus::pfenum_Accepting" },
				{ "pfenum_Cancelled.DisplayName", "Cancelled" },
				{ "pfenum_Cancelled.Name", "ETradeStatus::pfenum_Cancelled" },
				{ "pfenum_Filled.DisplayName", "Filled" },
				{ "pfenum_Filled.Name", "ETradeStatus::pfenum_Filled" },
				{ "pfenum_Invalid.DisplayName", "Invalid" },
				{ "pfenum_Invalid.Name", "ETradeStatus::pfenum_Invalid" },
				{ "pfenum_Open.DisplayName", "Open" },
				{ "pfenum_Open.Name", "ETradeStatus::pfenum_Open" },
				{ "pfenum_Opening.DisplayName", "Opening" },
				{ "pfenum_Opening.Name", "ETradeStatus::pfenum_Opening" },
				{ "ToolTip", "TradeStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETradeStatus",
				"ETradeStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMatchmakeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EMatchmakeStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EMatchmakeStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EMatchmakeStatus>()
	{
		return EMatchmakeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchmakeStatus(EMatchmakeStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EMatchmakeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EMatchmakeStatus_Hash() { return 1335503409U; }
	UEnum* Z_Construct_UEnum_PlayFab_EMatchmakeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchmakeStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EMatchmakeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchmakeStatus::pfenum_Complete", (int64)EMatchmakeStatus::pfenum_Complete },
				{ "EMatchmakeStatus::pfenum_Waiting", (int64)EMatchmakeStatus::pfenum_Waiting },
				{ "EMatchmakeStatus::pfenum_GameNotFound", (int64)EMatchmakeStatus::pfenum_GameNotFound },
				{ "EMatchmakeStatus::pfenum_NoAvailableSlots", (int64)EMatchmakeStatus::pfenum_NoAvailableSlots },
				{ "EMatchmakeStatus::pfenum_SessionClosed", (int64)EMatchmakeStatus::pfenum_SessionClosed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** MatchmakeStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Complete.DisplayName", "Complete" },
				{ "pfenum_Complete.Name", "EMatchmakeStatus::pfenum_Complete" },
				{ "pfenum_GameNotFound.DisplayName", "GameNotFound" },
				{ "pfenum_GameNotFound.Name", "EMatchmakeStatus::pfenum_GameNotFound" },
				{ "pfenum_NoAvailableSlots.DisplayName", "NoAvailableSlots" },
				{ "pfenum_NoAvailableSlots.Name", "EMatchmakeStatus::pfenum_NoAvailableSlots" },
				{ "pfenum_SessionClosed.DisplayName", "SessionClosed" },
				{ "pfenum_SessionClosed.Name", "EMatchmakeStatus::pfenum_SessionClosed" },
				{ "pfenum_Waiting.DisplayName", "Waiting" },
				{ "pfenum_Waiting.Name", "EMatchmakeStatus::pfenum_Waiting" },
				{ "ToolTip", "MatchmakeStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EMatchmakeStatus",
				"EMatchmakeStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameInstanceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EGameInstanceState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EGameInstanceState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EGameInstanceState>()
	{
		return EGameInstanceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameInstanceState(EGameInstanceState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EGameInstanceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EGameInstanceState_Hash() { return 1764446974U; }
	UEnum* Z_Construct_UEnum_PlayFab_EGameInstanceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameInstanceState"), 0, Get_Z_Construct_UEnum_PlayFab_EGameInstanceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameInstanceState::pfenum_Open", (int64)EGameInstanceState::pfenum_Open },
				{ "EGameInstanceState::pfenum_Closed", (int64)EGameInstanceState::pfenum_Closed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** GameInstanceState */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Closed.DisplayName", "Closed" },
				{ "pfenum_Closed.Name", "EGameInstanceState::pfenum_Closed" },
				{ "pfenum_Open.DisplayName", "Open" },
				{ "pfenum_Open.Name", "EGameInstanceState::pfenum_Open" },
				{ "ToolTip", "GameInstanceState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EGameInstanceState",
				"EGameInstanceState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECloudScriptRevisionOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECloudScriptRevisionOption"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECloudScriptRevisionOption>()
	{
		return ECloudScriptRevisionOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECloudScriptRevisionOption(ECloudScriptRevisionOption_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECloudScriptRevisionOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption_Hash() { return 545755720U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECloudScriptRevisionOption"), 0, Get_Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECloudScriptRevisionOption::pfenum_Live", (int64)ECloudScriptRevisionOption::pfenum_Live },
				{ "ECloudScriptRevisionOption::pfenum_Latest", (int64)ECloudScriptRevisionOption::pfenum_Latest },
				{ "ECloudScriptRevisionOption::pfenum_Specific", (int64)ECloudScriptRevisionOption::pfenum_Specific },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** CloudScriptRevisionOption */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Latest.DisplayName", "Latest" },
				{ "pfenum_Latest.Name", "ECloudScriptRevisionOption::pfenum_Latest" },
				{ "pfenum_Live.DisplayName", "Live" },
				{ "pfenum_Live.Name", "ECloudScriptRevisionOption::pfenum_Live" },
				{ "pfenum_Specific.DisplayName", "Specific" },
				{ "pfenum_Specific.Name", "ECloudScriptRevisionOption::pfenum_Specific" },
				{ "ToolTip", "CloudScriptRevisionOption" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECloudScriptRevisionOption",
				"ECloudScriptRevisionOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAdActivity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAdActivity, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAdActivity"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAdActivity>()
	{
		return EAdActivity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdActivity(EAdActivity_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAdActivity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAdActivity_Hash() { return 1131935409U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAdActivity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdActivity"), 0, Get_Z_Construct_UEnum_PlayFab_EAdActivity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdActivity::pfenum_Opened", (int64)EAdActivity::pfenum_Opened },
				{ "EAdActivity::pfenum_Closed", (int64)EAdActivity::pfenum_Closed },
				{ "EAdActivity::pfenum_Start", (int64)EAdActivity::pfenum_Start },
				{ "EAdActivity::pfenum_End", (int64)EAdActivity::pfenum_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AdActivity */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Closed.DisplayName", "Closed" },
				{ "pfenum_Closed.Name", "EAdActivity::pfenum_Closed" },
				{ "pfenum_End.DisplayName", "End" },
				{ "pfenum_End.Name", "EAdActivity::pfenum_End" },
				{ "pfenum_Opened.DisplayName", "Opened" },
				{ "pfenum_Opened.Name", "EAdActivity::pfenum_Opened" },
				{ "pfenum_Start.DisplayName", "Start" },
				{ "pfenum_Start.Name", "EAdActivity::pfenum_Start" },
				{ "ToolTip", "AdActivity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAdActivity",
				"EAdActivity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUserOrigination_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EUserOrigination, Z_Construct_UPackage__Script_PlayFab(), TEXT("EUserOrigination"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EUserOrigination>()
	{
		return EUserOrigination_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserOrigination(EUserOrigination_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EUserOrigination"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EUserOrigination_Hash() { return 1715730949U; }
	UEnum* Z_Construct_UEnum_PlayFab_EUserOrigination()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserOrigination"), 0, Get_Z_Construct_UEnum_PlayFab_EUserOrigination_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserOrigination::pfenum_Organic", (int64)EUserOrigination::pfenum_Organic },
				{ "EUserOrigination::pfenum_Steam", (int64)EUserOrigination::pfenum_Steam },
				{ "EUserOrigination::pfenum_Google", (int64)EUserOrigination::pfenum_Google },
				{ "EUserOrigination::pfenum_Amazon", (int64)EUserOrigination::pfenum_Amazon },
				{ "EUserOrigination::pfenum_Facebook", (int64)EUserOrigination::pfenum_Facebook },
				{ "EUserOrigination::pfenum_Kongregate", (int64)EUserOrigination::pfenum_Kongregate },
				{ "EUserOrigination::pfenum_GamersFirst", (int64)EUserOrigination::pfenum_GamersFirst },
				{ "EUserOrigination::pfenum_Unknown", (int64)EUserOrigination::pfenum_Unknown },
				{ "EUserOrigination::pfenum_IOS", (int64)EUserOrigination::pfenum_IOS },
				{ "EUserOrigination::pfenum_LoadTest", (int64)EUserOrigination::pfenum_LoadTest },
				{ "EUserOrigination::pfenum_Android", (int64)EUserOrigination::pfenum_Android },
				{ "EUserOrigination::pfenum_PSN", (int64)EUserOrigination::pfenum_PSN },
				{ "EUserOrigination::pfenum_GameCenter", (int64)EUserOrigination::pfenum_GameCenter },
				{ "EUserOrigination::pfenum_CustomId", (int64)EUserOrigination::pfenum_CustomId },
				{ "EUserOrigination::pfenum_XboxLive", (int64)EUserOrigination::pfenum_XboxLive },
				{ "EUserOrigination::pfenum_Parse", (int64)EUserOrigination::pfenum_Parse },
				{ "EUserOrigination::pfenum_Twitch", (int64)EUserOrigination::pfenum_Twitch },
				{ "EUserOrigination::pfenum_ServerCustomId", (int64)EUserOrigination::pfenum_ServerCustomId },
				{ "EUserOrigination::pfenum_NintendoSwitchDeviceId", (int64)EUserOrigination::pfenum_NintendoSwitchDeviceId },
				{ "EUserOrigination::pfenum_FacebookInstantGamesId", (int64)EUserOrigination::pfenum_FacebookInstantGamesId },
				{ "EUserOrigination::pfenum_OpenIdConnect", (int64)EUserOrigination::pfenum_OpenIdConnect },
				{ "EUserOrigination::pfenum_Apple", (int64)EUserOrigination::pfenum_Apple },
				{ "EUserOrigination::pfenum_NintendoSwitchAccount", (int64)EUserOrigination::pfenum_NintendoSwitchAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** UserOrigination */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Amazon.DisplayName", "Amazon" },
				{ "pfenum_Amazon.Name", "EUserOrigination::pfenum_Amazon" },
				{ "pfenum_Android.DisplayName", "Android" },
				{ "pfenum_Android.Name", "EUserOrigination::pfenum_Android" },
				{ "pfenum_Apple.DisplayName", "Apple" },
				{ "pfenum_Apple.Name", "EUserOrigination::pfenum_Apple" },
				{ "pfenum_CustomId.DisplayName", "CustomId" },
				{ "pfenum_CustomId.Name", "EUserOrigination::pfenum_CustomId" },
				{ "pfenum_Facebook.DisplayName", "Facebook" },
				{ "pfenum_Facebook.Name", "EUserOrigination::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGamesId.DisplayName", "FacebookInstantGamesId" },
				{ "pfenum_FacebookInstantGamesId.Name", "EUserOrigination::pfenum_FacebookInstantGamesId" },
				{ "pfenum_GameCenter.DisplayName", "GameCenter" },
				{ "pfenum_GameCenter.Name", "EUserOrigination::pfenum_GameCenter" },
				{ "pfenum_GamersFirst.DisplayName", "GamersFirst" },
				{ "pfenum_GamersFirst.Name", "EUserOrigination::pfenum_GamersFirst" },
				{ "pfenum_Google.DisplayName", "Google" },
				{ "pfenum_Google.Name", "EUserOrigination::pfenum_Google" },
				{ "pfenum_IOS.DisplayName", "IOS" },
				{ "pfenum_IOS.Name", "EUserOrigination::pfenum_IOS" },
				{ "pfenum_Kongregate.DisplayName", "Kongregate" },
				{ "pfenum_Kongregate.Name", "EUserOrigination::pfenum_Kongregate" },
				{ "pfenum_LoadTest.DisplayName", "LoadTest" },
				{ "pfenum_LoadTest.Name", "EUserOrigination::pfenum_LoadTest" },
				{ "pfenum_NintendoSwitchAccount.DisplayName", "NintendoSwitchAccount" },
				{ "pfenum_NintendoSwitchAccount.Name", "EUserOrigination::pfenum_NintendoSwitchAccount" },
				{ "pfenum_NintendoSwitchDeviceId.DisplayName", "NintendoSwitchDeviceId" },
				{ "pfenum_NintendoSwitchDeviceId.Name", "EUserOrigination::pfenum_NintendoSwitchDeviceId" },
				{ "pfenum_OpenIdConnect.DisplayName", "OpenIdConnect" },
				{ "pfenum_OpenIdConnect.Name", "EUserOrigination::pfenum_OpenIdConnect" },
				{ "pfenum_Organic.DisplayName", "Organic" },
				{ "pfenum_Organic.Name", "EUserOrigination::pfenum_Organic" },
				{ "pfenum_Parse.DisplayName", "Parse" },
				{ "pfenum_Parse.Name", "EUserOrigination::pfenum_Parse" },
				{ "pfenum_PSN.DisplayName", "PSN" },
				{ "pfenum_PSN.Name", "EUserOrigination::pfenum_PSN" },
				{ "pfenum_ServerCustomId.DisplayName", "ServerCustomId" },
				{ "pfenum_ServerCustomId.Name", "EUserOrigination::pfenum_ServerCustomId" },
				{ "pfenum_Steam.DisplayName", "Steam" },
				{ "pfenum_Steam.Name", "EUserOrigination::pfenum_Steam" },
				{ "pfenum_Twitch.DisplayName", "Twitch" },
				{ "pfenum_Twitch.Name", "EUserOrigination::pfenum_Twitch" },
				{ "pfenum_Unknown.DisplayName", "Unknown" },
				{ "pfenum_Unknown.Name", "EUserOrigination::pfenum_Unknown" },
				{ "pfenum_XboxLive.DisplayName", "XboxLive" },
				{ "pfenum_XboxLive.Name", "EUserOrigination::pfenum_XboxLive" },
				{ "ToolTip", "UserOrigination" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EUserOrigination",
				"EUserOrigination",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUserDataPermission_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EUserDataPermission, Z_Construct_UPackage__Script_PlayFab(), TEXT("EUserDataPermission"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EUserDataPermission>()
	{
		return EUserDataPermission_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserDataPermission(EUserDataPermission_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EUserDataPermission"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EUserDataPermission_Hash() { return 3476253046U; }
	UEnum* Z_Construct_UEnum_PlayFab_EUserDataPermission()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserDataPermission"), 0, Get_Z_Construct_UEnum_PlayFab_EUserDataPermission_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserDataPermission::pfenum_Private", (int64)EUserDataPermission::pfenum_Private },
				{ "EUserDataPermission::pfenum_Public", (int64)EUserDataPermission::pfenum_Public },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** UserDataPermission */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Private.DisplayName", "Private" },
				{ "pfenum_Private.Name", "EUserDataPermission::pfenum_Private" },
				{ "pfenum_Public.DisplayName", "Public" },
				{ "pfenum_Public.Name", "EUserDataPermission::pfenum_Public" },
				{ "ToolTip", "UserDataPermission" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EUserDataPermission",
				"EUserDataPermission",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETitleActivationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETitleActivationStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETitleActivationStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETitleActivationStatus>()
	{
		return ETitleActivationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETitleActivationStatus(ETitleActivationStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETitleActivationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETitleActivationStatus_Hash() { return 2638446577U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETitleActivationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETitleActivationStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETitleActivationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETitleActivationStatus::pfenum_None", (int64)ETitleActivationStatus::pfenum_None },
				{ "ETitleActivationStatus::pfenum_ActivatedTitleKey", (int64)ETitleActivationStatus::pfenum_ActivatedTitleKey },
				{ "ETitleActivationStatus::pfenum_PendingSteam", (int64)ETitleActivationStatus::pfenum_PendingSteam },
				{ "ETitleActivationStatus::pfenum_ActivatedSteam", (int64)ETitleActivationStatus::pfenum_ActivatedSteam },
				{ "ETitleActivationStatus::pfenum_RevokedSteam", (int64)ETitleActivationStatus::pfenum_RevokedSteam },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TitleActivationStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_ActivatedSteam.DisplayName", "ActivatedSteam" },
				{ "pfenum_ActivatedSteam.Name", "ETitleActivationStatus::pfenum_ActivatedSteam" },
				{ "pfenum_ActivatedTitleKey.DisplayName", "ActivatedTitleKey" },
				{ "pfenum_ActivatedTitleKey.Name", "ETitleActivationStatus::pfenum_ActivatedTitleKey" },
				{ "pfenum_None.DisplayName", "None" },
				{ "pfenum_None.Name", "ETitleActivationStatus::pfenum_None" },
				{ "pfenum_PendingSteam.DisplayName", "PendingSteam" },
				{ "pfenum_PendingSteam.Name", "ETitleActivationStatus::pfenum_PendingSteam" },
				{ "pfenum_RevokedSteam.DisplayName", "RevokedSteam" },
				{ "pfenum_RevokedSteam.Name", "ETitleActivationStatus::pfenum_RevokedSteam" },
				{ "ToolTip", "TitleActivationStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETitleActivationStatus",
				"ETitleActivationStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETaskInstanceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETaskInstanceStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETaskInstanceStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETaskInstanceStatus>()
	{
		return ETaskInstanceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskInstanceStatus(ETaskInstanceStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETaskInstanceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETaskInstanceStatus_Hash() { return 4220468455U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETaskInstanceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskInstanceStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETaskInstanceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskInstanceStatus::pfenum_Succeeded", (int64)ETaskInstanceStatus::pfenum_Succeeded },
				{ "ETaskInstanceStatus::pfenum_Starting", (int64)ETaskInstanceStatus::pfenum_Starting },
				{ "ETaskInstanceStatus::pfenum_InProgress", (int64)ETaskInstanceStatus::pfenum_InProgress },
				{ "ETaskInstanceStatus::pfenum_Failed", (int64)ETaskInstanceStatus::pfenum_Failed },
				{ "ETaskInstanceStatus::pfenum_Aborted", (int64)ETaskInstanceStatus::pfenum_Aborted },
				{ "ETaskInstanceStatus::pfenum_Stalled", (int64)ETaskInstanceStatus::pfenum_Stalled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** TaskInstanceStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Aborted.DisplayName", "Aborted" },
				{ "pfenum_Aborted.Name", "ETaskInstanceStatus::pfenum_Aborted" },
				{ "pfenum_Failed.DisplayName", "Failed" },
				{ "pfenum_Failed.Name", "ETaskInstanceStatus::pfenum_Failed" },
				{ "pfenum_InProgress.DisplayName", "InProgress" },
				{ "pfenum_InProgress.Name", "ETaskInstanceStatus::pfenum_InProgress" },
				{ "pfenum_Stalled.DisplayName", "Stalled" },
				{ "pfenum_Stalled.Name", "ETaskInstanceStatus::pfenum_Stalled" },
				{ "pfenum_Starting.DisplayName", "Starting" },
				{ "pfenum_Starting.Name", "ETaskInstanceStatus::pfenum_Starting" },
				{ "pfenum_Succeeded.DisplayName", "Succeeded" },
				{ "pfenum_Succeeded.Name", "ETaskInstanceStatus::pfenum_Succeeded" },
				{ "ToolTip", "TaskInstanceStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETaskInstanceStatus",
				"ETaskInstanceStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESubscriptionProviderStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESubscriptionProviderStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESubscriptionProviderStatus>()
	{
		return ESubscriptionProviderStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubscriptionProviderStatus(ESubscriptionProviderStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESubscriptionProviderStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus_Hash() { return 3500436451U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubscriptionProviderStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubscriptionProviderStatus::pfenum_NoError", (int64)ESubscriptionProviderStatus::pfenum_NoError },
				{ "ESubscriptionProviderStatus::pfenum_Cancelled", (int64)ESubscriptionProviderStatus::pfenum_Cancelled },
				{ "ESubscriptionProviderStatus::pfenum_UnknownError", (int64)ESubscriptionProviderStatus::pfenum_UnknownError },
				{ "ESubscriptionProviderStatus::pfenum_BillingError", (int64)ESubscriptionProviderStatus::pfenum_BillingError },
				{ "ESubscriptionProviderStatus::pfenum_ProductUnavailable", (int64)ESubscriptionProviderStatus::pfenum_ProductUnavailable },
				{ "ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange", (int64)ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange },
				{ "ESubscriptionProviderStatus::pfenum_FreeTrial", (int64)ESubscriptionProviderStatus::pfenum_FreeTrial },
				{ "ESubscriptionProviderStatus::pfenum_PaymentPending", (int64)ESubscriptionProviderStatus::pfenum_PaymentPending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SubscriptionProviderStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_BillingError.DisplayName", "BillingError" },
				{ "pfenum_BillingError.Name", "ESubscriptionProviderStatus::pfenum_BillingError" },
				{ "pfenum_Cancelled.DisplayName", "Cancelled" },
				{ "pfenum_Cancelled.Name", "ESubscriptionProviderStatus::pfenum_Cancelled" },
				{ "pfenum_CustomerDidNotAcceptPriceChange.DisplayName", "CustomerDidNotAcceptPriceChange" },
				{ "pfenum_CustomerDidNotAcceptPriceChange.Name", "ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange" },
				{ "pfenum_FreeTrial.DisplayName", "FreeTrial" },
				{ "pfenum_FreeTrial.Name", "ESubscriptionProviderStatus::pfenum_FreeTrial" },
				{ "pfenum_NoError.DisplayName", "NoError" },
				{ "pfenum_NoError.Name", "ESubscriptionProviderStatus::pfenum_NoError" },
				{ "pfenum_PaymentPending.DisplayName", "PaymentPending" },
				{ "pfenum_PaymentPending.Name", "ESubscriptionProviderStatus::pfenum_PaymentPending" },
				{ "pfenum_ProductUnavailable.DisplayName", "ProductUnavailable" },
				{ "pfenum_ProductUnavailable.Name", "ESubscriptionProviderStatus::pfenum_ProductUnavailable" },
				{ "pfenum_UnknownError.DisplayName", "UnknownError" },
				{ "pfenum_UnknownError.Name", "ESubscriptionProviderStatus::pfenum_UnknownError" },
				{ "ToolTip", "SubscriptionProviderStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESubscriptionProviderStatus",
				"ESubscriptionProviderStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatisticVersionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticVersionStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticVersionStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionStatus>()
	{
		return EStatisticVersionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticVersionStatus(EStatisticVersionStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticVersionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticVersionStatus_Hash() { return 698802545U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticVersionStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticVersionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticVersionStatus::pfenum_Active", (int64)EStatisticVersionStatus::pfenum_Active },
				{ "EStatisticVersionStatus::pfenum_SnapshotPending", (int64)EStatisticVersionStatus::pfenum_SnapshotPending },
				{ "EStatisticVersionStatus::pfenum_Snapshot", (int64)EStatisticVersionStatus::pfenum_Snapshot },
				{ "EStatisticVersionStatus::pfenum_ArchivalPending", (int64)EStatisticVersionStatus::pfenum_ArchivalPending },
				{ "EStatisticVersionStatus::pfenum_Archived", (int64)EStatisticVersionStatus::pfenum_Archived },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** StatisticVersionStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Active.DisplayName", "Active" },
				{ "pfenum_Active.Name", "EStatisticVersionStatus::pfenum_Active" },
				{ "pfenum_ArchivalPending.DisplayName", "ArchivalPending" },
				{ "pfenum_ArchivalPending.Name", "EStatisticVersionStatus::pfenum_ArchivalPending" },
				{ "pfenum_Archived.DisplayName", "Archived" },
				{ "pfenum_Archived.Name", "EStatisticVersionStatus::pfenum_Archived" },
				{ "pfenum_Snapshot.DisplayName", "Snapshot" },
				{ "pfenum_Snapshot.Name", "EStatisticVersionStatus::pfenum_Snapshot" },
				{ "pfenum_SnapshotPending.DisplayName", "SnapshotPending" },
				{ "pfenum_SnapshotPending.Name", "EStatisticVersionStatus::pfenum_SnapshotPending" },
				{ "ToolTip", "StatisticVersionStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticVersionStatus",
				"EStatisticVersionStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatisticVersionArchivalStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticVersionArchivalStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticVersionArchivalStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionArchivalStatus>()
	{
		return EStatisticVersionArchivalStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticVersionArchivalStatus(EStatisticVersionArchivalStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticVersionArchivalStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticVersionArchivalStatus_Hash() { return 1317443266U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionArchivalStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticVersionArchivalStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticVersionArchivalStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticVersionArchivalStatus::pfenum_NotScheduled", (int64)EStatisticVersionArchivalStatus::pfenum_NotScheduled },
				{ "EStatisticVersionArchivalStatus::pfenum_Scheduled", (int64)EStatisticVersionArchivalStatus::pfenum_Scheduled },
				{ "EStatisticVersionArchivalStatus::pfenum_Queued", (int64)EStatisticVersionArchivalStatus::pfenum_Queued },
				{ "EStatisticVersionArchivalStatus::pfenum_InProgress", (int64)EStatisticVersionArchivalStatus::pfenum_InProgress },
				{ "EStatisticVersionArchivalStatus::pfenum_Complete", (int64)EStatisticVersionArchivalStatus::pfenum_Complete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** StatisticVersionArchivalStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Complete.DisplayName", "Complete" },
				{ "pfenum_Complete.Name", "EStatisticVersionArchivalStatus::pfenum_Complete" },
				{ "pfenum_InProgress.DisplayName", "InProgress" },
				{ "pfenum_InProgress.Name", "EStatisticVersionArchivalStatus::pfenum_InProgress" },
				{ "pfenum_NotScheduled.DisplayName", "NotScheduled" },
				{ "pfenum_NotScheduled.Name", "EStatisticVersionArchivalStatus::pfenum_NotScheduled" },
				{ "pfenum_Queued.DisplayName", "Queued" },
				{ "pfenum_Queued.Name", "EStatisticVersionArchivalStatus::pfenum_Queued" },
				{ "pfenum_Scheduled.DisplayName", "Scheduled" },
				{ "pfenum_Scheduled.Name", "EStatisticVersionArchivalStatus::pfenum_Scheduled" },
				{ "ToolTip", "StatisticVersionArchivalStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticVersionArchivalStatus",
				"EStatisticVersionArchivalStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatisticResetIntervalOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticResetIntervalOption"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticResetIntervalOption>()
	{
		return EStatisticResetIntervalOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticResetIntervalOption(EStatisticResetIntervalOption_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticResetIntervalOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption_Hash() { return 930311257U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticResetIntervalOption"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticResetIntervalOption::pfenum_Never", (int64)EStatisticResetIntervalOption::pfenum_Never },
				{ "EStatisticResetIntervalOption::pfenum_Hour", (int64)EStatisticResetIntervalOption::pfenum_Hour },
				{ "EStatisticResetIntervalOption::pfenum_Day", (int64)EStatisticResetIntervalOption::pfenum_Day },
				{ "EStatisticResetIntervalOption::pfenum_Week", (int64)EStatisticResetIntervalOption::pfenum_Week },
				{ "EStatisticResetIntervalOption::pfenum_Month", (int64)EStatisticResetIntervalOption::pfenum_Month },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** StatisticResetIntervalOption */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Day.DisplayName", "Day" },
				{ "pfenum_Day.Name", "EStatisticResetIntervalOption::pfenum_Day" },
				{ "pfenum_Hour.DisplayName", "Hour" },
				{ "pfenum_Hour.Name", "EStatisticResetIntervalOption::pfenum_Hour" },
				{ "pfenum_Month.DisplayName", "Month" },
				{ "pfenum_Month.Name", "EStatisticResetIntervalOption::pfenum_Month" },
				{ "pfenum_Never.DisplayName", "Never" },
				{ "pfenum_Never.Name", "EStatisticResetIntervalOption::pfenum_Never" },
				{ "pfenum_Week.DisplayName", "Week" },
				{ "pfenum_Week.Name", "EStatisticResetIntervalOption::pfenum_Week" },
				{ "ToolTip", "StatisticResetIntervalOption" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticResetIntervalOption",
				"EStatisticResetIntervalOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatisticAggregationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticAggregationMethod"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticAggregationMethod>()
	{
		return EStatisticAggregationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticAggregationMethod(EStatisticAggregationMethod_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticAggregationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod_Hash() { return 1746818216U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticAggregationMethod"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticAggregationMethod::pfenum_Last", (int64)EStatisticAggregationMethod::pfenum_Last },
				{ "EStatisticAggregationMethod::pfenum_Min", (int64)EStatisticAggregationMethod::pfenum_Min },
				{ "EStatisticAggregationMethod::pfenum_Max", (int64)EStatisticAggregationMethod::pfenum_Max },
				{ "EStatisticAggregationMethod::pfenum_Sum", (int64)EStatisticAggregationMethod::pfenum_Sum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** StatisticAggregationMethod */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Last.DisplayName", "Last" },
				{ "pfenum_Last.Name", "EStatisticAggregationMethod::pfenum_Last" },
				{ "pfenum_Max.DisplayName", "Max" },
				{ "pfenum_Max.Name", "EStatisticAggregationMethod::pfenum_Max" },
				{ "pfenum_Min.DisplayName", "Min" },
				{ "pfenum_Min.Name", "EStatisticAggregationMethod::pfenum_Min" },
				{ "pfenum_Sum.DisplayName", "Sum" },
				{ "pfenum_Sum.Name", "EStatisticAggregationMethod::pfenum_Sum" },
				{ "ToolTip", "StatisticAggregationMethod" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticAggregationMethod",
				"EStatisticAggregationMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPfSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPfSourceType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPfSourceType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPfSourceType>()
	{
		return EPfSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPfSourceType(EPfSourceType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPfSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPfSourceType_Hash() { return 3512824716U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPfSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPfSourceType"), 0, Get_Z_Construct_UEnum_PlayFab_EPfSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPfSourceType::pfenum_Admin", (int64)EPfSourceType::pfenum_Admin },
				{ "EPfSourceType::pfenum_BackEnd", (int64)EPfSourceType::pfenum_BackEnd },
				{ "EPfSourceType::pfenum_GameClient", (int64)EPfSourceType::pfenum_GameClient },
				{ "EPfSourceType::pfenum_GameServer", (int64)EPfSourceType::pfenum_GameServer },
				{ "EPfSourceType::pfenum_Partner", (int64)EPfSourceType::pfenum_Partner },
				{ "EPfSourceType::pfenum_Custom", (int64)EPfSourceType::pfenum_Custom },
				{ "EPfSourceType::pfenum_API", (int64)EPfSourceType::pfenum_API },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SourceType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Admin.DisplayName", "Admin" },
				{ "pfenum_Admin.Name", "EPfSourceType::pfenum_Admin" },
				{ "pfenum_API.DisplayName", "API" },
				{ "pfenum_API.Name", "EPfSourceType::pfenum_API" },
				{ "pfenum_BackEnd.DisplayName", "BackEnd" },
				{ "pfenum_BackEnd.Name", "EPfSourceType::pfenum_BackEnd" },
				{ "pfenum_Custom.DisplayName", "Custom" },
				{ "pfenum_Custom.Name", "EPfSourceType::pfenum_Custom" },
				{ "pfenum_GameClient.DisplayName", "GameClient" },
				{ "pfenum_GameClient.Name", "EPfSourceType::pfenum_GameClient" },
				{ "pfenum_GameServer.DisplayName", "GameServer" },
				{ "pfenum_GameServer.Name", "EPfSourceType::pfenum_GameServer" },
				{ "pfenum_Partner.DisplayName", "Partner" },
				{ "pfenum_Partner.Name", "EPfSourceType::pfenum_Partner" },
				{ "ToolTip", "SourceType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPfSourceType",
				"EPfSourceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegmentPushNotificationDevicePlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentPushNotificationDevicePlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentPushNotificationDevicePlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentPushNotificationDevicePlatform>()
	{
		return ESegmentPushNotificationDevicePlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentPushNotificationDevicePlatform(ESegmentPushNotificationDevicePlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentPushNotificationDevicePlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentPushNotificationDevicePlatform_Hash() { return 1527255151U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentPushNotificationDevicePlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentPushNotificationDevicePlatform"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentPushNotificationDevicePlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentPushNotificationDevicePlatform::pfenum_ApplePushNotificationService", (int64)ESegmentPushNotificationDevicePlatform::pfenum_ApplePushNotificationService },
				{ "ESegmentPushNotificationDevicePlatform::pfenum_GoogleCloudMessaging", (int64)ESegmentPushNotificationDevicePlatform::pfenum_GoogleCloudMessaging },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SegmentPushNotificationDevicePlatform */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_ApplePushNotificationService.DisplayName", "ApplePushNotificationService" },
				{ "pfenum_ApplePushNotificationService.Name", "ESegmentPushNotificationDevicePlatform::pfenum_ApplePushNotificationService" },
				{ "pfenum_GoogleCloudMessaging.DisplayName", "GoogleCloudMessaging" },
				{ "pfenum_GoogleCloudMessaging.Name", "ESegmentPushNotificationDevicePlatform::pfenum_GoogleCloudMessaging" },
				{ "ToolTip", "SegmentPushNotificationDevicePlatform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentPushNotificationDevicePlatform",
				"ESegmentPushNotificationDevicePlatform",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegmentLoginIdentityProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentLoginIdentityProvider"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentLoginIdentityProvider>()
	{
		return ESegmentLoginIdentityProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentLoginIdentityProvider(ESegmentLoginIdentityProvider_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentLoginIdentityProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider_Hash() { return 2404536684U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentLoginIdentityProvider"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentLoginIdentityProvider::pfenum_Unknown", (int64)ESegmentLoginIdentityProvider::pfenum_Unknown },
				{ "ESegmentLoginIdentityProvider::pfenum_PlayFab", (int64)ESegmentLoginIdentityProvider::pfenum_PlayFab },
				{ "ESegmentLoginIdentityProvider::pfenum_Custom", (int64)ESegmentLoginIdentityProvider::pfenum_Custom },
				{ "ESegmentLoginIdentityProvider::pfenum_GameCenter", (int64)ESegmentLoginIdentityProvider::pfenum_GameCenter },
				{ "ESegmentLoginIdentityProvider::pfenum_GooglePlay", (int64)ESegmentLoginIdentityProvider::pfenum_GooglePlay },
				{ "ESegmentLoginIdentityProvider::pfenum_Steam", (int64)ESegmentLoginIdentityProvider::pfenum_Steam },
				{ "ESegmentLoginIdentityProvider::pfenum_XBoxLive", (int64)ESegmentLoginIdentityProvider::pfenum_XBoxLive },
				{ "ESegmentLoginIdentityProvider::pfenum_PSN", (int64)ESegmentLoginIdentityProvider::pfenum_PSN },
				{ "ESegmentLoginIdentityProvider::pfenum_Kongregate", (int64)ESegmentLoginIdentityProvider::pfenum_Kongregate },
				{ "ESegmentLoginIdentityProvider::pfenum_Facebook", (int64)ESegmentLoginIdentityProvider::pfenum_Facebook },
				{ "ESegmentLoginIdentityProvider::pfenum_IOSDevice", (int64)ESegmentLoginIdentityProvider::pfenum_IOSDevice },
				{ "ESegmentLoginIdentityProvider::pfenum_AndroidDevice", (int64)ESegmentLoginIdentityProvider::pfenum_AndroidDevice },
				{ "ESegmentLoginIdentityProvider::pfenum_Twitch", (int64)ESegmentLoginIdentityProvider::pfenum_Twitch },
				{ "ESegmentLoginIdentityProvider::pfenum_WindowsHello", (int64)ESegmentLoginIdentityProvider::pfenum_WindowsHello },
				{ "ESegmentLoginIdentityProvider::pfenum_GameServer", (int64)ESegmentLoginIdentityProvider::pfenum_GameServer },
				{ "ESegmentLoginIdentityProvider::pfenum_CustomServer", (int64)ESegmentLoginIdentityProvider::pfenum_CustomServer },
				{ "ESegmentLoginIdentityProvider::pfenum_NintendoSwitch", (int64)ESegmentLoginIdentityProvider::pfenum_NintendoSwitch },
				{ "ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames", (int64)ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames },
				{ "ESegmentLoginIdentityProvider::pfenum_OpenIdConnect", (int64)ESegmentLoginIdentityProvider::pfenum_OpenIdConnect },
				{ "ESegmentLoginIdentityProvider::pfenum_Apple", (int64)ESegmentLoginIdentityProvider::pfenum_Apple },
				{ "ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount", (int64)ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SegmentLoginIdentityProvider */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AndroidDevice.DisplayName", "AndroidDevice" },
				{ "pfenum_AndroidDevice.Name", "ESegmentLoginIdentityProvider::pfenum_AndroidDevice" },
				{ "pfenum_Apple.DisplayName", "Apple" },
				{ "pfenum_Apple.Name", "ESegmentLoginIdentityProvider::pfenum_Apple" },
				{ "pfenum_Custom.DisplayName", "Custom" },
				{ "pfenum_Custom.Name", "ESegmentLoginIdentityProvider::pfenum_Custom" },
				{ "pfenum_CustomServer.DisplayName", "CustomServer" },
				{ "pfenum_CustomServer.Name", "ESegmentLoginIdentityProvider::pfenum_CustomServer" },
				{ "pfenum_Facebook.DisplayName", "Facebook" },
				{ "pfenum_Facebook.Name", "ESegmentLoginIdentityProvider::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGames.DisplayName", "FacebookInstantGames" },
				{ "pfenum_FacebookInstantGames.Name", "ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames" },
				{ "pfenum_GameCenter.DisplayName", "GameCenter" },
				{ "pfenum_GameCenter.Name", "ESegmentLoginIdentityProvider::pfenum_GameCenter" },
				{ "pfenum_GameServer.DisplayName", "GameServer" },
				{ "pfenum_GameServer.Name", "ESegmentLoginIdentityProvider::pfenum_GameServer" },
				{ "pfenum_GooglePlay.DisplayName", "GooglePlay" },
				{ "pfenum_GooglePlay.Name", "ESegmentLoginIdentityProvider::pfenum_GooglePlay" },
				{ "pfenum_IOSDevice.DisplayName", "IOSDevice" },
				{ "pfenum_IOSDevice.Name", "ESegmentLoginIdentityProvider::pfenum_IOSDevice" },
				{ "pfenum_Kongregate.DisplayName", "Kongregate" },
				{ "pfenum_Kongregate.Name", "ESegmentLoginIdentityProvider::pfenum_Kongregate" },
				{ "pfenum_NintendoSwitch.DisplayName", "NintendoSwitch" },
				{ "pfenum_NintendoSwitch.Name", "ESegmentLoginIdentityProvider::pfenum_NintendoSwitch" },
				{ "pfenum_NintendoSwitchAccount.DisplayName", "NintendoSwitchAccount" },
				{ "pfenum_NintendoSwitchAccount.Name", "ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount" },
				{ "pfenum_OpenIdConnect.DisplayName", "OpenIdConnect" },
				{ "pfenum_OpenIdConnect.Name", "ESegmentLoginIdentityProvider::pfenum_OpenIdConnect" },
				{ "pfenum_PlayFab.DisplayName", "PlayFab" },
				{ "pfenum_PlayFab.Name", "ESegmentLoginIdentityProvider::pfenum_PlayFab" },
				{ "pfenum_PSN.DisplayName", "PSN" },
				{ "pfenum_PSN.Name", "ESegmentLoginIdentityProvider::pfenum_PSN" },
				{ "pfenum_Steam.DisplayName", "Steam" },
				{ "pfenum_Steam.Name", "ESegmentLoginIdentityProvider::pfenum_Steam" },
				{ "pfenum_Twitch.DisplayName", "Twitch" },
				{ "pfenum_Twitch.Name", "ESegmentLoginIdentityProvider::pfenum_Twitch" },
				{ "pfenum_Unknown.DisplayName", "Unknown" },
				{ "pfenum_Unknown.Name", "ESegmentLoginIdentityProvider::pfenum_Unknown" },
				{ "pfenum_WindowsHello.DisplayName", "WindowsHello" },
				{ "pfenum_WindowsHello.Name", "ESegmentLoginIdentityProvider::pfenum_WindowsHello" },
				{ "pfenum_XBoxLive.DisplayName", "XBoxLive" },
				{ "pfenum_XBoxLive.Name", "ESegmentLoginIdentityProvider::pfenum_XBoxLive" },
				{ "ToolTip", "SegmentLoginIdentityProvider" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentLoginIdentityProvider",
				"ESegmentLoginIdentityProvider",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegmentFilterComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentFilterComparison, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentFilterComparison"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentFilterComparison>()
	{
		return ESegmentFilterComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentFilterComparison(ESegmentFilterComparison_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentFilterComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentFilterComparison_Hash() { return 201300728U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentFilterComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentFilterComparison"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentFilterComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentFilterComparison::pfenum_GreaterThan", (int64)ESegmentFilterComparison::pfenum_GreaterThan },
				{ "ESegmentFilterComparison::pfenum_LessThan", (int64)ESegmentFilterComparison::pfenum_LessThan },
				{ "ESegmentFilterComparison::pfenum_EqualTo", (int64)ESegmentFilterComparison::pfenum_EqualTo },
				{ "ESegmentFilterComparison::pfenum_NotEqualTo", (int64)ESegmentFilterComparison::pfenum_NotEqualTo },
				{ "ESegmentFilterComparison::pfenum_GreaterThanOrEqual", (int64)ESegmentFilterComparison::pfenum_GreaterThanOrEqual },
				{ "ESegmentFilterComparison::pfenum_LessThanOrEqual", (int64)ESegmentFilterComparison::pfenum_LessThanOrEqual },
				{ "ESegmentFilterComparison::pfenum_Exists", (int64)ESegmentFilterComparison::pfenum_Exists },
				{ "ESegmentFilterComparison::pfenum_Contains", (int64)ESegmentFilterComparison::pfenum_Contains },
				{ "ESegmentFilterComparison::pfenum_NotContains", (int64)ESegmentFilterComparison::pfenum_NotContains },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SegmentFilterComparison */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Contains.DisplayName", "Contains" },
				{ "pfenum_Contains.Name", "ESegmentFilterComparison::pfenum_Contains" },
				{ "pfenum_EqualTo.DisplayName", "EqualTo" },
				{ "pfenum_EqualTo.Name", "ESegmentFilterComparison::pfenum_EqualTo" },
				{ "pfenum_Exists.DisplayName", "Exists" },
				{ "pfenum_Exists.Name", "ESegmentFilterComparison::pfenum_Exists" },
				{ "pfenum_GreaterThan.DisplayName", "GreaterThan" },
				{ "pfenum_GreaterThan.Name", "ESegmentFilterComparison::pfenum_GreaterThan" },
				{ "pfenum_GreaterThanOrEqual.DisplayName", "GreaterThanOrEqual" },
				{ "pfenum_GreaterThanOrEqual.Name", "ESegmentFilterComparison::pfenum_GreaterThanOrEqual" },
				{ "pfenum_LessThan.DisplayName", "LessThan" },
				{ "pfenum_LessThan.Name", "ESegmentFilterComparison::pfenum_LessThan" },
				{ "pfenum_LessThanOrEqual.DisplayName", "LessThanOrEqual" },
				{ "pfenum_LessThanOrEqual.Name", "ESegmentFilterComparison::pfenum_LessThanOrEqual" },
				{ "pfenum_NotContains.DisplayName", "NotContains" },
				{ "pfenum_NotContains.Name", "ESegmentFilterComparison::pfenum_NotContains" },
				{ "pfenum_NotEqualTo.DisplayName", "NotEqualTo" },
				{ "pfenum_NotEqualTo.Name", "ESegmentFilterComparison::pfenum_NotEqualTo" },
				{ "ToolTip", "SegmentFilterComparison" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentFilterComparison",
				"ESegmentFilterComparison",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegmentCurrency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentCurrency, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentCurrency"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentCurrency>()
	{
		return ESegmentCurrency_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentCurrency(ESegmentCurrency_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentCurrency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentCurrency_Hash() { return 2019679001U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentCurrency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentCurrency"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentCurrency_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentCurrency::pfenum_AED", (int64)ESegmentCurrency::pfenum_AED },
				{ "ESegmentCurrency::pfenum_AFN", (int64)ESegmentCurrency::pfenum_AFN },
				{ "ESegmentCurrency::pfenum_ALL", (int64)ESegmentCurrency::pfenum_ALL },
				{ "ESegmentCurrency::pfenum_AMD", (int64)ESegmentCurrency::pfenum_AMD },
				{ "ESegmentCurrency::pfenum_ANG", (int64)ESegmentCurrency::pfenum_ANG },
				{ "ESegmentCurrency::pfenum_AOA", (int64)ESegmentCurrency::pfenum_AOA },
				{ "ESegmentCurrency::pfenum_ARS", (int64)ESegmentCurrency::pfenum_ARS },
				{ "ESegmentCurrency::pfenum_AUD", (int64)ESegmentCurrency::pfenum_AUD },
				{ "ESegmentCurrency::pfenum_AWG", (int64)ESegmentCurrency::pfenum_AWG },
				{ "ESegmentCurrency::pfenum_AZN", (int64)ESegmentCurrency::pfenum_AZN },
				{ "ESegmentCurrency::pfenum_BAM", (int64)ESegmentCurrency::pfenum_BAM },
				{ "ESegmentCurrency::pfenum_BBD", (int64)ESegmentCurrency::pfenum_BBD },
				{ "ESegmentCurrency::pfenum_BDT", (int64)ESegmentCurrency::pfenum_BDT },
				{ "ESegmentCurrency::pfenum_BGN", (int64)ESegmentCurrency::pfenum_BGN },
				{ "ESegmentCurrency::pfenum_BHD", (int64)ESegmentCurrency::pfenum_BHD },
				{ "ESegmentCurrency::pfenum_BIF", (int64)ESegmentCurrency::pfenum_BIF },
				{ "ESegmentCurrency::pfenum_BMD", (int64)ESegmentCurrency::pfenum_BMD },
				{ "ESegmentCurrency::pfenum_BND", (int64)ESegmentCurrency::pfenum_BND },
				{ "ESegmentCurrency::pfenum_BOB", (int64)ESegmentCurrency::pfenum_BOB },
				{ "ESegmentCurrency::pfenum_BRL", (int64)ESegmentCurrency::pfenum_BRL },
				{ "ESegmentCurrency::pfenum_BSD", (int64)ESegmentCurrency::pfenum_BSD },
				{ "ESegmentCurrency::pfenum_BTN", (int64)ESegmentCurrency::pfenum_BTN },
				{ "ESegmentCurrency::pfenum_BWP", (int64)ESegmentCurrency::pfenum_BWP },
				{ "ESegmentCurrency::pfenum_BYR", (int64)ESegmentCurrency::pfenum_BYR },
				{ "ESegmentCurrency::pfenum_BZD", (int64)ESegmentCurrency::pfenum_BZD },
				{ "ESegmentCurrency::pfenum_CAD", (int64)ESegmentCurrency::pfenum_CAD },
				{ "ESegmentCurrency::pfenum_CDF", (int64)ESegmentCurrency::pfenum_CDF },
				{ "ESegmentCurrency::pfenum_CHF", (int64)ESegmentCurrency::pfenum_CHF },
				{ "ESegmentCurrency::pfenum_CLP", (int64)ESegmentCurrency::pfenum_CLP },
				{ "ESegmentCurrency::pfenum_CNY", (int64)ESegmentCurrency::pfenum_CNY },
				{ "ESegmentCurrency::pfenum_COP", (int64)ESegmentCurrency::pfenum_COP },
				{ "ESegmentCurrency::pfenum_CRC", (int64)ESegmentCurrency::pfenum_CRC },
				{ "ESegmentCurrency::pfenum_CUC", (int64)ESegmentCurrency::pfenum_CUC },
				{ "ESegmentCurrency::pfenum_CUP", (int64)ESegmentCurrency::pfenum_CUP },
				{ "ESegmentCurrency::pfenum_CVE", (int64)ESegmentCurrency::pfenum_CVE },
				{ "ESegmentCurrency::pfenum_CZK", (int64)ESegmentCurrency::pfenum_CZK },
				{ "ESegmentCurrency::pfenum_DJF", (int64)ESegmentCurrency::pfenum_DJF },
				{ "ESegmentCurrency::pfenum_DKK", (int64)ESegmentCurrency::pfenum_DKK },
				{ "ESegmentCurrency::pfenum_DOP", (int64)ESegmentCurrency::pfenum_DOP },
				{ "ESegmentCurrency::pfenum_DZD", (int64)ESegmentCurrency::pfenum_DZD },
				{ "ESegmentCurrency::pfenum_EGP", (int64)ESegmentCurrency::pfenum_EGP },
				{ "ESegmentCurrency::pfenum_ERN", (int64)ESegmentCurrency::pfenum_ERN },
				{ "ESegmentCurrency::pfenum_ETB", (int64)ESegmentCurrency::pfenum_ETB },
				{ "ESegmentCurrency::pfenum_EUR", (int64)ESegmentCurrency::pfenum_EUR },
				{ "ESegmentCurrency::pfenum_FJD", (int64)ESegmentCurrency::pfenum_FJD },
				{ "ESegmentCurrency::pfenum_FKP", (int64)ESegmentCurrency::pfenum_FKP },
				{ "ESegmentCurrency::pfenum_GBP", (int64)ESegmentCurrency::pfenum_GBP },
				{ "ESegmentCurrency::pfenum_GEL", (int64)ESegmentCurrency::pfenum_GEL },
				{ "ESegmentCurrency::pfenum_GGP", (int64)ESegmentCurrency::pfenum_GGP },
				{ "ESegmentCurrency::pfenum_GHS", (int64)ESegmentCurrency::pfenum_GHS },
				{ "ESegmentCurrency::pfenum_GIP", (int64)ESegmentCurrency::pfenum_GIP },
				{ "ESegmentCurrency::pfenum_GMD", (int64)ESegmentCurrency::pfenum_GMD },
				{ "ESegmentCurrency::pfenum_GNF", (int64)ESegmentCurrency::pfenum_GNF },
				{ "ESegmentCurrency::pfenum_GTQ", (int64)ESegmentCurrency::pfenum_GTQ },
				{ "ESegmentCurrency::pfenum_GYD", (int64)ESegmentCurrency::pfenum_GYD },
				{ "ESegmentCurrency::pfenum_HKD", (int64)ESegmentCurrency::pfenum_HKD },
				{ "ESegmentCurrency::pfenum_HNL", (int64)ESegmentCurrency::pfenum_HNL },
				{ "ESegmentCurrency::pfenum_HRK", (int64)ESegmentCurrency::pfenum_HRK },
				{ "ESegmentCurrency::pfenum_HTG", (int64)ESegmentCurrency::pfenum_HTG },
				{ "ESegmentCurrency::pfenum_HUF", (int64)ESegmentCurrency::pfenum_HUF },
				{ "ESegmentCurrency::pfenum_IDR", (int64)ESegmentCurrency::pfenum_IDR },
				{ "ESegmentCurrency::pfenum_ILS", (int64)ESegmentCurrency::pfenum_ILS },
				{ "ESegmentCurrency::pfenum_IMP", (int64)ESegmentCurrency::pfenum_IMP },
				{ "ESegmentCurrency::pfenum_INR", (int64)ESegmentCurrency::pfenum_INR },
				{ "ESegmentCurrency::pfenum_IQD", (int64)ESegmentCurrency::pfenum_IQD },
				{ "ESegmentCurrency::pfenum_IRR", (int64)ESegmentCurrency::pfenum_IRR },
				{ "ESegmentCurrency::pfenum_ISK", (int64)ESegmentCurrency::pfenum_ISK },
				{ "ESegmentCurrency::pfenum_JEP", (int64)ESegmentCurrency::pfenum_JEP },
				{ "ESegmentCurrency::pfenum_JMD", (int64)ESegmentCurrency::pfenum_JMD },
				{ "ESegmentCurrency::pfenum_JOD", (int64)ESegmentCurrency::pfenum_JOD },
				{ "ESegmentCurrency::pfenum_JPY", (int64)ESegmentCurrency::pfenum_JPY },
				{ "ESegmentCurrency::pfenum_KES", (int64)ESegmentCurrency::pfenum_KES },
				{ "ESegmentCurrency::pfenum_KGS", (int64)ESegmentCurrency::pfenum_KGS },
				{ "ESegmentCurrency::pfenum_KHR", (int64)ESegmentCurrency::pfenum_KHR },
				{ "ESegmentCurrency::pfenum_KMF", (int64)ESegmentCurrency::pfenum_KMF },
				{ "ESegmentCurrency::pfenum_KPW", (int64)ESegmentCurrency::pfenum_KPW },
				{ "ESegmentCurrency::pfenum_KRW", (int64)ESegmentCurrency::pfenum_KRW },
				{ "ESegmentCurrency::pfenum_KWD", (int64)ESegmentCurrency::pfenum_KWD },
				{ "ESegmentCurrency::pfenum_KYD", (int64)ESegmentCurrency::pfenum_KYD },
				{ "ESegmentCurrency::pfenum_KZT", (int64)ESegmentCurrency::pfenum_KZT },
				{ "ESegmentCurrency::pfenum_LAK", (int64)ESegmentCurrency::pfenum_LAK },
				{ "ESegmentCurrency::pfenum_LBP", (int64)ESegmentCurrency::pfenum_LBP },
				{ "ESegmentCurrency::pfenum_LKR", (int64)ESegmentCurrency::pfenum_LKR },
				{ "ESegmentCurrency::pfenum_LRD", (int64)ESegmentCurrency::pfenum_LRD },
				{ "ESegmentCurrency::pfenum_LSL", (int64)ESegmentCurrency::pfenum_LSL },
				{ "ESegmentCurrency::pfenum_LYD", (int64)ESegmentCurrency::pfenum_LYD },
				{ "ESegmentCurrency::pfenum_MAD", (int64)ESegmentCurrency::pfenum_MAD },
				{ "ESegmentCurrency::pfenum_MDL", (int64)ESegmentCurrency::pfenum_MDL },
				{ "ESegmentCurrency::pfenum_MGA", (int64)ESegmentCurrency::pfenum_MGA },
				{ "ESegmentCurrency::pfenum_MKD", (int64)ESegmentCurrency::pfenum_MKD },
				{ "ESegmentCurrency::pfenum_MMK", (int64)ESegmentCurrency::pfenum_MMK },
				{ "ESegmentCurrency::pfenum_MNT", (int64)ESegmentCurrency::pfenum_MNT },
				{ "ESegmentCurrency::pfenum_MOP", (int64)ESegmentCurrency::pfenum_MOP },
				{ "ESegmentCurrency::pfenum_MRO", (int64)ESegmentCurrency::pfenum_MRO },
				{ "ESegmentCurrency::pfenum_MUR", (int64)ESegmentCurrency::pfenum_MUR },
				{ "ESegmentCurrency::pfenum_MVR", (int64)ESegmentCurrency::pfenum_MVR },
				{ "ESegmentCurrency::pfenum_MWK", (int64)ESegmentCurrency::pfenum_MWK },
				{ "ESegmentCurrency::pfenum_MXN", (int64)ESegmentCurrency::pfenum_MXN },
				{ "ESegmentCurrency::pfenum_MYR", (int64)ESegmentCurrency::pfenum_MYR },
				{ "ESegmentCurrency::pfenum_MZN", (int64)ESegmentCurrency::pfenum_MZN },
				{ "ESegmentCurrency::pfenum_NAD", (int64)ESegmentCurrency::pfenum_NAD },
				{ "ESegmentCurrency::pfenum_NGN", (int64)ESegmentCurrency::pfenum_NGN },
				{ "ESegmentCurrency::pfenum_NIO", (int64)ESegmentCurrency::pfenum_NIO },
				{ "ESegmentCurrency::pfenum_NOK", (int64)ESegmentCurrency::pfenum_NOK },
				{ "ESegmentCurrency::pfenum_NPR", (int64)ESegmentCurrency::pfenum_NPR },
				{ "ESegmentCurrency::pfenum_NZD", (int64)ESegmentCurrency::pfenum_NZD },
				{ "ESegmentCurrency::pfenum_OMR", (int64)ESegmentCurrency::pfenum_OMR },
				{ "ESegmentCurrency::pfenum_PAB", (int64)ESegmentCurrency::pfenum_PAB },
				{ "ESegmentCurrency::pfenum_PEN", (int64)ESegmentCurrency::pfenum_PEN },
				{ "ESegmentCurrency::pfenum_PGK", (int64)ESegmentCurrency::pfenum_PGK },
				{ "ESegmentCurrency::pfenum_PHP", (int64)ESegmentCurrency::pfenum_PHP },
				{ "ESegmentCurrency::pfenum_PKR", (int64)ESegmentCurrency::pfenum_PKR },
				{ "ESegmentCurrency::pfenum_PLN", (int64)ESegmentCurrency::pfenum_PLN },
				{ "ESegmentCurrency::pfenum_PYG", (int64)ESegmentCurrency::pfenum_PYG },
				{ "ESegmentCurrency::pfenum_QAR", (int64)ESegmentCurrency::pfenum_QAR },
				{ "ESegmentCurrency::pfenum_RON", (int64)ESegmentCurrency::pfenum_RON },
				{ "ESegmentCurrency::pfenum_RSD", (int64)ESegmentCurrency::pfenum_RSD },
				{ "ESegmentCurrency::pfenum_RUB", (int64)ESegmentCurrency::pfenum_RUB },
				{ "ESegmentCurrency::pfenum_RWF", (int64)ESegmentCurrency::pfenum_RWF },
				{ "ESegmentCurrency::pfenum_SAR", (int64)ESegmentCurrency::pfenum_SAR },
				{ "ESegmentCurrency::pfenum_SBD", (int64)ESegmentCurrency::pfenum_SBD },
				{ "ESegmentCurrency::pfenum_SCR", (int64)ESegmentCurrency::pfenum_SCR },
				{ "ESegmentCurrency::pfenum_SDG", (int64)ESegmentCurrency::pfenum_SDG },
				{ "ESegmentCurrency::pfenum_SEK", (int64)ESegmentCurrency::pfenum_SEK },
				{ "ESegmentCurrency::pfenum_SGD", (int64)ESegmentCurrency::pfenum_SGD },
				{ "ESegmentCurrency::pfenum_SHP", (int64)ESegmentCurrency::pfenum_SHP },
				{ "ESegmentCurrency::pfenum_SLL", (int64)ESegmentCurrency::pfenum_SLL },
				{ "ESegmentCurrency::pfenum_SOS", (int64)ESegmentCurrency::pfenum_SOS },
				{ "ESegmentCurrency::pfenum_SPL", (int64)ESegmentCurrency::pfenum_SPL },
				{ "ESegmentCurrency::pfenum_SRD", (int64)ESegmentCurrency::pfenum_SRD },
				{ "ESegmentCurrency::pfenum_STD", (int64)ESegmentCurrency::pfenum_STD },
				{ "ESegmentCurrency::pfenum_SVC", (int64)ESegmentCurrency::pfenum_SVC },
				{ "ESegmentCurrency::pfenum_SYP", (int64)ESegmentCurrency::pfenum_SYP },
				{ "ESegmentCurrency::pfenum_SZL", (int64)ESegmentCurrency::pfenum_SZL },
				{ "ESegmentCurrency::pfenum_THB", (int64)ESegmentCurrency::pfenum_THB },
				{ "ESegmentCurrency::pfenum_TJS", (int64)ESegmentCurrency::pfenum_TJS },
				{ "ESegmentCurrency::pfenum_TMT", (int64)ESegmentCurrency::pfenum_TMT },
				{ "ESegmentCurrency::pfenum_TND", (int64)ESegmentCurrency::pfenum_TND },
				{ "ESegmentCurrency::pfenum_TOP", (int64)ESegmentCurrency::pfenum_TOP },
				{ "ESegmentCurrency::pfenum_TRY", (int64)ESegmentCurrency::pfenum_TRY },
				{ "ESegmentCurrency::pfenum_TTD", (int64)ESegmentCurrency::pfenum_TTD },
				{ "ESegmentCurrency::pfenum_TVD", (int64)ESegmentCurrency::pfenum_TVD },
				{ "ESegmentCurrency::pfenum_TWD", (int64)ESegmentCurrency::pfenum_TWD },
				{ "ESegmentCurrency::pfenum_TZS", (int64)ESegmentCurrency::pfenum_TZS },
				{ "ESegmentCurrency::pfenum_UAH", (int64)ESegmentCurrency::pfenum_UAH },
				{ "ESegmentCurrency::pfenum_UGX", (int64)ESegmentCurrency::pfenum_UGX },
				{ "ESegmentCurrency::pfenum_USD", (int64)ESegmentCurrency::pfenum_USD },
				{ "ESegmentCurrency::pfenum_UYU", (int64)ESegmentCurrency::pfenum_UYU },
				{ "ESegmentCurrency::pfenum_UZS", (int64)ESegmentCurrency::pfenum_UZS },
				{ "ESegmentCurrency::pfenum_VEF", (int64)ESegmentCurrency::pfenum_VEF },
				{ "ESegmentCurrency::pfenum_VND", (int64)ESegmentCurrency::pfenum_VND },
				{ "ESegmentCurrency::pfenum_VUV", (int64)ESegmentCurrency::pfenum_VUV },
				{ "ESegmentCurrency::pfenum_WST", (int64)ESegmentCurrency::pfenum_WST },
				{ "ESegmentCurrency::pfenum_XAF", (int64)ESegmentCurrency::pfenum_XAF },
				{ "ESegmentCurrency::pfenum_XCD", (int64)ESegmentCurrency::pfenum_XCD },
				{ "ESegmentCurrency::pfenum_XDR", (int64)ESegmentCurrency::pfenum_XDR },
				{ "ESegmentCurrency::pfenum_XOF", (int64)ESegmentCurrency::pfenum_XOF },
				{ "ESegmentCurrency::pfenum_XPF", (int64)ESegmentCurrency::pfenum_XPF },
				{ "ESegmentCurrency::pfenum_YER", (int64)ESegmentCurrency::pfenum_YER },
				{ "ESegmentCurrency::pfenum_ZAR", (int64)ESegmentCurrency::pfenum_ZAR },
				{ "ESegmentCurrency::pfenum_ZMW", (int64)ESegmentCurrency::pfenum_ZMW },
				{ "ESegmentCurrency::pfenum_ZWD", (int64)ESegmentCurrency::pfenum_ZWD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SegmentCurrency */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AED.DisplayName", "AED" },
				{ "pfenum_AED.Name", "ESegmentCurrency::pfenum_AED" },
				{ "pfenum_AFN.DisplayName", "AFN" },
				{ "pfenum_AFN.Name", "ESegmentCurrency::pfenum_AFN" },
				{ "pfenum_ALL.DisplayName", "ALL" },
				{ "pfenum_ALL.Name", "ESegmentCurrency::pfenum_ALL" },
				{ "pfenum_AMD.DisplayName", "AMD" },
				{ "pfenum_AMD.Name", "ESegmentCurrency::pfenum_AMD" },
				{ "pfenum_ANG.DisplayName", "ANG" },
				{ "pfenum_ANG.Name", "ESegmentCurrency::pfenum_ANG" },
				{ "pfenum_AOA.DisplayName", "AOA" },
				{ "pfenum_AOA.Name", "ESegmentCurrency::pfenum_AOA" },
				{ "pfenum_ARS.DisplayName", "ARS" },
				{ "pfenum_ARS.Name", "ESegmentCurrency::pfenum_ARS" },
				{ "pfenum_AUD.DisplayName", "AUD" },
				{ "pfenum_AUD.Name", "ESegmentCurrency::pfenum_AUD" },
				{ "pfenum_AWG.DisplayName", "AWG" },
				{ "pfenum_AWG.Name", "ESegmentCurrency::pfenum_AWG" },
				{ "pfenum_AZN.DisplayName", "AZN" },
				{ "pfenum_AZN.Name", "ESegmentCurrency::pfenum_AZN" },
				{ "pfenum_BAM.DisplayName", "BAM" },
				{ "pfenum_BAM.Name", "ESegmentCurrency::pfenum_BAM" },
				{ "pfenum_BBD.DisplayName", "BBD" },
				{ "pfenum_BBD.Name", "ESegmentCurrency::pfenum_BBD" },
				{ "pfenum_BDT.DisplayName", "BDT" },
				{ "pfenum_BDT.Name", "ESegmentCurrency::pfenum_BDT" },
				{ "pfenum_BGN.DisplayName", "BGN" },
				{ "pfenum_BGN.Name", "ESegmentCurrency::pfenum_BGN" },
				{ "pfenum_BHD.DisplayName", "BHD" },
				{ "pfenum_BHD.Name", "ESegmentCurrency::pfenum_BHD" },
				{ "pfenum_BIF.DisplayName", "BIF" },
				{ "pfenum_BIF.Name", "ESegmentCurrency::pfenum_BIF" },
				{ "pfenum_BMD.DisplayName", "BMD" },
				{ "pfenum_BMD.Name", "ESegmentCurrency::pfenum_BMD" },
				{ "pfenum_BND.DisplayName", "BND" },
				{ "pfenum_BND.Name", "ESegmentCurrency::pfenum_BND" },
				{ "pfenum_BOB.DisplayName", "BOB" },
				{ "pfenum_BOB.Name", "ESegmentCurrency::pfenum_BOB" },
				{ "pfenum_BRL.DisplayName", "BRL" },
				{ "pfenum_BRL.Name", "ESegmentCurrency::pfenum_BRL" },
				{ "pfenum_BSD.DisplayName", "BSD" },
				{ "pfenum_BSD.Name", "ESegmentCurrency::pfenum_BSD" },
				{ "pfenum_BTN.DisplayName", "BTN" },
				{ "pfenum_BTN.Name", "ESegmentCurrency::pfenum_BTN" },
				{ "pfenum_BWP.DisplayName", "BWP" },
				{ "pfenum_BWP.Name", "ESegmentCurrency::pfenum_BWP" },
				{ "pfenum_BYR.DisplayName", "BYR" },
				{ "pfenum_BYR.Name", "ESegmentCurrency::pfenum_BYR" },
				{ "pfenum_BZD.DisplayName", "BZD" },
				{ "pfenum_BZD.Name", "ESegmentCurrency::pfenum_BZD" },
				{ "pfenum_CAD.DisplayName", "CAD" },
				{ "pfenum_CAD.Name", "ESegmentCurrency::pfenum_CAD" },
				{ "pfenum_CDF.DisplayName", "CDF" },
				{ "pfenum_CDF.Name", "ESegmentCurrency::pfenum_CDF" },
				{ "pfenum_CHF.DisplayName", "CHF" },
				{ "pfenum_CHF.Name", "ESegmentCurrency::pfenum_CHF" },
				{ "pfenum_CLP.DisplayName", "CLP" },
				{ "pfenum_CLP.Name", "ESegmentCurrency::pfenum_CLP" },
				{ "pfenum_CNY.DisplayName", "CNY" },
				{ "pfenum_CNY.Name", "ESegmentCurrency::pfenum_CNY" },
				{ "pfenum_COP.DisplayName", "COP" },
				{ "pfenum_COP.Name", "ESegmentCurrency::pfenum_COP" },
				{ "pfenum_CRC.DisplayName", "CRC" },
				{ "pfenum_CRC.Name", "ESegmentCurrency::pfenum_CRC" },
				{ "pfenum_CUC.DisplayName", "CUC" },
				{ "pfenum_CUC.Name", "ESegmentCurrency::pfenum_CUC" },
				{ "pfenum_CUP.DisplayName", "CUP" },
				{ "pfenum_CUP.Name", "ESegmentCurrency::pfenum_CUP" },
				{ "pfenum_CVE.DisplayName", "CVE" },
				{ "pfenum_CVE.Name", "ESegmentCurrency::pfenum_CVE" },
				{ "pfenum_CZK.DisplayName", "CZK" },
				{ "pfenum_CZK.Name", "ESegmentCurrency::pfenum_CZK" },
				{ "pfenum_DJF.DisplayName", "DJF" },
				{ "pfenum_DJF.Name", "ESegmentCurrency::pfenum_DJF" },
				{ "pfenum_DKK.DisplayName", "DKK" },
				{ "pfenum_DKK.Name", "ESegmentCurrency::pfenum_DKK" },
				{ "pfenum_DOP.DisplayName", "DOP" },
				{ "pfenum_DOP.Name", "ESegmentCurrency::pfenum_DOP" },
				{ "pfenum_DZD.DisplayName", "DZD" },
				{ "pfenum_DZD.Name", "ESegmentCurrency::pfenum_DZD" },
				{ "pfenum_EGP.DisplayName", "EGP" },
				{ "pfenum_EGP.Name", "ESegmentCurrency::pfenum_EGP" },
				{ "pfenum_ERN.DisplayName", "ERN" },
				{ "pfenum_ERN.Name", "ESegmentCurrency::pfenum_ERN" },
				{ "pfenum_ETB.DisplayName", "ETB" },
				{ "pfenum_ETB.Name", "ESegmentCurrency::pfenum_ETB" },
				{ "pfenum_EUR.DisplayName", "EUR" },
				{ "pfenum_EUR.Name", "ESegmentCurrency::pfenum_EUR" },
				{ "pfenum_FJD.DisplayName", "FJD" },
				{ "pfenum_FJD.Name", "ESegmentCurrency::pfenum_FJD" },
				{ "pfenum_FKP.DisplayName", "FKP" },
				{ "pfenum_FKP.Name", "ESegmentCurrency::pfenum_FKP" },
				{ "pfenum_GBP.DisplayName", "GBP" },
				{ "pfenum_GBP.Name", "ESegmentCurrency::pfenum_GBP" },
				{ "pfenum_GEL.DisplayName", "GEL" },
				{ "pfenum_GEL.Name", "ESegmentCurrency::pfenum_GEL" },
				{ "pfenum_GGP.DisplayName", "GGP" },
				{ "pfenum_GGP.Name", "ESegmentCurrency::pfenum_GGP" },
				{ "pfenum_GHS.DisplayName", "GHS" },
				{ "pfenum_GHS.Name", "ESegmentCurrency::pfenum_GHS" },
				{ "pfenum_GIP.DisplayName", "GIP" },
				{ "pfenum_GIP.Name", "ESegmentCurrency::pfenum_GIP" },
				{ "pfenum_GMD.DisplayName", "GMD" },
				{ "pfenum_GMD.Name", "ESegmentCurrency::pfenum_GMD" },
				{ "pfenum_GNF.DisplayName", "GNF" },
				{ "pfenum_GNF.Name", "ESegmentCurrency::pfenum_GNF" },
				{ "pfenum_GTQ.DisplayName", "GTQ" },
				{ "pfenum_GTQ.Name", "ESegmentCurrency::pfenum_GTQ" },
				{ "pfenum_GYD.DisplayName", "GYD" },
				{ "pfenum_GYD.Name", "ESegmentCurrency::pfenum_GYD" },
				{ "pfenum_HKD.DisplayName", "HKD" },
				{ "pfenum_HKD.Name", "ESegmentCurrency::pfenum_HKD" },
				{ "pfenum_HNL.DisplayName", "HNL" },
				{ "pfenum_HNL.Name", "ESegmentCurrency::pfenum_HNL" },
				{ "pfenum_HRK.DisplayName", "HRK" },
				{ "pfenum_HRK.Name", "ESegmentCurrency::pfenum_HRK" },
				{ "pfenum_HTG.DisplayName", "HTG" },
				{ "pfenum_HTG.Name", "ESegmentCurrency::pfenum_HTG" },
				{ "pfenum_HUF.DisplayName", "HUF" },
				{ "pfenum_HUF.Name", "ESegmentCurrency::pfenum_HUF" },
				{ "pfenum_IDR.DisplayName", "IDR" },
				{ "pfenum_IDR.Name", "ESegmentCurrency::pfenum_IDR" },
				{ "pfenum_ILS.DisplayName", "ILS" },
				{ "pfenum_ILS.Name", "ESegmentCurrency::pfenum_ILS" },
				{ "pfenum_IMP.DisplayName", "IMP" },
				{ "pfenum_IMP.Name", "ESegmentCurrency::pfenum_IMP" },
				{ "pfenum_INR.DisplayName", "INR" },
				{ "pfenum_INR.Name", "ESegmentCurrency::pfenum_INR" },
				{ "pfenum_IQD.DisplayName", "IQD" },
				{ "pfenum_IQD.Name", "ESegmentCurrency::pfenum_IQD" },
				{ "pfenum_IRR.DisplayName", "IRR" },
				{ "pfenum_IRR.Name", "ESegmentCurrency::pfenum_IRR" },
				{ "pfenum_ISK.DisplayName", "ISK" },
				{ "pfenum_ISK.Name", "ESegmentCurrency::pfenum_ISK" },
				{ "pfenum_JEP.DisplayName", "JEP" },
				{ "pfenum_JEP.Name", "ESegmentCurrency::pfenum_JEP" },
				{ "pfenum_JMD.DisplayName", "JMD" },
				{ "pfenum_JMD.Name", "ESegmentCurrency::pfenum_JMD" },
				{ "pfenum_JOD.DisplayName", "JOD" },
				{ "pfenum_JOD.Name", "ESegmentCurrency::pfenum_JOD" },
				{ "pfenum_JPY.DisplayName", "JPY" },
				{ "pfenum_JPY.Name", "ESegmentCurrency::pfenum_JPY" },
				{ "pfenum_KES.DisplayName", "KES" },
				{ "pfenum_KES.Name", "ESegmentCurrency::pfenum_KES" },
				{ "pfenum_KGS.DisplayName", "KGS" },
				{ "pfenum_KGS.Name", "ESegmentCurrency::pfenum_KGS" },
				{ "pfenum_KHR.DisplayName", "KHR" },
				{ "pfenum_KHR.Name", "ESegmentCurrency::pfenum_KHR" },
				{ "pfenum_KMF.DisplayName", "KMF" },
				{ "pfenum_KMF.Name", "ESegmentCurrency::pfenum_KMF" },
				{ "pfenum_KPW.DisplayName", "KPW" },
				{ "pfenum_KPW.Name", "ESegmentCurrency::pfenum_KPW" },
				{ "pfenum_KRW.DisplayName", "KRW" },
				{ "pfenum_KRW.Name", "ESegmentCurrency::pfenum_KRW" },
				{ "pfenum_KWD.DisplayName", "KWD" },
				{ "pfenum_KWD.Name", "ESegmentCurrency::pfenum_KWD" },
				{ "pfenum_KYD.DisplayName", "KYD" },
				{ "pfenum_KYD.Name", "ESegmentCurrency::pfenum_KYD" },
				{ "pfenum_KZT.DisplayName", "KZT" },
				{ "pfenum_KZT.Name", "ESegmentCurrency::pfenum_KZT" },
				{ "pfenum_LAK.DisplayName", "LAK" },
				{ "pfenum_LAK.Name", "ESegmentCurrency::pfenum_LAK" },
				{ "pfenum_LBP.DisplayName", "LBP" },
				{ "pfenum_LBP.Name", "ESegmentCurrency::pfenum_LBP" },
				{ "pfenum_LKR.DisplayName", "LKR" },
				{ "pfenum_LKR.Name", "ESegmentCurrency::pfenum_LKR" },
				{ "pfenum_LRD.DisplayName", "LRD" },
				{ "pfenum_LRD.Name", "ESegmentCurrency::pfenum_LRD" },
				{ "pfenum_LSL.DisplayName", "LSL" },
				{ "pfenum_LSL.Name", "ESegmentCurrency::pfenum_LSL" },
				{ "pfenum_LYD.DisplayName", "LYD" },
				{ "pfenum_LYD.Name", "ESegmentCurrency::pfenum_LYD" },
				{ "pfenum_MAD.DisplayName", "MAD" },
				{ "pfenum_MAD.Name", "ESegmentCurrency::pfenum_MAD" },
				{ "pfenum_MDL.DisplayName", "MDL" },
				{ "pfenum_MDL.Name", "ESegmentCurrency::pfenum_MDL" },
				{ "pfenum_MGA.DisplayName", "MGA" },
				{ "pfenum_MGA.Name", "ESegmentCurrency::pfenum_MGA" },
				{ "pfenum_MKD.DisplayName", "MKD" },
				{ "pfenum_MKD.Name", "ESegmentCurrency::pfenum_MKD" },
				{ "pfenum_MMK.DisplayName", "MMK" },
				{ "pfenum_MMK.Name", "ESegmentCurrency::pfenum_MMK" },
				{ "pfenum_MNT.DisplayName", "MNT" },
				{ "pfenum_MNT.Name", "ESegmentCurrency::pfenum_MNT" },
				{ "pfenum_MOP.DisplayName", "MOP" },
				{ "pfenum_MOP.Name", "ESegmentCurrency::pfenum_MOP" },
				{ "pfenum_MRO.DisplayName", "MRO" },
				{ "pfenum_MRO.Name", "ESegmentCurrency::pfenum_MRO" },
				{ "pfenum_MUR.DisplayName", "MUR" },
				{ "pfenum_MUR.Name", "ESegmentCurrency::pfenum_MUR" },
				{ "pfenum_MVR.DisplayName", "MVR" },
				{ "pfenum_MVR.Name", "ESegmentCurrency::pfenum_MVR" },
				{ "pfenum_MWK.DisplayName", "MWK" },
				{ "pfenum_MWK.Name", "ESegmentCurrency::pfenum_MWK" },
				{ "pfenum_MXN.DisplayName", "MXN" },
				{ "pfenum_MXN.Name", "ESegmentCurrency::pfenum_MXN" },
				{ "pfenum_MYR.DisplayName", "MYR" },
				{ "pfenum_MYR.Name", "ESegmentCurrency::pfenum_MYR" },
				{ "pfenum_MZN.DisplayName", "MZN" },
				{ "pfenum_MZN.Name", "ESegmentCurrency::pfenum_MZN" },
				{ "pfenum_NAD.DisplayName", "NAD" },
				{ "pfenum_NAD.Name", "ESegmentCurrency::pfenum_NAD" },
				{ "pfenum_NGN.DisplayName", "NGN" },
				{ "pfenum_NGN.Name", "ESegmentCurrency::pfenum_NGN" },
				{ "pfenum_NIO.DisplayName", "NIO" },
				{ "pfenum_NIO.Name", "ESegmentCurrency::pfenum_NIO" },
				{ "pfenum_NOK.DisplayName", "NOK" },
				{ "pfenum_NOK.Name", "ESegmentCurrency::pfenum_NOK" },
				{ "pfenum_NPR.DisplayName", "NPR" },
				{ "pfenum_NPR.Name", "ESegmentCurrency::pfenum_NPR" },
				{ "pfenum_NZD.DisplayName", "NZD" },
				{ "pfenum_NZD.Name", "ESegmentCurrency::pfenum_NZD" },
				{ "pfenum_OMR.DisplayName", "OMR" },
				{ "pfenum_OMR.Name", "ESegmentCurrency::pfenum_OMR" },
				{ "pfenum_PAB.DisplayName", "PAB" },
				{ "pfenum_PAB.Name", "ESegmentCurrency::pfenum_PAB" },
				{ "pfenum_PEN.DisplayName", "PEN" },
				{ "pfenum_PEN.Name", "ESegmentCurrency::pfenum_PEN" },
				{ "pfenum_PGK.DisplayName", "PGK" },
				{ "pfenum_PGK.Name", "ESegmentCurrency::pfenum_PGK" },
				{ "pfenum_PHP.DisplayName", "PHP" },
				{ "pfenum_PHP.Name", "ESegmentCurrency::pfenum_PHP" },
				{ "pfenum_PKR.DisplayName", "PKR" },
				{ "pfenum_PKR.Name", "ESegmentCurrency::pfenum_PKR" },
				{ "pfenum_PLN.DisplayName", "PLN" },
				{ "pfenum_PLN.Name", "ESegmentCurrency::pfenum_PLN" },
				{ "pfenum_PYG.DisplayName", "PYG" },
				{ "pfenum_PYG.Name", "ESegmentCurrency::pfenum_PYG" },
				{ "pfenum_QAR.DisplayName", "QAR" },
				{ "pfenum_QAR.Name", "ESegmentCurrency::pfenum_QAR" },
				{ "pfenum_RON.DisplayName", "RON" },
				{ "pfenum_RON.Name", "ESegmentCurrency::pfenum_RON" },
				{ "pfenum_RSD.DisplayName", "RSD" },
				{ "pfenum_RSD.Name", "ESegmentCurrency::pfenum_RSD" },
				{ "pfenum_RUB.DisplayName", "RUB" },
				{ "pfenum_RUB.Name", "ESegmentCurrency::pfenum_RUB" },
				{ "pfenum_RWF.DisplayName", "RWF" },
				{ "pfenum_RWF.Name", "ESegmentCurrency::pfenum_RWF" },
				{ "pfenum_SAR.DisplayName", "SAR" },
				{ "pfenum_SAR.Name", "ESegmentCurrency::pfenum_SAR" },
				{ "pfenum_SBD.DisplayName", "SBD" },
				{ "pfenum_SBD.Name", "ESegmentCurrency::pfenum_SBD" },
				{ "pfenum_SCR.DisplayName", "SCR" },
				{ "pfenum_SCR.Name", "ESegmentCurrency::pfenum_SCR" },
				{ "pfenum_SDG.DisplayName", "SDG" },
				{ "pfenum_SDG.Name", "ESegmentCurrency::pfenum_SDG" },
				{ "pfenum_SEK.DisplayName", "SEK" },
				{ "pfenum_SEK.Name", "ESegmentCurrency::pfenum_SEK" },
				{ "pfenum_SGD.DisplayName", "SGD" },
				{ "pfenum_SGD.Name", "ESegmentCurrency::pfenum_SGD" },
				{ "pfenum_SHP.DisplayName", "SHP" },
				{ "pfenum_SHP.Name", "ESegmentCurrency::pfenum_SHP" },
				{ "pfenum_SLL.DisplayName", "SLL" },
				{ "pfenum_SLL.Name", "ESegmentCurrency::pfenum_SLL" },
				{ "pfenum_SOS.DisplayName", "SOS" },
				{ "pfenum_SOS.Name", "ESegmentCurrency::pfenum_SOS" },
				{ "pfenum_SPL.DisplayName", "SPL" },
				{ "pfenum_SPL.Name", "ESegmentCurrency::pfenum_SPL" },
				{ "pfenum_SRD.DisplayName", "SRD" },
				{ "pfenum_SRD.Name", "ESegmentCurrency::pfenum_SRD" },
				{ "pfenum_STD.DisplayName", "STD" },
				{ "pfenum_STD.Name", "ESegmentCurrency::pfenum_STD" },
				{ "pfenum_SVC.DisplayName", "SVC" },
				{ "pfenum_SVC.Name", "ESegmentCurrency::pfenum_SVC" },
				{ "pfenum_SYP.DisplayName", "SYP" },
				{ "pfenum_SYP.Name", "ESegmentCurrency::pfenum_SYP" },
				{ "pfenum_SZL.DisplayName", "SZL" },
				{ "pfenum_SZL.Name", "ESegmentCurrency::pfenum_SZL" },
				{ "pfenum_THB.DisplayName", "THB" },
				{ "pfenum_THB.Name", "ESegmentCurrency::pfenum_THB" },
				{ "pfenum_TJS.DisplayName", "TJS" },
				{ "pfenum_TJS.Name", "ESegmentCurrency::pfenum_TJS" },
				{ "pfenum_TMT.DisplayName", "TMT" },
				{ "pfenum_TMT.Name", "ESegmentCurrency::pfenum_TMT" },
				{ "pfenum_TND.DisplayName", "TND" },
				{ "pfenum_TND.Name", "ESegmentCurrency::pfenum_TND" },
				{ "pfenum_TOP.DisplayName", "TOP" },
				{ "pfenum_TOP.Name", "ESegmentCurrency::pfenum_TOP" },
				{ "pfenum_TRY.DisplayName", "TRY" },
				{ "pfenum_TRY.Name", "ESegmentCurrency::pfenum_TRY" },
				{ "pfenum_TTD.DisplayName", "TTD" },
				{ "pfenum_TTD.Name", "ESegmentCurrency::pfenum_TTD" },
				{ "pfenum_TVD.DisplayName", "TVD" },
				{ "pfenum_TVD.Name", "ESegmentCurrency::pfenum_TVD" },
				{ "pfenum_TWD.DisplayName", "TWD" },
				{ "pfenum_TWD.Name", "ESegmentCurrency::pfenum_TWD" },
				{ "pfenum_TZS.DisplayName", "TZS" },
				{ "pfenum_TZS.Name", "ESegmentCurrency::pfenum_TZS" },
				{ "pfenum_UAH.DisplayName", "UAH" },
				{ "pfenum_UAH.Name", "ESegmentCurrency::pfenum_UAH" },
				{ "pfenum_UGX.DisplayName", "UGX" },
				{ "pfenum_UGX.Name", "ESegmentCurrency::pfenum_UGX" },
				{ "pfenum_USD.DisplayName", "USD" },
				{ "pfenum_USD.Name", "ESegmentCurrency::pfenum_USD" },
				{ "pfenum_UYU.DisplayName", "UYU" },
				{ "pfenum_UYU.Name", "ESegmentCurrency::pfenum_UYU" },
				{ "pfenum_UZS.DisplayName", "UZS" },
				{ "pfenum_UZS.Name", "ESegmentCurrency::pfenum_UZS" },
				{ "pfenum_VEF.DisplayName", "VEF" },
				{ "pfenum_VEF.Name", "ESegmentCurrency::pfenum_VEF" },
				{ "pfenum_VND.DisplayName", "VND" },
				{ "pfenum_VND.Name", "ESegmentCurrency::pfenum_VND" },
				{ "pfenum_VUV.DisplayName", "VUV" },
				{ "pfenum_VUV.Name", "ESegmentCurrency::pfenum_VUV" },
				{ "pfenum_WST.DisplayName", "WST" },
				{ "pfenum_WST.Name", "ESegmentCurrency::pfenum_WST" },
				{ "pfenum_XAF.DisplayName", "XAF" },
				{ "pfenum_XAF.Name", "ESegmentCurrency::pfenum_XAF" },
				{ "pfenum_XCD.DisplayName", "XCD" },
				{ "pfenum_XCD.Name", "ESegmentCurrency::pfenum_XCD" },
				{ "pfenum_XDR.DisplayName", "XDR" },
				{ "pfenum_XDR.Name", "ESegmentCurrency::pfenum_XDR" },
				{ "pfenum_XOF.DisplayName", "XOF" },
				{ "pfenum_XOF.Name", "ESegmentCurrency::pfenum_XOF" },
				{ "pfenum_XPF.DisplayName", "XPF" },
				{ "pfenum_XPF.Name", "ESegmentCurrency::pfenum_XPF" },
				{ "pfenum_YER.DisplayName", "YER" },
				{ "pfenum_YER.Name", "ESegmentCurrency::pfenum_YER" },
				{ "pfenum_ZAR.DisplayName", "ZAR" },
				{ "pfenum_ZAR.Name", "ESegmentCurrency::pfenum_ZAR" },
				{ "pfenum_ZMW.DisplayName", "ZMW" },
				{ "pfenum_ZMW.Name", "ESegmentCurrency::pfenum_ZMW" },
				{ "pfenum_ZWD.DisplayName", "ZWD" },
				{ "pfenum_ZWD.Name", "ESegmentCurrency::pfenum_ZWD" },
				{ "ToolTip", "SegmentCurrency" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentCurrency",
				"ESegmentCurrency",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegmentCountryCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentCountryCode, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentCountryCode"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentCountryCode>()
	{
		return ESegmentCountryCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentCountryCode(ESegmentCountryCode_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentCountryCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentCountryCode_Hash() { return 2164984458U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentCountryCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentCountryCode"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentCountryCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentCountryCode::pfenum_AF", (int64)ESegmentCountryCode::pfenum_AF },
				{ "ESegmentCountryCode::pfenum_AX", (int64)ESegmentCountryCode::pfenum_AX },
				{ "ESegmentCountryCode::pfenum_AL", (int64)ESegmentCountryCode::pfenum_AL },
				{ "ESegmentCountryCode::pfenum_DZ", (int64)ESegmentCountryCode::pfenum_DZ },
				{ "ESegmentCountryCode::pfenum_AS", (int64)ESegmentCountryCode::pfenum_AS },
				{ "ESegmentCountryCode::pfenum_AD", (int64)ESegmentCountryCode::pfenum_AD },
				{ "ESegmentCountryCode::pfenum_AO", (int64)ESegmentCountryCode::pfenum_AO },
				{ "ESegmentCountryCode::pfenum_AI", (int64)ESegmentCountryCode::pfenum_AI },
				{ "ESegmentCountryCode::pfenum_AQ", (int64)ESegmentCountryCode::pfenum_AQ },
				{ "ESegmentCountryCode::pfenum_AG", (int64)ESegmentCountryCode::pfenum_AG },
				{ "ESegmentCountryCode::pfenum_AR", (int64)ESegmentCountryCode::pfenum_AR },
				{ "ESegmentCountryCode::pfenum_AM", (int64)ESegmentCountryCode::pfenum_AM },
				{ "ESegmentCountryCode::pfenum_AW", (int64)ESegmentCountryCode::pfenum_AW },
				{ "ESegmentCountryCode::pfenum_AU", (int64)ESegmentCountryCode::pfenum_AU },
				{ "ESegmentCountryCode::pfenum_AT", (int64)ESegmentCountryCode::pfenum_AT },
				{ "ESegmentCountryCode::pfenum_AZ", (int64)ESegmentCountryCode::pfenum_AZ },
				{ "ESegmentCountryCode::pfenum_BS", (int64)ESegmentCountryCode::pfenum_BS },
				{ "ESegmentCountryCode::pfenum_BH", (int64)ESegmentCountryCode::pfenum_BH },
				{ "ESegmentCountryCode::pfenum_BD", (int64)ESegmentCountryCode::pfenum_BD },
				{ "ESegmentCountryCode::pfenum_BB", (int64)ESegmentCountryCode::pfenum_BB },
				{ "ESegmentCountryCode::pfenum_BY", (int64)ESegmentCountryCode::pfenum_BY },
				{ "ESegmentCountryCode::pfenum_BE", (int64)ESegmentCountryCode::pfenum_BE },
				{ "ESegmentCountryCode::pfenum_BZ", (int64)ESegmentCountryCode::pfenum_BZ },
				{ "ESegmentCountryCode::pfenum_BJ", (int64)ESegmentCountryCode::pfenum_BJ },
				{ "ESegmentCountryCode::pfenum_BM", (int64)ESegmentCountryCode::pfenum_BM },
				{ "ESegmentCountryCode::pfenum_BT", (int64)ESegmentCountryCode::pfenum_BT },
				{ "ESegmentCountryCode::pfenum_BO", (int64)ESegmentCountryCode::pfenum_BO },
				{ "ESegmentCountryCode::pfenum_BQ", (int64)ESegmentCountryCode::pfenum_BQ },
				{ "ESegmentCountryCode::pfenum_BA", (int64)ESegmentCountryCode::pfenum_BA },
				{ "ESegmentCountryCode::pfenum_BW", (int64)ESegmentCountryCode::pfenum_BW },
				{ "ESegmentCountryCode::pfenum_BV", (int64)ESegmentCountryCode::pfenum_BV },
				{ "ESegmentCountryCode::pfenum_BR", (int64)ESegmentCountryCode::pfenum_BR },
				{ "ESegmentCountryCode::pfenum_IO", (int64)ESegmentCountryCode::pfenum_IO },
				{ "ESegmentCountryCode::pfenum_BN", (int64)ESegmentCountryCode::pfenum_BN },
				{ "ESegmentCountryCode::pfenum_BG", (int64)ESegmentCountryCode::pfenum_BG },
				{ "ESegmentCountryCode::pfenum_BF", (int64)ESegmentCountryCode::pfenum_BF },
				{ "ESegmentCountryCode::pfenum_BI", (int64)ESegmentCountryCode::pfenum_BI },
				{ "ESegmentCountryCode::pfenum_KH", (int64)ESegmentCountryCode::pfenum_KH },
				{ "ESegmentCountryCode::pfenum_CM", (int64)ESegmentCountryCode::pfenum_CM },
				{ "ESegmentCountryCode::pfenum_CA", (int64)ESegmentCountryCode::pfenum_CA },
				{ "ESegmentCountryCode::pfenum_CV", (int64)ESegmentCountryCode::pfenum_CV },
				{ "ESegmentCountryCode::pfenum_KY", (int64)ESegmentCountryCode::pfenum_KY },
				{ "ESegmentCountryCode::pfenum_CF", (int64)ESegmentCountryCode::pfenum_CF },
				{ "ESegmentCountryCode::pfenum_TD", (int64)ESegmentCountryCode::pfenum_TD },
				{ "ESegmentCountryCode::pfenum_CL", (int64)ESegmentCountryCode::pfenum_CL },
				{ "ESegmentCountryCode::pfenum_CN", (int64)ESegmentCountryCode::pfenum_CN },
				{ "ESegmentCountryCode::pfenum_CX", (int64)ESegmentCountryCode::pfenum_CX },
				{ "ESegmentCountryCode::pfenum_CC", (int64)ESegmentCountryCode::pfenum_CC },
				{ "ESegmentCountryCode::pfenum_CO", (int64)ESegmentCountryCode::pfenum_CO },
				{ "ESegmentCountryCode::pfenum_KM", (int64)ESegmentCountryCode::pfenum_KM },
				{ "ESegmentCountryCode::pfenum_CG", (int64)ESegmentCountryCode::pfenum_CG },
				{ "ESegmentCountryCode::pfenum_CD", (int64)ESegmentCountryCode::pfenum_CD },
				{ "ESegmentCountryCode::pfenum_CK", (int64)ESegmentCountryCode::pfenum_CK },
				{ "ESegmentCountryCode::pfenum_CR", (int64)ESegmentCountryCode::pfenum_CR },
				{ "ESegmentCountryCode::pfenum_CI", (int64)ESegmentCountryCode::pfenum_CI },
				{ "ESegmentCountryCode::pfenum_HR", (int64)ESegmentCountryCode::pfenum_HR },
				{ "ESegmentCountryCode::pfenum_CU", (int64)ESegmentCountryCode::pfenum_CU },
				{ "ESegmentCountryCode::pfenum_CW", (int64)ESegmentCountryCode::pfenum_CW },
				{ "ESegmentCountryCode::pfenum_CY", (int64)ESegmentCountryCode::pfenum_CY },
				{ "ESegmentCountryCode::pfenum_CZ", (int64)ESegmentCountryCode::pfenum_CZ },
				{ "ESegmentCountryCode::pfenum_DK", (int64)ESegmentCountryCode::pfenum_DK },
				{ "ESegmentCountryCode::pfenum_DJ", (int64)ESegmentCountryCode::pfenum_DJ },
				{ "ESegmentCountryCode::pfenum_DM", (int64)ESegmentCountryCode::pfenum_DM },
				{ "ESegmentCountryCode::pfenum_DO", (int64)ESegmentCountryCode::pfenum_DO },
				{ "ESegmentCountryCode::pfenum_EC", (int64)ESegmentCountryCode::pfenum_EC },
				{ "ESegmentCountryCode::pfenum_EG", (int64)ESegmentCountryCode::pfenum_EG },
				{ "ESegmentCountryCode::pfenum_SV", (int64)ESegmentCountryCode::pfenum_SV },
				{ "ESegmentCountryCode::pfenum_GQ", (int64)ESegmentCountryCode::pfenum_GQ },
				{ "ESegmentCountryCode::pfenum_ER", (int64)ESegmentCountryCode::pfenum_ER },
				{ "ESegmentCountryCode::pfenum_EE", (int64)ESegmentCountryCode::pfenum_EE },
				{ "ESegmentCountryCode::pfenum_ET", (int64)ESegmentCountryCode::pfenum_ET },
				{ "ESegmentCountryCode::pfenum_FK", (int64)ESegmentCountryCode::pfenum_FK },
				{ "ESegmentCountryCode::pfenum_FO", (int64)ESegmentCountryCode::pfenum_FO },
				{ "ESegmentCountryCode::pfenum_FJ", (int64)ESegmentCountryCode::pfenum_FJ },
				{ "ESegmentCountryCode::pfenum_FI", (int64)ESegmentCountryCode::pfenum_FI },
				{ "ESegmentCountryCode::pfenum_FR", (int64)ESegmentCountryCode::pfenum_FR },
				{ "ESegmentCountryCode::pfenum_GF", (int64)ESegmentCountryCode::pfenum_GF },
				{ "ESegmentCountryCode::pfenum_PF", (int64)ESegmentCountryCode::pfenum_PF },
				{ "ESegmentCountryCode::pfenum_TF", (int64)ESegmentCountryCode::pfenum_TF },
				{ "ESegmentCountryCode::pfenum_GA", (int64)ESegmentCountryCode::pfenum_GA },
				{ "ESegmentCountryCode::pfenum_GM", (int64)ESegmentCountryCode::pfenum_GM },
				{ "ESegmentCountryCode::pfenum_GE", (int64)ESegmentCountryCode::pfenum_GE },
				{ "ESegmentCountryCode::pfenum_DE", (int64)ESegmentCountryCode::pfenum_DE },
				{ "ESegmentCountryCode::pfenum_GH", (int64)ESegmentCountryCode::pfenum_GH },
				{ "ESegmentCountryCode::pfenum_GI", (int64)ESegmentCountryCode::pfenum_GI },
				{ "ESegmentCountryCode::pfenum_GR", (int64)ESegmentCountryCode::pfenum_GR },
				{ "ESegmentCountryCode::pfenum_GL", (int64)ESegmentCountryCode::pfenum_GL },
				{ "ESegmentCountryCode::pfenum_GD", (int64)ESegmentCountryCode::pfenum_GD },
				{ "ESegmentCountryCode::pfenum_GP", (int64)ESegmentCountryCode::pfenum_GP },
				{ "ESegmentCountryCode::pfenum_GU", (int64)ESegmentCountryCode::pfenum_GU },
				{ "ESegmentCountryCode::pfenum_GT", (int64)ESegmentCountryCode::pfenum_GT },
				{ "ESegmentCountryCode::pfenum_GG", (int64)ESegmentCountryCode::pfenum_GG },
				{ "ESegmentCountryCode::pfenum_GN", (int64)ESegmentCountryCode::pfenum_GN },
				{ "ESegmentCountryCode::pfenum_GW", (int64)ESegmentCountryCode::pfenum_GW },
				{ "ESegmentCountryCode::pfenum_GY", (int64)ESegmentCountryCode::pfenum_GY },
				{ "ESegmentCountryCode::pfenum_HT", (int64)ESegmentCountryCode::pfenum_HT },
				{ "ESegmentCountryCode::pfenum_HM", (int64)ESegmentCountryCode::pfenum_HM },
				{ "ESegmentCountryCode::pfenum_VA", (int64)ESegmentCountryCode::pfenum_VA },
				{ "ESegmentCountryCode::pfenum_HN", (int64)ESegmentCountryCode::pfenum_HN },
				{ "ESegmentCountryCode::pfenum_HK", (int64)ESegmentCountryCode::pfenum_HK },
				{ "ESegmentCountryCode::pfenum_HU", (int64)ESegmentCountryCode::pfenum_HU },
				{ "ESegmentCountryCode::pfenum_IS", (int64)ESegmentCountryCode::pfenum_IS },
				{ "ESegmentCountryCode::pfenum_IN", (int64)ESegmentCountryCode::pfenum_IN },
				{ "ESegmentCountryCode::pfenum_ID", (int64)ESegmentCountryCode::pfenum_ID },
				{ "ESegmentCountryCode::pfenum_IR", (int64)ESegmentCountryCode::pfenum_IR },
				{ "ESegmentCountryCode::pfenum_IQ", (int64)ESegmentCountryCode::pfenum_IQ },
				{ "ESegmentCountryCode::pfenum_IE", (int64)ESegmentCountryCode::pfenum_IE },
				{ "ESegmentCountryCode::pfenum_IM", (int64)ESegmentCountryCode::pfenum_IM },
				{ "ESegmentCountryCode::pfenum_IL", (int64)ESegmentCountryCode::pfenum_IL },
				{ "ESegmentCountryCode::pfenum_IT", (int64)ESegmentCountryCode::pfenum_IT },
				{ "ESegmentCountryCode::pfenum_JM", (int64)ESegmentCountryCode::pfenum_JM },
				{ "ESegmentCountryCode::pfenum_JP", (int64)ESegmentCountryCode::pfenum_JP },
				{ "ESegmentCountryCode::pfenum_JE", (int64)ESegmentCountryCode::pfenum_JE },
				{ "ESegmentCountryCode::pfenum_JO", (int64)ESegmentCountryCode::pfenum_JO },
				{ "ESegmentCountryCode::pfenum_KZ", (int64)ESegmentCountryCode::pfenum_KZ },
				{ "ESegmentCountryCode::pfenum_KE", (int64)ESegmentCountryCode::pfenum_KE },
				{ "ESegmentCountryCode::pfenum_KI", (int64)ESegmentCountryCode::pfenum_KI },
				{ "ESegmentCountryCode::pfenum_KP", (int64)ESegmentCountryCode::pfenum_KP },
				{ "ESegmentCountryCode::pfenum_KR", (int64)ESegmentCountryCode::pfenum_KR },
				{ "ESegmentCountryCode::pfenum_KW", (int64)ESegmentCountryCode::pfenum_KW },
				{ "ESegmentCountryCode::pfenum_KG", (int64)ESegmentCountryCode::pfenum_KG },
				{ "ESegmentCountryCode::pfenum_LA", (int64)ESegmentCountryCode::pfenum_LA },
				{ "ESegmentCountryCode::pfenum_LV", (int64)ESegmentCountryCode::pfenum_LV },
				{ "ESegmentCountryCode::pfenum_LB", (int64)ESegmentCountryCode::pfenum_LB },
				{ "ESegmentCountryCode::pfenum_LS", (int64)ESegmentCountryCode::pfenum_LS },
				{ "ESegmentCountryCode::pfenum_LR", (int64)ESegmentCountryCode::pfenum_LR },
				{ "ESegmentCountryCode::pfenum_LY", (int64)ESegmentCountryCode::pfenum_LY },
				{ "ESegmentCountryCode::pfenum_LI", (int64)ESegmentCountryCode::pfenum_LI },
				{ "ESegmentCountryCode::pfenum_LT", (int64)ESegmentCountryCode::pfenum_LT },
				{ "ESegmentCountryCode::pfenum_LU", (int64)ESegmentCountryCode::pfenum_LU },
				{ "ESegmentCountryCode::pfenum_MO", (int64)ESegmentCountryCode::pfenum_MO },
				{ "ESegmentCountryCode::pfenum_MK", (int64)ESegmentCountryCode::pfenum_MK },
				{ "ESegmentCountryCode::pfenum_MG", (int64)ESegmentCountryCode::pfenum_MG },
				{ "ESegmentCountryCode::pfenum_MW", (int64)ESegmentCountryCode::pfenum_MW },
				{ "ESegmentCountryCode::pfenum_MY", (int64)ESegmentCountryCode::pfenum_MY },
				{ "ESegmentCountryCode::pfenum_MV", (int64)ESegmentCountryCode::pfenum_MV },
				{ "ESegmentCountryCode::pfenum_ML", (int64)ESegmentCountryCode::pfenum_ML },
				{ "ESegmentCountryCode::pfenum_MT", (int64)ESegmentCountryCode::pfenum_MT },
				{ "ESegmentCountryCode::pfenum_MH", (int64)ESegmentCountryCode::pfenum_MH },
				{ "ESegmentCountryCode::pfenum_MQ", (int64)ESegmentCountryCode::pfenum_MQ },
				{ "ESegmentCountryCode::pfenum_MR", (int64)ESegmentCountryCode::pfenum_MR },
				{ "ESegmentCountryCode::pfenum_MU", (int64)ESegmentCountryCode::pfenum_MU },
				{ "ESegmentCountryCode::pfenum_YT", (int64)ESegmentCountryCode::pfenum_YT },
				{ "ESegmentCountryCode::pfenum_MX", (int64)ESegmentCountryCode::pfenum_MX },
				{ "ESegmentCountryCode::pfenum_FM", (int64)ESegmentCountryCode::pfenum_FM },
				{ "ESegmentCountryCode::pfenum_MD", (int64)ESegmentCountryCode::pfenum_MD },
				{ "ESegmentCountryCode::pfenum_MC", (int64)ESegmentCountryCode::pfenum_MC },
				{ "ESegmentCountryCode::pfenum_MN", (int64)ESegmentCountryCode::pfenum_MN },
				{ "ESegmentCountryCode::pfenum_ME", (int64)ESegmentCountryCode::pfenum_ME },
				{ "ESegmentCountryCode::pfenum_MS", (int64)ESegmentCountryCode::pfenum_MS },
				{ "ESegmentCountryCode::pfenum_MA", (int64)ESegmentCountryCode::pfenum_MA },
				{ "ESegmentCountryCode::pfenum_MZ", (int64)ESegmentCountryCode::pfenum_MZ },
				{ "ESegmentCountryCode::pfenum_MM", (int64)ESegmentCountryCode::pfenum_MM },
				{ "ESegmentCountryCode::pfenum_NA", (int64)ESegmentCountryCode::pfenum_NA },
				{ "ESegmentCountryCode::pfenum_NR", (int64)ESegmentCountryCode::pfenum_NR },
				{ "ESegmentCountryCode::pfenum_NP", (int64)ESegmentCountryCode::pfenum_NP },
				{ "ESegmentCountryCode::pfenum_NL", (int64)ESegmentCountryCode::pfenum_NL },
				{ "ESegmentCountryCode::pfenum_NC", (int64)ESegmentCountryCode::pfenum_NC },
				{ "ESegmentCountryCode::pfenum_NZ", (int64)ESegmentCountryCode::pfenum_NZ },
				{ "ESegmentCountryCode::pfenum_NI", (int64)ESegmentCountryCode::pfenum_NI },
				{ "ESegmentCountryCode::pfenum_NE", (int64)ESegmentCountryCode::pfenum_NE },
				{ "ESegmentCountryCode::pfenum_NG", (int64)ESegmentCountryCode::pfenum_NG },
				{ "ESegmentCountryCode::pfenum_NU", (int64)ESegmentCountryCode::pfenum_NU },
				{ "ESegmentCountryCode::pfenum_NF", (int64)ESegmentCountryCode::pfenum_NF },
				{ "ESegmentCountryCode::pfenum_MP", (int64)ESegmentCountryCode::pfenum_MP },
				{ "ESegmentCountryCode::pfenum_NO", (int64)ESegmentCountryCode::pfenum_NO },
				{ "ESegmentCountryCode::pfenum_OM", (int64)ESegmentCountryCode::pfenum_OM },
				{ "ESegmentCountryCode::pfenum_PK", (int64)ESegmentCountryCode::pfenum_PK },
				{ "ESegmentCountryCode::pfenum_PW", (int64)ESegmentCountryCode::pfenum_PW },
				{ "ESegmentCountryCode::pfenum_PS", (int64)ESegmentCountryCode::pfenum_PS },
				{ "ESegmentCountryCode::pfenum_PA", (int64)ESegmentCountryCode::pfenum_PA },
				{ "ESegmentCountryCode::pfenum_PG", (int64)ESegmentCountryCode::pfenum_PG },
				{ "ESegmentCountryCode::pfenum_PY", (int64)ESegmentCountryCode::pfenum_PY },
				{ "ESegmentCountryCode::pfenum_PE", (int64)ESegmentCountryCode::pfenum_PE },
				{ "ESegmentCountryCode::pfenum_PH", (int64)ESegmentCountryCode::pfenum_PH },
				{ "ESegmentCountryCode::pfenum_PN", (int64)ESegmentCountryCode::pfenum_PN },
				{ "ESegmentCountryCode::pfenum_PL", (int64)ESegmentCountryCode::pfenum_PL },
				{ "ESegmentCountryCode::pfenum_PT", (int64)ESegmentCountryCode::pfenum_PT },
				{ "ESegmentCountryCode::pfenum_PR", (int64)ESegmentCountryCode::pfenum_PR },
				{ "ESegmentCountryCode::pfenum_QA", (int64)ESegmentCountryCode::pfenum_QA },
				{ "ESegmentCountryCode::pfenum_RE", (int64)ESegmentCountryCode::pfenum_RE },
				{ "ESegmentCountryCode::pfenum_RO", (int64)ESegmentCountryCode::pfenum_RO },
				{ "ESegmentCountryCode::pfenum_RU", (int64)ESegmentCountryCode::pfenum_RU },
				{ "ESegmentCountryCode::pfenum_RW", (int64)ESegmentCountryCode::pfenum_RW },
				{ "ESegmentCountryCode::pfenum_BL", (int64)ESegmentCountryCode::pfenum_BL },
				{ "ESegmentCountryCode::pfenum_SH", (int64)ESegmentCountryCode::pfenum_SH },
				{ "ESegmentCountryCode::pfenum_KN", (int64)ESegmentCountryCode::pfenum_KN },
				{ "ESegmentCountryCode::pfenum_LC", (int64)ESegmentCountryCode::pfenum_LC },
				{ "ESegmentCountryCode::pfenum_MF", (int64)ESegmentCountryCode::pfenum_MF },
				{ "ESegmentCountryCode::pfenum_PM", (int64)ESegmentCountryCode::pfenum_PM },
				{ "ESegmentCountryCode::pfenum_VC", (int64)ESegmentCountryCode::pfenum_VC },
				{ "ESegmentCountryCode::pfenum_WS", (int64)ESegmentCountryCode::pfenum_WS },
				{ "ESegmentCountryCode::pfenum_SM", (int64)ESegmentCountryCode::pfenum_SM },
				{ "ESegmentCountryCode::pfenum_ST", (int64)ESegmentCountryCode::pfenum_ST },
				{ "ESegmentCountryCode::pfenum_SA", (int64)ESegmentCountryCode::pfenum_SA },
				{ "ESegmentCountryCode::pfenum_SN", (int64)ESegmentCountryCode::pfenum_SN },
				{ "ESegmentCountryCode::pfenum_RS", (int64)ESegmentCountryCode::pfenum_RS },
				{ "ESegmentCountryCode::pfenum_SC", (int64)ESegmentCountryCode::pfenum_SC },
				{ "ESegmentCountryCode::pfenum_SL", (int64)ESegmentCountryCode::pfenum_SL },
				{ "ESegmentCountryCode::pfenum_SG", (int64)ESegmentCountryCode::pfenum_SG },
				{ "ESegmentCountryCode::pfenum_SX", (int64)ESegmentCountryCode::pfenum_SX },
				{ "ESegmentCountryCode::pfenum_SK", (int64)ESegmentCountryCode::pfenum_SK },
				{ "ESegmentCountryCode::pfenum_SI", (int64)ESegmentCountryCode::pfenum_SI },
				{ "ESegmentCountryCode::pfenum_SB", (int64)ESegmentCountryCode::pfenum_SB },
				{ "ESegmentCountryCode::pfenum_SO", (int64)ESegmentCountryCode::pfenum_SO },
				{ "ESegmentCountryCode::pfenum_ZA", (int64)ESegmentCountryCode::pfenum_ZA },
				{ "ESegmentCountryCode::pfenum_GS", (int64)ESegmentCountryCode::pfenum_GS },
				{ "ESegmentCountryCode::pfenum_SS", (int64)ESegmentCountryCode::pfenum_SS },
				{ "ESegmentCountryCode::pfenum_ES", (int64)ESegmentCountryCode::pfenum_ES },
				{ "ESegmentCountryCode::pfenum_LK", (int64)ESegmentCountryCode::pfenum_LK },
				{ "ESegmentCountryCode::pfenum_SD", (int64)ESegmentCountryCode::pfenum_SD },
				{ "ESegmentCountryCode::pfenum_SR", (int64)ESegmentCountryCode::pfenum_SR },
				{ "ESegmentCountryCode::pfenum_SJ", (int64)ESegmentCountryCode::pfenum_SJ },
				{ "ESegmentCountryCode::pfenum_SZ", (int64)ESegmentCountryCode::pfenum_SZ },
				{ "ESegmentCountryCode::pfenum_SE", (int64)ESegmentCountryCode::pfenum_SE },
				{ "ESegmentCountryCode::pfenum_CH", (int64)ESegmentCountryCode::pfenum_CH },
				{ "ESegmentCountryCode::pfenum_SY", (int64)ESegmentCountryCode::pfenum_SY },
				{ "ESegmentCountryCode::pfenum_TW", (int64)ESegmentCountryCode::pfenum_TW },
				{ "ESegmentCountryCode::pfenum_TJ", (int64)ESegmentCountryCode::pfenum_TJ },
				{ "ESegmentCountryCode::pfenum_TZ", (int64)ESegmentCountryCode::pfenum_TZ },
				{ "ESegmentCountryCode::pfenum_TH", (int64)ESegmentCountryCode::pfenum_TH },
				{ "ESegmentCountryCode::pfenum_TL", (int64)ESegmentCountryCode::pfenum_TL },
				{ "ESegmentCountryCode::pfenum_TG", (int64)ESegmentCountryCode::pfenum_TG },
				{ "ESegmentCountryCode::pfenum_TK", (int64)ESegmentCountryCode::pfenum_TK },
				{ "ESegmentCountryCode::pfenum_TO", (int64)ESegmentCountryCode::pfenum_TO },
				{ "ESegmentCountryCode::pfenum_TT", (int64)ESegmentCountryCode::pfenum_TT },
				{ "ESegmentCountryCode::pfenum_TN", (int64)ESegmentCountryCode::pfenum_TN },
				{ "ESegmentCountryCode::pfenum_TR", (int64)ESegmentCountryCode::pfenum_TR },
				{ "ESegmentCountryCode::pfenum_TM", (int64)ESegmentCountryCode::pfenum_TM },
				{ "ESegmentCountryCode::pfenum_TC", (int64)ESegmentCountryCode::pfenum_TC },
				{ "ESegmentCountryCode::pfenum_TV", (int64)ESegmentCountryCode::pfenum_TV },
				{ "ESegmentCountryCode::pfenum_UG", (int64)ESegmentCountryCode::pfenum_UG },
				{ "ESegmentCountryCode::pfenum_UA", (int64)ESegmentCountryCode::pfenum_UA },
				{ "ESegmentCountryCode::pfenum_AE", (int64)ESegmentCountryCode::pfenum_AE },
				{ "ESegmentCountryCode::pfenum_GB", (int64)ESegmentCountryCode::pfenum_GB },
				{ "ESegmentCountryCode::pfenum_US", (int64)ESegmentCountryCode::pfenum_US },
				{ "ESegmentCountryCode::pfenum_UM", (int64)ESegmentCountryCode::pfenum_UM },
				{ "ESegmentCountryCode::pfenum_UY", (int64)ESegmentCountryCode::pfenum_UY },
				{ "ESegmentCountryCode::pfenum_UZ", (int64)ESegmentCountryCode::pfenum_UZ },
				{ "ESegmentCountryCode::pfenum_VU", (int64)ESegmentCountryCode::pfenum_VU },
				{ "ESegmentCountryCode::pfenum_VE", (int64)ESegmentCountryCode::pfenum_VE },
				{ "ESegmentCountryCode::pfenum_VN", (int64)ESegmentCountryCode::pfenum_VN },
				{ "ESegmentCountryCode::pfenum_VG", (int64)ESegmentCountryCode::pfenum_VG },
				{ "ESegmentCountryCode::pfenum_VI", (int64)ESegmentCountryCode::pfenum_VI },
				{ "ESegmentCountryCode::pfenum_WF", (int64)ESegmentCountryCode::pfenum_WF },
				{ "ESegmentCountryCode::pfenum_EH", (int64)ESegmentCountryCode::pfenum_EH },
				{ "ESegmentCountryCode::pfenum_YE", (int64)ESegmentCountryCode::pfenum_YE },
				{ "ESegmentCountryCode::pfenum_ZM", (int64)ESegmentCountryCode::pfenum_ZM },
				{ "ESegmentCountryCode::pfenum_ZW", (int64)ESegmentCountryCode::pfenum_ZW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** SegmentCountryCode */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AD.DisplayName", "AD" },
				{ "pfenum_AD.Name", "ESegmentCountryCode::pfenum_AD" },
				{ "pfenum_AE.DisplayName", "AE" },
				{ "pfenum_AE.Name", "ESegmentCountryCode::pfenum_AE" },
				{ "pfenum_AF.DisplayName", "AF" },
				{ "pfenum_AF.Name", "ESegmentCountryCode::pfenum_AF" },
				{ "pfenum_AG.DisplayName", "AG" },
				{ "pfenum_AG.Name", "ESegmentCountryCode::pfenum_AG" },
				{ "pfenum_AI.DisplayName", "AI" },
				{ "pfenum_AI.Name", "ESegmentCountryCode::pfenum_AI" },
				{ "pfenum_AL.DisplayName", "AL" },
				{ "pfenum_AL.Name", "ESegmentCountryCode::pfenum_AL" },
				{ "pfenum_AM.DisplayName", "AM" },
				{ "pfenum_AM.Name", "ESegmentCountryCode::pfenum_AM" },
				{ "pfenum_AO.DisplayName", "AO" },
				{ "pfenum_AO.Name", "ESegmentCountryCode::pfenum_AO" },
				{ "pfenum_AQ.DisplayName", "AQ" },
				{ "pfenum_AQ.Name", "ESegmentCountryCode::pfenum_AQ" },
				{ "pfenum_AR.DisplayName", "AR" },
				{ "pfenum_AR.Name", "ESegmentCountryCode::pfenum_AR" },
				{ "pfenum_AS.DisplayName", "AS" },
				{ "pfenum_AS.Name", "ESegmentCountryCode::pfenum_AS" },
				{ "pfenum_AT.DisplayName", "AT" },
				{ "pfenum_AT.Name", "ESegmentCountryCode::pfenum_AT" },
				{ "pfenum_AU.DisplayName", "AU" },
				{ "pfenum_AU.Name", "ESegmentCountryCode::pfenum_AU" },
				{ "pfenum_AW.DisplayName", "AW" },
				{ "pfenum_AW.Name", "ESegmentCountryCode::pfenum_AW" },
				{ "pfenum_AX.DisplayName", "AX" },
				{ "pfenum_AX.Name", "ESegmentCountryCode::pfenum_AX" },
				{ "pfenum_AZ.DisplayName", "AZ" },
				{ "pfenum_AZ.Name", "ESegmentCountryCode::pfenum_AZ" },
				{ "pfenum_BA.DisplayName", "BA" },
				{ "pfenum_BA.Name", "ESegmentCountryCode::pfenum_BA" },
				{ "pfenum_BB.DisplayName", "BB" },
				{ "pfenum_BB.Name", "ESegmentCountryCode::pfenum_BB" },
				{ "pfenum_BD.DisplayName", "BD" },
				{ "pfenum_BD.Name", "ESegmentCountryCode::pfenum_BD" },
				{ "pfenum_BE.DisplayName", "BE" },
				{ "pfenum_BE.Name", "ESegmentCountryCode::pfenum_BE" },
				{ "pfenum_BF.DisplayName", "BF" },
				{ "pfenum_BF.Name", "ESegmentCountryCode::pfenum_BF" },
				{ "pfenum_BG.DisplayName", "BG" },
				{ "pfenum_BG.Name", "ESegmentCountryCode::pfenum_BG" },
				{ "pfenum_BH.DisplayName", "BH" },
				{ "pfenum_BH.Name", "ESegmentCountryCode::pfenum_BH" },
				{ "pfenum_BI.DisplayName", "BI" },
				{ "pfenum_BI.Name", "ESegmentCountryCode::pfenum_BI" },
				{ "pfenum_BJ.DisplayName", "BJ" },
				{ "pfenum_BJ.Name", "ESegmentCountryCode::pfenum_BJ" },
				{ "pfenum_BL.DisplayName", "BL" },
				{ "pfenum_BL.Name", "ESegmentCountryCode::pfenum_BL" },
				{ "pfenum_BM.DisplayName", "BM" },
				{ "pfenum_BM.Name", "ESegmentCountryCode::pfenum_BM" },
				{ "pfenum_BN.DisplayName", "BN" },
				{ "pfenum_BN.Name", "ESegmentCountryCode::pfenum_BN" },
				{ "pfenum_BO.DisplayName", "BO" },
				{ "pfenum_BO.Name", "ESegmentCountryCode::pfenum_BO" },
				{ "pfenum_BQ.DisplayName", "BQ" },
				{ "pfenum_BQ.Name", "ESegmentCountryCode::pfenum_BQ" },
				{ "pfenum_BR.DisplayName", "BR" },
				{ "pfenum_BR.Name", "ESegmentCountryCode::pfenum_BR" },
				{ "pfenum_BS.DisplayName", "BS" },
				{ "pfenum_BS.Name", "ESegmentCountryCode::pfenum_BS" },
				{ "pfenum_BT.DisplayName", "BT" },
				{ "pfenum_BT.Name", "ESegmentCountryCode::pfenum_BT" },
				{ "pfenum_BV.DisplayName", "BV" },
				{ "pfenum_BV.Name", "ESegmentCountryCode::pfenum_BV" },
				{ "pfenum_BW.DisplayName", "BW" },
				{ "pfenum_BW.Name", "ESegmentCountryCode::pfenum_BW" },
				{ "pfenum_BY.DisplayName", "BY" },
				{ "pfenum_BY.Name", "ESegmentCountryCode::pfenum_BY" },
				{ "pfenum_BZ.DisplayName", "BZ" },
				{ "pfenum_BZ.Name", "ESegmentCountryCode::pfenum_BZ" },
				{ "pfenum_CA.DisplayName", "CA" },
				{ "pfenum_CA.Name", "ESegmentCountryCode::pfenum_CA" },
				{ "pfenum_CC.DisplayName", "CC" },
				{ "pfenum_CC.Name", "ESegmentCountryCode::pfenum_CC" },
				{ "pfenum_CD.DisplayName", "CD" },
				{ "pfenum_CD.Name", "ESegmentCountryCode::pfenum_CD" },
				{ "pfenum_CF.DisplayName", "CF" },
				{ "pfenum_CF.Name", "ESegmentCountryCode::pfenum_CF" },
				{ "pfenum_CG.DisplayName", "CG" },
				{ "pfenum_CG.Name", "ESegmentCountryCode::pfenum_CG" },
				{ "pfenum_CH.DisplayName", "CH" },
				{ "pfenum_CH.Name", "ESegmentCountryCode::pfenum_CH" },
				{ "pfenum_CI.DisplayName", "CI" },
				{ "pfenum_CI.Name", "ESegmentCountryCode::pfenum_CI" },
				{ "pfenum_CK.DisplayName", "CK" },
				{ "pfenum_CK.Name", "ESegmentCountryCode::pfenum_CK" },
				{ "pfenum_CL.DisplayName", "CL" },
				{ "pfenum_CL.Name", "ESegmentCountryCode::pfenum_CL" },
				{ "pfenum_CM.DisplayName", "CM" },
				{ "pfenum_CM.Name", "ESegmentCountryCode::pfenum_CM" },
				{ "pfenum_CN.DisplayName", "CN" },
				{ "pfenum_CN.Name", "ESegmentCountryCode::pfenum_CN" },
				{ "pfenum_CO.DisplayName", "CO" },
				{ "pfenum_CO.Name", "ESegmentCountryCode::pfenum_CO" },
				{ "pfenum_CR.DisplayName", "CR" },
				{ "pfenum_CR.Name", "ESegmentCountryCode::pfenum_CR" },
				{ "pfenum_CU.DisplayName", "CU" },
				{ "pfenum_CU.Name", "ESegmentCountryCode::pfenum_CU" },
				{ "pfenum_CV.DisplayName", "CV" },
				{ "pfenum_CV.Name", "ESegmentCountryCode::pfenum_CV" },
				{ "pfenum_CW.DisplayName", "CW" },
				{ "pfenum_CW.Name", "ESegmentCountryCode::pfenum_CW" },
				{ "pfenum_CX.DisplayName", "CX" },
				{ "pfenum_CX.Name", "ESegmentCountryCode::pfenum_CX" },
				{ "pfenum_CY.DisplayName", "CY" },
				{ "pfenum_CY.Name", "ESegmentCountryCode::pfenum_CY" },
				{ "pfenum_CZ.DisplayName", "CZ" },
				{ "pfenum_CZ.Name", "ESegmentCountryCode::pfenum_CZ" },
				{ "pfenum_DE.DisplayName", "DE" },
				{ "pfenum_DE.Name", "ESegmentCountryCode::pfenum_DE" },
				{ "pfenum_DJ.DisplayName", "DJ" },
				{ "pfenum_DJ.Name", "ESegmentCountryCode::pfenum_DJ" },
				{ "pfenum_DK.DisplayName", "DK" },
				{ "pfenum_DK.Name", "ESegmentCountryCode::pfenum_DK" },
				{ "pfenum_DM.DisplayName", "DM" },
				{ "pfenum_DM.Name", "ESegmentCountryCode::pfenum_DM" },
				{ "pfenum_DO.DisplayName", "DO" },
				{ "pfenum_DO.Name", "ESegmentCountryCode::pfenum_DO" },
				{ "pfenum_DZ.DisplayName", "DZ" },
				{ "pfenum_DZ.Name", "ESegmentCountryCode::pfenum_DZ" },
				{ "pfenum_EC.DisplayName", "EC" },
				{ "pfenum_EC.Name", "ESegmentCountryCode::pfenum_EC" },
				{ "pfenum_EE.DisplayName", "EE" },
				{ "pfenum_EE.Name", "ESegmentCountryCode::pfenum_EE" },
				{ "pfenum_EG.DisplayName", "EG" },
				{ "pfenum_EG.Name", "ESegmentCountryCode::pfenum_EG" },
				{ "pfenum_EH.DisplayName", "EH" },
				{ "pfenum_EH.Name", "ESegmentCountryCode::pfenum_EH" },
				{ "pfenum_ER.DisplayName", "ER" },
				{ "pfenum_ER.Name", "ESegmentCountryCode::pfenum_ER" },
				{ "pfenum_ES.DisplayName", "ES" },
				{ "pfenum_ES.Name", "ESegmentCountryCode::pfenum_ES" },
				{ "pfenum_ET.DisplayName", "ET" },
				{ "pfenum_ET.Name", "ESegmentCountryCode::pfenum_ET" },
				{ "pfenum_FI.DisplayName", "FI" },
				{ "pfenum_FI.Name", "ESegmentCountryCode::pfenum_FI" },
				{ "pfenum_FJ.DisplayName", "FJ" },
				{ "pfenum_FJ.Name", "ESegmentCountryCode::pfenum_FJ" },
				{ "pfenum_FK.DisplayName", "FK" },
				{ "pfenum_FK.Name", "ESegmentCountryCode::pfenum_FK" },
				{ "pfenum_FM.DisplayName", "FM" },
				{ "pfenum_FM.Name", "ESegmentCountryCode::pfenum_FM" },
				{ "pfenum_FO.DisplayName", "FO" },
				{ "pfenum_FO.Name", "ESegmentCountryCode::pfenum_FO" },
				{ "pfenum_FR.DisplayName", "FR" },
				{ "pfenum_FR.Name", "ESegmentCountryCode::pfenum_FR" },
				{ "pfenum_GA.DisplayName", "GA" },
				{ "pfenum_GA.Name", "ESegmentCountryCode::pfenum_GA" },
				{ "pfenum_GB.DisplayName", "GB" },
				{ "pfenum_GB.Name", "ESegmentCountryCode::pfenum_GB" },
				{ "pfenum_GD.DisplayName", "GD" },
				{ "pfenum_GD.Name", "ESegmentCountryCode::pfenum_GD" },
				{ "pfenum_GE.DisplayName", "GE" },
				{ "pfenum_GE.Name", "ESegmentCountryCode::pfenum_GE" },
				{ "pfenum_GF.DisplayName", "GF" },
				{ "pfenum_GF.Name", "ESegmentCountryCode::pfenum_GF" },
				{ "pfenum_GG.DisplayName", "GG" },
				{ "pfenum_GG.Name", "ESegmentCountryCode::pfenum_GG" },
				{ "pfenum_GH.DisplayName", "GH" },
				{ "pfenum_GH.Name", "ESegmentCountryCode::pfenum_GH" },
				{ "pfenum_GI.DisplayName", "GI" },
				{ "pfenum_GI.Name", "ESegmentCountryCode::pfenum_GI" },
				{ "pfenum_GL.DisplayName", "GL" },
				{ "pfenum_GL.Name", "ESegmentCountryCode::pfenum_GL" },
				{ "pfenum_GM.DisplayName", "GM" },
				{ "pfenum_GM.Name", "ESegmentCountryCode::pfenum_GM" },
				{ "pfenum_GN.DisplayName", "GN" },
				{ "pfenum_GN.Name", "ESegmentCountryCode::pfenum_GN" },
				{ "pfenum_GP.DisplayName", "GP" },
				{ "pfenum_GP.Name", "ESegmentCountryCode::pfenum_GP" },
				{ "pfenum_GQ.DisplayName", "GQ" },
				{ "pfenum_GQ.Name", "ESegmentCountryCode::pfenum_GQ" },
				{ "pfenum_GR.DisplayName", "GR" },
				{ "pfenum_GR.Name", "ESegmentCountryCode::pfenum_GR" },
				{ "pfenum_GS.DisplayName", "GS" },
				{ "pfenum_GS.Name", "ESegmentCountryCode::pfenum_GS" },
				{ "pfenum_GT.DisplayName", "GT" },
				{ "pfenum_GT.Name", "ESegmentCountryCode::pfenum_GT" },
				{ "pfenum_GU.DisplayName", "GU" },
				{ "pfenum_GU.Name", "ESegmentCountryCode::pfenum_GU" },
				{ "pfenum_GW.DisplayName", "GW" },
				{ "pfenum_GW.Name", "ESegmentCountryCode::pfenum_GW" },
				{ "pfenum_GY.DisplayName", "GY" },
				{ "pfenum_GY.Name", "ESegmentCountryCode::pfenum_GY" },
				{ "pfenum_HK.DisplayName", "HK" },
				{ "pfenum_HK.Name", "ESegmentCountryCode::pfenum_HK" },
				{ "pfenum_HM.DisplayName", "HM" },
				{ "pfenum_HM.Name", "ESegmentCountryCode::pfenum_HM" },
				{ "pfenum_HN.DisplayName", "HN" },
				{ "pfenum_HN.Name", "ESegmentCountryCode::pfenum_HN" },
				{ "pfenum_HR.DisplayName", "HR" },
				{ "pfenum_HR.Name", "ESegmentCountryCode::pfenum_HR" },
				{ "pfenum_HT.DisplayName", "HT" },
				{ "pfenum_HT.Name", "ESegmentCountryCode::pfenum_HT" },
				{ "pfenum_HU.DisplayName", "HU" },
				{ "pfenum_HU.Name", "ESegmentCountryCode::pfenum_HU" },
				{ "pfenum_ID.DisplayName", "ID" },
				{ "pfenum_ID.Name", "ESegmentCountryCode::pfenum_ID" },
				{ "pfenum_IE.DisplayName", "IE" },
				{ "pfenum_IE.Name", "ESegmentCountryCode::pfenum_IE" },
				{ "pfenum_IL.DisplayName", "IL" },
				{ "pfenum_IL.Name", "ESegmentCountryCode::pfenum_IL" },
				{ "pfenum_IM.DisplayName", "IM" },
				{ "pfenum_IM.Name", "ESegmentCountryCode::pfenum_IM" },
				{ "pfenum_IN.DisplayName", "IN" },
				{ "pfenum_IN.Name", "ESegmentCountryCode::pfenum_IN" },
				{ "pfenum_IO.DisplayName", "IO" },
				{ "pfenum_IO.Name", "ESegmentCountryCode::pfenum_IO" },
				{ "pfenum_IQ.DisplayName", "IQ" },
				{ "pfenum_IQ.Name", "ESegmentCountryCode::pfenum_IQ" },
				{ "pfenum_IR.DisplayName", "IR" },
				{ "pfenum_IR.Name", "ESegmentCountryCode::pfenum_IR" },
				{ "pfenum_IS.DisplayName", "IS" },
				{ "pfenum_IS.Name", "ESegmentCountryCode::pfenum_IS" },
				{ "pfenum_IT.DisplayName", "IT" },
				{ "pfenum_IT.Name", "ESegmentCountryCode::pfenum_IT" },
				{ "pfenum_JE.DisplayName", "JE" },
				{ "pfenum_JE.Name", "ESegmentCountryCode::pfenum_JE" },
				{ "pfenum_JM.DisplayName", "JM" },
				{ "pfenum_JM.Name", "ESegmentCountryCode::pfenum_JM" },
				{ "pfenum_JO.DisplayName", "JO" },
				{ "pfenum_JO.Name", "ESegmentCountryCode::pfenum_JO" },
				{ "pfenum_JP.DisplayName", "JP" },
				{ "pfenum_JP.Name", "ESegmentCountryCode::pfenum_JP" },
				{ "pfenum_KE.DisplayName", "KE" },
				{ "pfenum_KE.Name", "ESegmentCountryCode::pfenum_KE" },
				{ "pfenum_KG.DisplayName", "KG" },
				{ "pfenum_KG.Name", "ESegmentCountryCode::pfenum_KG" },
				{ "pfenum_KH.DisplayName", "KH" },
				{ "pfenum_KH.Name", "ESegmentCountryCode::pfenum_KH" },
				{ "pfenum_KI.DisplayName", "KI" },
				{ "pfenum_KI.Name", "ESegmentCountryCode::pfenum_KI" },
				{ "pfenum_KM.DisplayName", "KM" },
				{ "pfenum_KM.Name", "ESegmentCountryCode::pfenum_KM" },
				{ "pfenum_KN.DisplayName", "KN" },
				{ "pfenum_KN.Name", "ESegmentCountryCode::pfenum_KN" },
				{ "pfenum_KP.DisplayName", "KP" },
				{ "pfenum_KP.Name", "ESegmentCountryCode::pfenum_KP" },
				{ "pfenum_KR.DisplayName", "KR" },
				{ "pfenum_KR.Name", "ESegmentCountryCode::pfenum_KR" },
				{ "pfenum_KW.DisplayName", "KW" },
				{ "pfenum_KW.Name", "ESegmentCountryCode::pfenum_KW" },
				{ "pfenum_KY.DisplayName", "KY" },
				{ "pfenum_KY.Name", "ESegmentCountryCode::pfenum_KY" },
				{ "pfenum_KZ.DisplayName", "KZ" },
				{ "pfenum_KZ.Name", "ESegmentCountryCode::pfenum_KZ" },
				{ "pfenum_LA.DisplayName", "LA" },
				{ "pfenum_LA.Name", "ESegmentCountryCode::pfenum_LA" },
				{ "pfenum_LB.DisplayName", "LB" },
				{ "pfenum_LB.Name", "ESegmentCountryCode::pfenum_LB" },
				{ "pfenum_LC.DisplayName", "LC" },
				{ "pfenum_LC.Name", "ESegmentCountryCode::pfenum_LC" },
				{ "pfenum_LI.DisplayName", "LI" },
				{ "pfenum_LI.Name", "ESegmentCountryCode::pfenum_LI" },
				{ "pfenum_LK.DisplayName", "LK" },
				{ "pfenum_LK.Name", "ESegmentCountryCode::pfenum_LK" },
				{ "pfenum_LR.DisplayName", "LR" },
				{ "pfenum_LR.Name", "ESegmentCountryCode::pfenum_LR" },
				{ "pfenum_LS.DisplayName", "LS" },
				{ "pfenum_LS.Name", "ESegmentCountryCode::pfenum_LS" },
				{ "pfenum_LT.DisplayName", "LT" },
				{ "pfenum_LT.Name", "ESegmentCountryCode::pfenum_LT" },
				{ "pfenum_LU.DisplayName", "LU" },
				{ "pfenum_LU.Name", "ESegmentCountryCode::pfenum_LU" },
				{ "pfenum_LV.DisplayName", "LV" },
				{ "pfenum_LV.Name", "ESegmentCountryCode::pfenum_LV" },
				{ "pfenum_LY.DisplayName", "LY" },
				{ "pfenum_LY.Name", "ESegmentCountryCode::pfenum_LY" },
				{ "pfenum_MA.DisplayName", "MA" },
				{ "pfenum_MA.Name", "ESegmentCountryCode::pfenum_MA" },
				{ "pfenum_MC.DisplayName", "MC" },
				{ "pfenum_MC.Name", "ESegmentCountryCode::pfenum_MC" },
				{ "pfenum_MD.DisplayName", "MD" },
				{ "pfenum_MD.Name", "ESegmentCountryCode::pfenum_MD" },
				{ "pfenum_ME.DisplayName", "ME" },
				{ "pfenum_ME.Name", "ESegmentCountryCode::pfenum_ME" },
				{ "pfenum_MF.DisplayName", "MF" },
				{ "pfenum_MF.Name", "ESegmentCountryCode::pfenum_MF" },
				{ "pfenum_MG.DisplayName", "MG" },
				{ "pfenum_MG.Name", "ESegmentCountryCode::pfenum_MG" },
				{ "pfenum_MH.DisplayName", "MH" },
				{ "pfenum_MH.Name", "ESegmentCountryCode::pfenum_MH" },
				{ "pfenum_MK.DisplayName", "MK" },
				{ "pfenum_MK.Name", "ESegmentCountryCode::pfenum_MK" },
				{ "pfenum_ML.DisplayName", "ML" },
				{ "pfenum_ML.Name", "ESegmentCountryCode::pfenum_ML" },
				{ "pfenum_MM.DisplayName", "MM" },
				{ "pfenum_MM.Name", "ESegmentCountryCode::pfenum_MM" },
				{ "pfenum_MN.DisplayName", "MN" },
				{ "pfenum_MN.Name", "ESegmentCountryCode::pfenum_MN" },
				{ "pfenum_MO.DisplayName", "MO" },
				{ "pfenum_MO.Name", "ESegmentCountryCode::pfenum_MO" },
				{ "pfenum_MP.DisplayName", "MP" },
				{ "pfenum_MP.Name", "ESegmentCountryCode::pfenum_MP" },
				{ "pfenum_MQ.DisplayName", "MQ" },
				{ "pfenum_MQ.Name", "ESegmentCountryCode::pfenum_MQ" },
				{ "pfenum_MR.DisplayName", "MR" },
				{ "pfenum_MR.Name", "ESegmentCountryCode::pfenum_MR" },
				{ "pfenum_MS.DisplayName", "MS" },
				{ "pfenum_MS.Name", "ESegmentCountryCode::pfenum_MS" },
				{ "pfenum_MT.DisplayName", "MT" },
				{ "pfenum_MT.Name", "ESegmentCountryCode::pfenum_MT" },
				{ "pfenum_MU.DisplayName", "MU" },
				{ "pfenum_MU.Name", "ESegmentCountryCode::pfenum_MU" },
				{ "pfenum_MV.DisplayName", "MV" },
				{ "pfenum_MV.Name", "ESegmentCountryCode::pfenum_MV" },
				{ "pfenum_MW.DisplayName", "MW" },
				{ "pfenum_MW.Name", "ESegmentCountryCode::pfenum_MW" },
				{ "pfenum_MX.DisplayName", "MX" },
				{ "pfenum_MX.Name", "ESegmentCountryCode::pfenum_MX" },
				{ "pfenum_MY.DisplayName", "MY" },
				{ "pfenum_MY.Name", "ESegmentCountryCode::pfenum_MY" },
				{ "pfenum_MZ.DisplayName", "MZ" },
				{ "pfenum_MZ.Name", "ESegmentCountryCode::pfenum_MZ" },
				{ "pfenum_NA.DisplayName", "NA" },
				{ "pfenum_NA.Name", "ESegmentCountryCode::pfenum_NA" },
				{ "pfenum_NC.DisplayName", "NC" },
				{ "pfenum_NC.Name", "ESegmentCountryCode::pfenum_NC" },
				{ "pfenum_NE.DisplayName", "NE" },
				{ "pfenum_NE.Name", "ESegmentCountryCode::pfenum_NE" },
				{ "pfenum_NF.DisplayName", "NF" },
				{ "pfenum_NF.Name", "ESegmentCountryCode::pfenum_NF" },
				{ "pfenum_NG.DisplayName", "NG" },
				{ "pfenum_NG.Name", "ESegmentCountryCode::pfenum_NG" },
				{ "pfenum_NI.DisplayName", "NI" },
				{ "pfenum_NI.Name", "ESegmentCountryCode::pfenum_NI" },
				{ "pfenum_NL.DisplayName", "NL" },
				{ "pfenum_NL.Name", "ESegmentCountryCode::pfenum_NL" },
				{ "pfenum_NO.DisplayName", "NO" },
				{ "pfenum_NO.Name", "ESegmentCountryCode::pfenum_NO" },
				{ "pfenum_NP.DisplayName", "NP" },
				{ "pfenum_NP.Name", "ESegmentCountryCode::pfenum_NP" },
				{ "pfenum_NR.DisplayName", "NR" },
				{ "pfenum_NR.Name", "ESegmentCountryCode::pfenum_NR" },
				{ "pfenum_NU.DisplayName", "NU" },
				{ "pfenum_NU.Name", "ESegmentCountryCode::pfenum_NU" },
				{ "pfenum_NZ.DisplayName", "NZ" },
				{ "pfenum_NZ.Name", "ESegmentCountryCode::pfenum_NZ" },
				{ "pfenum_OM.DisplayName", "OM" },
				{ "pfenum_OM.Name", "ESegmentCountryCode::pfenum_OM" },
				{ "pfenum_PA.DisplayName", "PA" },
				{ "pfenum_PA.Name", "ESegmentCountryCode::pfenum_PA" },
				{ "pfenum_PE.DisplayName", "PE" },
				{ "pfenum_PE.Name", "ESegmentCountryCode::pfenum_PE" },
				{ "pfenum_PF.DisplayName", "PF" },
				{ "pfenum_PF.Name", "ESegmentCountryCode::pfenum_PF" },
				{ "pfenum_PG.DisplayName", "PG" },
				{ "pfenum_PG.Name", "ESegmentCountryCode::pfenum_PG" },
				{ "pfenum_PH.DisplayName", "PH" },
				{ "pfenum_PH.Name", "ESegmentCountryCode::pfenum_PH" },
				{ "pfenum_PK.DisplayName", "PK" },
				{ "pfenum_PK.Name", "ESegmentCountryCode::pfenum_PK" },
				{ "pfenum_PL.DisplayName", "PL" },
				{ "pfenum_PL.Name", "ESegmentCountryCode::pfenum_PL" },
				{ "pfenum_PM.DisplayName", "PM" },
				{ "pfenum_PM.Name", "ESegmentCountryCode::pfenum_PM" },
				{ "pfenum_PN.DisplayName", "PN" },
				{ "pfenum_PN.Name", "ESegmentCountryCode::pfenum_PN" },
				{ "pfenum_PR.DisplayName", "PR" },
				{ "pfenum_PR.Name", "ESegmentCountryCode::pfenum_PR" },
				{ "pfenum_PS.DisplayName", "PS" },
				{ "pfenum_PS.Name", "ESegmentCountryCode::pfenum_PS" },
				{ "pfenum_PT.DisplayName", "PT" },
				{ "pfenum_PT.Name", "ESegmentCountryCode::pfenum_PT" },
				{ "pfenum_PW.DisplayName", "PW" },
				{ "pfenum_PW.Name", "ESegmentCountryCode::pfenum_PW" },
				{ "pfenum_PY.DisplayName", "PY" },
				{ "pfenum_PY.Name", "ESegmentCountryCode::pfenum_PY" },
				{ "pfenum_QA.DisplayName", "QA" },
				{ "pfenum_QA.Name", "ESegmentCountryCode::pfenum_QA" },
				{ "pfenum_RE.DisplayName", "RE" },
				{ "pfenum_RE.Name", "ESegmentCountryCode::pfenum_RE" },
				{ "pfenum_RO.DisplayName", "RO" },
				{ "pfenum_RO.Name", "ESegmentCountryCode::pfenum_RO" },
				{ "pfenum_RS.DisplayName", "RS" },
				{ "pfenum_RS.Name", "ESegmentCountryCode::pfenum_RS" },
				{ "pfenum_RU.DisplayName", "RU" },
				{ "pfenum_RU.Name", "ESegmentCountryCode::pfenum_RU" },
				{ "pfenum_RW.DisplayName", "RW" },
				{ "pfenum_RW.Name", "ESegmentCountryCode::pfenum_RW" },
				{ "pfenum_SA.DisplayName", "SA" },
				{ "pfenum_SA.Name", "ESegmentCountryCode::pfenum_SA" },
				{ "pfenum_SB.DisplayName", "SB" },
				{ "pfenum_SB.Name", "ESegmentCountryCode::pfenum_SB" },
				{ "pfenum_SC.DisplayName", "SC" },
				{ "pfenum_SC.Name", "ESegmentCountryCode::pfenum_SC" },
				{ "pfenum_SD.DisplayName", "SD" },
				{ "pfenum_SD.Name", "ESegmentCountryCode::pfenum_SD" },
				{ "pfenum_SE.DisplayName", "SE" },
				{ "pfenum_SE.Name", "ESegmentCountryCode::pfenum_SE" },
				{ "pfenum_SG.DisplayName", "SG" },
				{ "pfenum_SG.Name", "ESegmentCountryCode::pfenum_SG" },
				{ "pfenum_SH.DisplayName", "SH" },
				{ "pfenum_SH.Name", "ESegmentCountryCode::pfenum_SH" },
				{ "pfenum_SI.DisplayName", "SI" },
				{ "pfenum_SI.Name", "ESegmentCountryCode::pfenum_SI" },
				{ "pfenum_SJ.DisplayName", "SJ" },
				{ "pfenum_SJ.Name", "ESegmentCountryCode::pfenum_SJ" },
				{ "pfenum_SK.DisplayName", "SK" },
				{ "pfenum_SK.Name", "ESegmentCountryCode::pfenum_SK" },
				{ "pfenum_SL.DisplayName", "SL" },
				{ "pfenum_SL.Name", "ESegmentCountryCode::pfenum_SL" },
				{ "pfenum_SM.DisplayName", "SM" },
				{ "pfenum_SM.Name", "ESegmentCountryCode::pfenum_SM" },
				{ "pfenum_SN.DisplayName", "SN" },
				{ "pfenum_SN.Name", "ESegmentCountryCode::pfenum_SN" },
				{ "pfenum_SO.DisplayName", "SO" },
				{ "pfenum_SO.Name", "ESegmentCountryCode::pfenum_SO" },
				{ "pfenum_SR.DisplayName", "SR" },
				{ "pfenum_SR.Name", "ESegmentCountryCode::pfenum_SR" },
				{ "pfenum_SS.DisplayName", "SS" },
				{ "pfenum_SS.Name", "ESegmentCountryCode::pfenum_SS" },
				{ "pfenum_ST.DisplayName", "ST" },
				{ "pfenum_ST.Name", "ESegmentCountryCode::pfenum_ST" },
				{ "pfenum_SV.DisplayName", "SV" },
				{ "pfenum_SV.Name", "ESegmentCountryCode::pfenum_SV" },
				{ "pfenum_SX.DisplayName", "SX" },
				{ "pfenum_SX.Name", "ESegmentCountryCode::pfenum_SX" },
				{ "pfenum_SY.DisplayName", "SY" },
				{ "pfenum_SY.Name", "ESegmentCountryCode::pfenum_SY" },
				{ "pfenum_SZ.DisplayName", "SZ" },
				{ "pfenum_SZ.Name", "ESegmentCountryCode::pfenum_SZ" },
				{ "pfenum_TC.DisplayName", "TC" },
				{ "pfenum_TC.Name", "ESegmentCountryCode::pfenum_TC" },
				{ "pfenum_TD.DisplayName", "TD" },
				{ "pfenum_TD.Name", "ESegmentCountryCode::pfenum_TD" },
				{ "pfenum_TF.DisplayName", "TF" },
				{ "pfenum_TF.Name", "ESegmentCountryCode::pfenum_TF" },
				{ "pfenum_TG.DisplayName", "TG" },
				{ "pfenum_TG.Name", "ESegmentCountryCode::pfenum_TG" },
				{ "pfenum_TH.DisplayName", "TH" },
				{ "pfenum_TH.Name", "ESegmentCountryCode::pfenum_TH" },
				{ "pfenum_TJ.DisplayName", "TJ" },
				{ "pfenum_TJ.Name", "ESegmentCountryCode::pfenum_TJ" },
				{ "pfenum_TK.DisplayName", "TK" },
				{ "pfenum_TK.Name", "ESegmentCountryCode::pfenum_TK" },
				{ "pfenum_TL.DisplayName", "TL" },
				{ "pfenum_TL.Name", "ESegmentCountryCode::pfenum_TL" },
				{ "pfenum_TM.DisplayName", "TM" },
				{ "pfenum_TM.Name", "ESegmentCountryCode::pfenum_TM" },
				{ "pfenum_TN.DisplayName", "TN" },
				{ "pfenum_TN.Name", "ESegmentCountryCode::pfenum_TN" },
				{ "pfenum_TO.DisplayName", "TO" },
				{ "pfenum_TO.Name", "ESegmentCountryCode::pfenum_TO" },
				{ "pfenum_TR.DisplayName", "TR" },
				{ "pfenum_TR.Name", "ESegmentCountryCode::pfenum_TR" },
				{ "pfenum_TT.DisplayName", "TT" },
				{ "pfenum_TT.Name", "ESegmentCountryCode::pfenum_TT" },
				{ "pfenum_TV.DisplayName", "TV" },
				{ "pfenum_TV.Name", "ESegmentCountryCode::pfenum_TV" },
				{ "pfenum_TW.DisplayName", "TW" },
				{ "pfenum_TW.Name", "ESegmentCountryCode::pfenum_TW" },
				{ "pfenum_TZ.DisplayName", "TZ" },
				{ "pfenum_TZ.Name", "ESegmentCountryCode::pfenum_TZ" },
				{ "pfenum_UA.DisplayName", "UA" },
				{ "pfenum_UA.Name", "ESegmentCountryCode::pfenum_UA" },
				{ "pfenum_UG.DisplayName", "UG" },
				{ "pfenum_UG.Name", "ESegmentCountryCode::pfenum_UG" },
				{ "pfenum_UM.DisplayName", "UM" },
				{ "pfenum_UM.Name", "ESegmentCountryCode::pfenum_UM" },
				{ "pfenum_US.DisplayName", "US" },
				{ "pfenum_US.Name", "ESegmentCountryCode::pfenum_US" },
				{ "pfenum_UY.DisplayName", "UY" },
				{ "pfenum_UY.Name", "ESegmentCountryCode::pfenum_UY" },
				{ "pfenum_UZ.DisplayName", "UZ" },
				{ "pfenum_UZ.Name", "ESegmentCountryCode::pfenum_UZ" },
				{ "pfenum_VA.DisplayName", "VA" },
				{ "pfenum_VA.Name", "ESegmentCountryCode::pfenum_VA" },
				{ "pfenum_VC.DisplayName", "VC" },
				{ "pfenum_VC.Name", "ESegmentCountryCode::pfenum_VC" },
				{ "pfenum_VE.DisplayName", "VE" },
				{ "pfenum_VE.Name", "ESegmentCountryCode::pfenum_VE" },
				{ "pfenum_VG.DisplayName", "VG" },
				{ "pfenum_VG.Name", "ESegmentCountryCode::pfenum_VG" },
				{ "pfenum_VI.DisplayName", "VI" },
				{ "pfenum_VI.Name", "ESegmentCountryCode::pfenum_VI" },
				{ "pfenum_VN.DisplayName", "VN" },
				{ "pfenum_VN.Name", "ESegmentCountryCode::pfenum_VN" },
				{ "pfenum_VU.DisplayName", "VU" },
				{ "pfenum_VU.Name", "ESegmentCountryCode::pfenum_VU" },
				{ "pfenum_WF.DisplayName", "WF" },
				{ "pfenum_WF.Name", "ESegmentCountryCode::pfenum_WF" },
				{ "pfenum_WS.DisplayName", "WS" },
				{ "pfenum_WS.Name", "ESegmentCountryCode::pfenum_WS" },
				{ "pfenum_YE.DisplayName", "YE" },
				{ "pfenum_YE.Name", "ESegmentCountryCode::pfenum_YE" },
				{ "pfenum_YT.DisplayName", "YT" },
				{ "pfenum_YT.Name", "ESegmentCountryCode::pfenum_YT" },
				{ "pfenum_ZA.DisplayName", "ZA" },
				{ "pfenum_ZA.Name", "ESegmentCountryCode::pfenum_ZA" },
				{ "pfenum_ZM.DisplayName", "ZM" },
				{ "pfenum_ZM.Name", "ESegmentCountryCode::pfenum_ZM" },
				{ "pfenum_ZW.DisplayName", "ZW" },
				{ "pfenum_ZW.Name", "ESegmentCountryCode::pfenum_ZW" },
				{ "ToolTip", "SegmentCountryCode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentCountryCode",
				"ESegmentCountryCode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EScheduledTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EScheduledTaskType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EScheduledTaskType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EScheduledTaskType>()
	{
		return EScheduledTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScheduledTaskType(EScheduledTaskType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EScheduledTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EScheduledTaskType_Hash() { return 94904995U; }
	UEnum* Z_Construct_UEnum_PlayFab_EScheduledTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScheduledTaskType"), 0, Get_Z_Construct_UEnum_PlayFab_EScheduledTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScheduledTaskType::pfenum_CloudScript", (int64)EScheduledTaskType::pfenum_CloudScript },
				{ "EScheduledTaskType::pfenum_ActionsOnPlayerSegment", (int64)EScheduledTaskType::pfenum_ActionsOnPlayerSegment },
				{ "EScheduledTaskType::pfenum_CloudScriptAzureFunctions", (int64)EScheduledTaskType::pfenum_CloudScriptAzureFunctions },
				{ "EScheduledTaskType::pfenum_InsightsScheduledScaling", (int64)EScheduledTaskType::pfenum_InsightsScheduledScaling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ScheduledTaskType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_ActionsOnPlayerSegment.DisplayName", "ActionsOnPlayerSegment" },
				{ "pfenum_ActionsOnPlayerSegment.Name", "EScheduledTaskType::pfenum_ActionsOnPlayerSegment" },
				{ "pfenum_CloudScript.DisplayName", "CloudScript" },
				{ "pfenum_CloudScript.Name", "EScheduledTaskType::pfenum_CloudScript" },
				{ "pfenum_CloudScriptAzureFunctions.DisplayName", "CloudScriptAzureFunctions" },
				{ "pfenum_CloudScriptAzureFunctions.Name", "EScheduledTaskType::pfenum_CloudScriptAzureFunctions" },
				{ "pfenum_InsightsScheduledScaling.DisplayName", "InsightsScheduledScaling" },
				{ "pfenum_InsightsScheduledScaling.Name", "EScheduledTaskType::pfenum_InsightsScheduledScaling" },
				{ "ToolTip", "ScheduledTaskType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EScheduledTaskType",
				"EScheduledTaskType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EResultTableNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EResultTableNodeType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EResultTableNodeType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EResultTableNodeType>()
	{
		return EResultTableNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResultTableNodeType(EResultTableNodeType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EResultTableNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EResultTableNodeType_Hash() { return 1347500594U; }
	UEnum* Z_Construct_UEnum_PlayFab_EResultTableNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResultTableNodeType"), 0, Get_Z_Construct_UEnum_PlayFab_EResultTableNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResultTableNodeType::pfenum_ItemId", (int64)EResultTableNodeType::pfenum_ItemId },
				{ "EResultTableNodeType::pfenum_TableId", (int64)EResultTableNodeType::pfenum_TableId },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ResultTableNodeType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_ItemId.DisplayName", "ItemId" },
				{ "pfenum_ItemId.Name", "EResultTableNodeType::pfenum_ItemId" },
				{ "pfenum_TableId.DisplayName", "TableId" },
				{ "pfenum_TableId.Name", "EResultTableNodeType::pfenum_TableId" },
				{ "ToolTip", "ResultTableNodeType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EResultTableNodeType",
				"EResultTableNodeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EResolutionOutcome_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EResolutionOutcome, Z_Construct_UPackage__Script_PlayFab(), TEXT("EResolutionOutcome"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EResolutionOutcome>()
	{
		return EResolutionOutcome_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResolutionOutcome(EResolutionOutcome_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EResolutionOutcome"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EResolutionOutcome_Hash() { return 3081925910U; }
	UEnum* Z_Construct_UEnum_PlayFab_EResolutionOutcome()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResolutionOutcome"), 0, Get_Z_Construct_UEnum_PlayFab_EResolutionOutcome_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResolutionOutcome::pfenum_Revoke", (int64)EResolutionOutcome::pfenum_Revoke },
				{ "EResolutionOutcome::pfenum_Reinstate", (int64)EResolutionOutcome::pfenum_Reinstate },
				{ "EResolutionOutcome::pfenum_Manual", (int64)EResolutionOutcome::pfenum_Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ResolutionOutcome */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Manual.DisplayName", "Manual" },
				{ "pfenum_Manual.Name", "EResolutionOutcome::pfenum_Manual" },
				{ "pfenum_Reinstate.DisplayName", "Reinstate" },
				{ "pfenum_Reinstate.Name", "EResolutionOutcome::pfenum_Reinstate" },
				{ "pfenum_Revoke.DisplayName", "Revoke" },
				{ "pfenum_Revoke.Name", "EResolutionOutcome::pfenum_Revoke" },
				{ "ToolTip", "ResolutionOutcome" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EResolutionOutcome",
				"EResolutionOutcome",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERegion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ERegion, Z_Construct_UPackage__Script_PlayFab(), TEXT("ERegion"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ERegion>()
	{
		return ERegion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERegion(ERegion_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ERegion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ERegion_Hash() { return 786959127U; }
	UEnum* Z_Construct_UEnum_PlayFab_ERegion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERegion"), 0, Get_Z_Construct_UEnum_PlayFab_ERegion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERegion::pfenum_USCentral", (int64)ERegion::pfenum_USCentral },
				{ "ERegion::pfenum_USEast", (int64)ERegion::pfenum_USEast },
				{ "ERegion::pfenum_EUWest", (int64)ERegion::pfenum_EUWest },
				{ "ERegion::pfenum_Singapore", (int64)ERegion::pfenum_Singapore },
				{ "ERegion::pfenum_Japan", (int64)ERegion::pfenum_Japan },
				{ "ERegion::pfenum_Brazil", (int64)ERegion::pfenum_Brazil },
				{ "ERegion::pfenum_Australia", (int64)ERegion::pfenum_Australia },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Region */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Australia.DisplayName", "Australia" },
				{ "pfenum_Australia.Name", "ERegion::pfenum_Australia" },
				{ "pfenum_Brazil.DisplayName", "Brazil" },
				{ "pfenum_Brazil.Name", "ERegion::pfenum_Brazil" },
				{ "pfenum_EUWest.DisplayName", "EUWest" },
				{ "pfenum_EUWest.Name", "ERegion::pfenum_EUWest" },
				{ "pfenum_Japan.DisplayName", "Japan" },
				{ "pfenum_Japan.Name", "ERegion::pfenum_Japan" },
				{ "pfenum_Singapore.DisplayName", "Singapore" },
				{ "pfenum_Singapore.Name", "ERegion::pfenum_Singapore" },
				{ "pfenum_USCentral.DisplayName", "USCentral" },
				{ "pfenum_USCentral.Name", "ERegion::pfenum_USCentral" },
				{ "pfenum_USEast.DisplayName", "USEast" },
				{ "pfenum_USEast.Name", "ERegion::pfenum_USEast" },
				{ "ToolTip", "Region" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ERegion",
				"ERegion",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPushSetupPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPushSetupPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPushSetupPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPushSetupPlatform>()
	{
		return EPushSetupPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPushSetupPlatform(EPushSetupPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPushSetupPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPushSetupPlatform_Hash() { return 3145778699U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPushSetupPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPushSetupPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EPushSetupPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPushSetupPlatform::pfenum_GCM", (int64)EPushSetupPlatform::pfenum_GCM },
				{ "EPushSetupPlatform::pfenum_APNS", (int64)EPushSetupPlatform::pfenum_APNS },
				{ "EPushSetupPlatform::pfenum_APNS_SANDBOX", (int64)EPushSetupPlatform::pfenum_APNS_SANDBOX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** PushSetupPlatform */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_APNS.DisplayName", "APNS" },
				{ "pfenum_APNS.Name", "EPushSetupPlatform::pfenum_APNS" },
				{ "pfenum_APNS_SANDBOX.DisplayName", "APNS_SANDBOX" },
				{ "pfenum_APNS_SANDBOX.Name", "EPushSetupPlatform::pfenum_APNS_SANDBOX" },
				{ "pfenum_GCM.DisplayName", "GCM" },
				{ "pfenum_GCM.Name", "EPushSetupPlatform::pfenum_GCM" },
				{ "ToolTip", "PushSetupPlatform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPushSetupPlatform",
				"EPushSetupPlatform",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPushNotificationPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPushNotificationPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPushNotificationPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPushNotificationPlatform>()
	{
		return EPushNotificationPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPushNotificationPlatform(EPushNotificationPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPushNotificationPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPushNotificationPlatform_Hash() { return 2133419447U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPushNotificationPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPushNotificationPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EPushNotificationPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPushNotificationPlatform::pfenum_ApplePushNotificationService", (int64)EPushNotificationPlatform::pfenum_ApplePushNotificationService },
				{ "EPushNotificationPlatform::pfenum_GoogleCloudMessaging", (int64)EPushNotificationPlatform::pfenum_GoogleCloudMessaging },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** PushNotificationPlatform */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_ApplePushNotificationService.DisplayName", "ApplePushNotificationService" },
				{ "pfenum_ApplePushNotificationService.Name", "EPushNotificationPlatform::pfenum_ApplePushNotificationService" },
				{ "pfenum_GoogleCloudMessaging.DisplayName", "GoogleCloudMessaging" },
				{ "pfenum_GoogleCloudMessaging.Name", "EPushNotificationPlatform::pfenum_GoogleCloudMessaging" },
				{ "ToolTip", "PushNotificationPlatform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPushNotificationPlatform",
				"EPushNotificationPlatform",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELoginIdentityProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ELoginIdentityProvider, Z_Construct_UPackage__Script_PlayFab(), TEXT("ELoginIdentityProvider"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ELoginIdentityProvider>()
	{
		return ELoginIdentityProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoginIdentityProvider(ELoginIdentityProvider_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ELoginIdentityProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ELoginIdentityProvider_Hash() { return 2656606991U; }
	UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoginIdentityProvider"), 0, Get_Z_Construct_UEnum_PlayFab_ELoginIdentityProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoginIdentityProvider::pfenum_Unknown", (int64)ELoginIdentityProvider::pfenum_Unknown },
				{ "ELoginIdentityProvider::pfenum_PlayFab", (int64)ELoginIdentityProvider::pfenum_PlayFab },
				{ "ELoginIdentityProvider::pfenum_Custom", (int64)ELoginIdentityProvider::pfenum_Custom },
				{ "ELoginIdentityProvider::pfenum_GameCenter", (int64)ELoginIdentityProvider::pfenum_GameCenter },
				{ "ELoginIdentityProvider::pfenum_GooglePlay", (int64)ELoginIdentityProvider::pfenum_GooglePlay },
				{ "ELoginIdentityProvider::pfenum_Steam", (int64)ELoginIdentityProvider::pfenum_Steam },
				{ "ELoginIdentityProvider::pfenum_XBoxLive", (int64)ELoginIdentityProvider::pfenum_XBoxLive },
				{ "ELoginIdentityProvider::pfenum_PSN", (int64)ELoginIdentityProvider::pfenum_PSN },
				{ "ELoginIdentityProvider::pfenum_Kongregate", (int64)ELoginIdentityProvider::pfenum_Kongregate },
				{ "ELoginIdentityProvider::pfenum_Facebook", (int64)ELoginIdentityProvider::pfenum_Facebook },
				{ "ELoginIdentityProvider::pfenum_IOSDevice", (int64)ELoginIdentityProvider::pfenum_IOSDevice },
				{ "ELoginIdentityProvider::pfenum_AndroidDevice", (int64)ELoginIdentityProvider::pfenum_AndroidDevice },
				{ "ELoginIdentityProvider::pfenum_Twitch", (int64)ELoginIdentityProvider::pfenum_Twitch },
				{ "ELoginIdentityProvider::pfenum_WindowsHello", (int64)ELoginIdentityProvider::pfenum_WindowsHello },
				{ "ELoginIdentityProvider::pfenum_GameServer", (int64)ELoginIdentityProvider::pfenum_GameServer },
				{ "ELoginIdentityProvider::pfenum_CustomServer", (int64)ELoginIdentityProvider::pfenum_CustomServer },
				{ "ELoginIdentityProvider::pfenum_NintendoSwitch", (int64)ELoginIdentityProvider::pfenum_NintendoSwitch },
				{ "ELoginIdentityProvider::pfenum_FacebookInstantGames", (int64)ELoginIdentityProvider::pfenum_FacebookInstantGames },
				{ "ELoginIdentityProvider::pfenum_OpenIdConnect", (int64)ELoginIdentityProvider::pfenum_OpenIdConnect },
				{ "ELoginIdentityProvider::pfenum_Apple", (int64)ELoginIdentityProvider::pfenum_Apple },
				{ "ELoginIdentityProvider::pfenum_NintendoSwitchAccount", (int64)ELoginIdentityProvider::pfenum_NintendoSwitchAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** LoginIdentityProvider */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AndroidDevice.DisplayName", "AndroidDevice" },
				{ "pfenum_AndroidDevice.Name", "ELoginIdentityProvider::pfenum_AndroidDevice" },
				{ "pfenum_Apple.DisplayName", "Apple" },
				{ "pfenum_Apple.Name", "ELoginIdentityProvider::pfenum_Apple" },
				{ "pfenum_Custom.DisplayName", "Custom" },
				{ "pfenum_Custom.Name", "ELoginIdentityProvider::pfenum_Custom" },
				{ "pfenum_CustomServer.DisplayName", "CustomServer" },
				{ "pfenum_CustomServer.Name", "ELoginIdentityProvider::pfenum_CustomServer" },
				{ "pfenum_Facebook.DisplayName", "Facebook" },
				{ "pfenum_Facebook.Name", "ELoginIdentityProvider::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGames.DisplayName", "FacebookInstantGames" },
				{ "pfenum_FacebookInstantGames.Name", "ELoginIdentityProvider::pfenum_FacebookInstantGames" },
				{ "pfenum_GameCenter.DisplayName", "GameCenter" },
				{ "pfenum_GameCenter.Name", "ELoginIdentityProvider::pfenum_GameCenter" },
				{ "pfenum_GameServer.DisplayName", "GameServer" },
				{ "pfenum_GameServer.Name", "ELoginIdentityProvider::pfenum_GameServer" },
				{ "pfenum_GooglePlay.DisplayName", "GooglePlay" },
				{ "pfenum_GooglePlay.Name", "ELoginIdentityProvider::pfenum_GooglePlay" },
				{ "pfenum_IOSDevice.DisplayName", "IOSDevice" },
				{ "pfenum_IOSDevice.Name", "ELoginIdentityProvider::pfenum_IOSDevice" },
				{ "pfenum_Kongregate.DisplayName", "Kongregate" },
				{ "pfenum_Kongregate.Name", "ELoginIdentityProvider::pfenum_Kongregate" },
				{ "pfenum_NintendoSwitch.DisplayName", "NintendoSwitch" },
				{ "pfenum_NintendoSwitch.Name", "ELoginIdentityProvider::pfenum_NintendoSwitch" },
				{ "pfenum_NintendoSwitchAccount.DisplayName", "NintendoSwitchAccount" },
				{ "pfenum_NintendoSwitchAccount.Name", "ELoginIdentityProvider::pfenum_NintendoSwitchAccount" },
				{ "pfenum_OpenIdConnect.DisplayName", "OpenIdConnect" },
				{ "pfenum_OpenIdConnect.Name", "ELoginIdentityProvider::pfenum_OpenIdConnect" },
				{ "pfenum_PlayFab.DisplayName", "PlayFab" },
				{ "pfenum_PlayFab.Name", "ELoginIdentityProvider::pfenum_PlayFab" },
				{ "pfenum_PSN.DisplayName", "PSN" },
				{ "pfenum_PSN.Name", "ELoginIdentityProvider::pfenum_PSN" },
				{ "pfenum_Steam.DisplayName", "Steam" },
				{ "pfenum_Steam.Name", "ELoginIdentityProvider::pfenum_Steam" },
				{ "pfenum_Twitch.DisplayName", "Twitch" },
				{ "pfenum_Twitch.Name", "ELoginIdentityProvider::pfenum_Twitch" },
				{ "pfenum_Unknown.DisplayName", "Unknown" },
				{ "pfenum_Unknown.Name", "ELoginIdentityProvider::pfenum_Unknown" },
				{ "pfenum_WindowsHello.DisplayName", "WindowsHello" },
				{ "pfenum_WindowsHello.Name", "ELoginIdentityProvider::pfenum_WindowsHello" },
				{ "pfenum_XBoxLive.DisplayName", "XBoxLive" },
				{ "pfenum_XBoxLive.Name", "ELoginIdentityProvider::pfenum_XBoxLive" },
				{ "ToolTip", "LoginIdentityProvider" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ELoginIdentityProvider",
				"ELoginIdentityProvider",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameBuildStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EGameBuildStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EGameBuildStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EGameBuildStatus>()
	{
		return EGameBuildStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameBuildStatus(EGameBuildStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EGameBuildStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EGameBuildStatus_Hash() { return 676029937U; }
	UEnum* Z_Construct_UEnum_PlayFab_EGameBuildStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameBuildStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EGameBuildStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameBuildStatus::pfenum_Available", (int64)EGameBuildStatus::pfenum_Available },
				{ "EGameBuildStatus::pfenum_Validating", (int64)EGameBuildStatus::pfenum_Validating },
				{ "EGameBuildStatus::pfenum_InvalidBuildPackage", (int64)EGameBuildStatus::pfenum_InvalidBuildPackage },
				{ "EGameBuildStatus::pfenum_Processing", (int64)EGameBuildStatus::pfenum_Processing },
				{ "EGameBuildStatus::pfenum_FailedToProcess", (int64)EGameBuildStatus::pfenum_FailedToProcess },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** GameBuildStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Available.DisplayName", "Available" },
				{ "pfenum_Available.Name", "EGameBuildStatus::pfenum_Available" },
				{ "pfenum_FailedToProcess.DisplayName", "FailedToProcess" },
				{ "pfenum_FailedToProcess.Name", "EGameBuildStatus::pfenum_FailedToProcess" },
				{ "pfenum_InvalidBuildPackage.DisplayName", "InvalidBuildPackage" },
				{ "pfenum_InvalidBuildPackage.Name", "EGameBuildStatus::pfenum_InvalidBuildPackage" },
				{ "pfenum_Processing.DisplayName", "Processing" },
				{ "pfenum_Processing.Name", "EGameBuildStatus::pfenum_Processing" },
				{ "pfenum_Validating.DisplayName", "Validating" },
				{ "pfenum_Validating.Name", "EGameBuildStatus::pfenum_Validating" },
				{ "ToolTip", "GameBuildStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EGameBuildStatus",
				"EGameBuildStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEmailVerificationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EEmailVerificationStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EEmailVerificationStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EEmailVerificationStatus>()
	{
		return EEmailVerificationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmailVerificationStatus(EEmailVerificationStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EEmailVerificationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EEmailVerificationStatus_Hash() { return 2306828374U; }
	UEnum* Z_Construct_UEnum_PlayFab_EEmailVerificationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmailVerificationStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EEmailVerificationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmailVerificationStatus::pfenum_Unverified", (int64)EEmailVerificationStatus::pfenum_Unverified },
				{ "EEmailVerificationStatus::pfenum_Pending", (int64)EEmailVerificationStatus::pfenum_Pending },
				{ "EEmailVerificationStatus::pfenum_Confirmed", (int64)EEmailVerificationStatus::pfenum_Confirmed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** EmailVerificationStatus */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Confirmed.DisplayName", "Confirmed" },
				{ "pfenum_Confirmed.Name", "EEmailVerificationStatus::pfenum_Confirmed" },
				{ "pfenum_Pending.DisplayName", "Pending" },
				{ "pfenum_Pending.Name", "EEmailVerificationStatus::pfenum_Pending" },
				{ "pfenum_Unverified.DisplayName", "Unverified" },
				{ "pfenum_Unverified.Name", "EEmailVerificationStatus::pfenum_Unverified" },
				{ "ToolTip", "EmailVerificationStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EEmailVerificationStatus",
				"EEmailVerificationStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EEffectType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EEffectType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EEffectType>()
	{
		return EEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectType(EEffectType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EEffectType_Hash() { return 2323931187U; }
	UEnum* Z_Construct_UEnum_PlayFab_EEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectType"), 0, Get_Z_Construct_UEnum_PlayFab_EEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectType::pfenum_Allow", (int64)EEffectType::pfenum_Allow },
				{ "EEffectType::pfenum_Deny", (int64)EEffectType::pfenum_Deny },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** EffectType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Allow.DisplayName", "Allow" },
				{ "pfenum_Allow.Name", "EEffectType::pfenum_Allow" },
				{ "pfenum_Deny.DisplayName", "Deny" },
				{ "pfenum_Deny.Name", "EEffectType::pfenum_Deny" },
				{ "ToolTip", "EffectType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EEffectType",
				"EEffectType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECurrency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECurrency, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECurrency"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECurrency>()
	{
		return ECurrency_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurrency(ECurrency_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECurrency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECurrency_Hash() { return 550161904U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECurrency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurrency"), 0, Get_Z_Construct_UEnum_PlayFab_ECurrency_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurrency::pfenum_AED", (int64)ECurrency::pfenum_AED },
				{ "ECurrency::pfenum_AFN", (int64)ECurrency::pfenum_AFN },
				{ "ECurrency::pfenum_ALL", (int64)ECurrency::pfenum_ALL },
				{ "ECurrency::pfenum_AMD", (int64)ECurrency::pfenum_AMD },
				{ "ECurrency::pfenum_ANG", (int64)ECurrency::pfenum_ANG },
				{ "ECurrency::pfenum_AOA", (int64)ECurrency::pfenum_AOA },
				{ "ECurrency::pfenum_ARS", (int64)ECurrency::pfenum_ARS },
				{ "ECurrency::pfenum_AUD", (int64)ECurrency::pfenum_AUD },
				{ "ECurrency::pfenum_AWG", (int64)ECurrency::pfenum_AWG },
				{ "ECurrency::pfenum_AZN", (int64)ECurrency::pfenum_AZN },
				{ "ECurrency::pfenum_BAM", (int64)ECurrency::pfenum_BAM },
				{ "ECurrency::pfenum_BBD", (int64)ECurrency::pfenum_BBD },
				{ "ECurrency::pfenum_BDT", (int64)ECurrency::pfenum_BDT },
				{ "ECurrency::pfenum_BGN", (int64)ECurrency::pfenum_BGN },
				{ "ECurrency::pfenum_BHD", (int64)ECurrency::pfenum_BHD },
				{ "ECurrency::pfenum_BIF", (int64)ECurrency::pfenum_BIF },
				{ "ECurrency::pfenum_BMD", (int64)ECurrency::pfenum_BMD },
				{ "ECurrency::pfenum_BND", (int64)ECurrency::pfenum_BND },
				{ "ECurrency::pfenum_BOB", (int64)ECurrency::pfenum_BOB },
				{ "ECurrency::pfenum_BRL", (int64)ECurrency::pfenum_BRL },
				{ "ECurrency::pfenum_BSD", (int64)ECurrency::pfenum_BSD },
				{ "ECurrency::pfenum_BTN", (int64)ECurrency::pfenum_BTN },
				{ "ECurrency::pfenum_BWP", (int64)ECurrency::pfenum_BWP },
				{ "ECurrency::pfenum_BYR", (int64)ECurrency::pfenum_BYR },
				{ "ECurrency::pfenum_BZD", (int64)ECurrency::pfenum_BZD },
				{ "ECurrency::pfenum_CAD", (int64)ECurrency::pfenum_CAD },
				{ "ECurrency::pfenum_CDF", (int64)ECurrency::pfenum_CDF },
				{ "ECurrency::pfenum_CHF", (int64)ECurrency::pfenum_CHF },
				{ "ECurrency::pfenum_CLP", (int64)ECurrency::pfenum_CLP },
				{ "ECurrency::pfenum_CNY", (int64)ECurrency::pfenum_CNY },
				{ "ECurrency::pfenum_COP", (int64)ECurrency::pfenum_COP },
				{ "ECurrency::pfenum_CRC", (int64)ECurrency::pfenum_CRC },
				{ "ECurrency::pfenum_CUC", (int64)ECurrency::pfenum_CUC },
				{ "ECurrency::pfenum_CUP", (int64)ECurrency::pfenum_CUP },
				{ "ECurrency::pfenum_CVE", (int64)ECurrency::pfenum_CVE },
				{ "ECurrency::pfenum_CZK", (int64)ECurrency::pfenum_CZK },
				{ "ECurrency::pfenum_DJF", (int64)ECurrency::pfenum_DJF },
				{ "ECurrency::pfenum_DKK", (int64)ECurrency::pfenum_DKK },
				{ "ECurrency::pfenum_DOP", (int64)ECurrency::pfenum_DOP },
				{ "ECurrency::pfenum_DZD", (int64)ECurrency::pfenum_DZD },
				{ "ECurrency::pfenum_EGP", (int64)ECurrency::pfenum_EGP },
				{ "ECurrency::pfenum_ERN", (int64)ECurrency::pfenum_ERN },
				{ "ECurrency::pfenum_ETB", (int64)ECurrency::pfenum_ETB },
				{ "ECurrency::pfenum_EUR", (int64)ECurrency::pfenum_EUR },
				{ "ECurrency::pfenum_FJD", (int64)ECurrency::pfenum_FJD },
				{ "ECurrency::pfenum_FKP", (int64)ECurrency::pfenum_FKP },
				{ "ECurrency::pfenum_GBP", (int64)ECurrency::pfenum_GBP },
				{ "ECurrency::pfenum_GEL", (int64)ECurrency::pfenum_GEL },
				{ "ECurrency::pfenum_GGP", (int64)ECurrency::pfenum_GGP },
				{ "ECurrency::pfenum_GHS", (int64)ECurrency::pfenum_GHS },
				{ "ECurrency::pfenum_GIP", (int64)ECurrency::pfenum_GIP },
				{ "ECurrency::pfenum_GMD", (int64)ECurrency::pfenum_GMD },
				{ "ECurrency::pfenum_GNF", (int64)ECurrency::pfenum_GNF },
				{ "ECurrency::pfenum_GTQ", (int64)ECurrency::pfenum_GTQ },
				{ "ECurrency::pfenum_GYD", (int64)ECurrency::pfenum_GYD },
				{ "ECurrency::pfenum_HKD", (int64)ECurrency::pfenum_HKD },
				{ "ECurrency::pfenum_HNL", (int64)ECurrency::pfenum_HNL },
				{ "ECurrency::pfenum_HRK", (int64)ECurrency::pfenum_HRK },
				{ "ECurrency::pfenum_HTG", (int64)ECurrency::pfenum_HTG },
				{ "ECurrency::pfenum_HUF", (int64)ECurrency::pfenum_HUF },
				{ "ECurrency::pfenum_IDR", (int64)ECurrency::pfenum_IDR },
				{ "ECurrency::pfenum_ILS", (int64)ECurrency::pfenum_ILS },
				{ "ECurrency::pfenum_IMP", (int64)ECurrency::pfenum_IMP },
				{ "ECurrency::pfenum_INR", (int64)ECurrency::pfenum_INR },
				{ "ECurrency::pfenum_IQD", (int64)ECurrency::pfenum_IQD },
				{ "ECurrency::pfenum_IRR", (int64)ECurrency::pfenum_IRR },
				{ "ECurrency::pfenum_ISK", (int64)ECurrency::pfenum_ISK },
				{ "ECurrency::pfenum_JEP", (int64)ECurrency::pfenum_JEP },
				{ "ECurrency::pfenum_JMD", (int64)ECurrency::pfenum_JMD },
				{ "ECurrency::pfenum_JOD", (int64)ECurrency::pfenum_JOD },
				{ "ECurrency::pfenum_JPY", (int64)ECurrency::pfenum_JPY },
				{ "ECurrency::pfenum_KES", (int64)ECurrency::pfenum_KES },
				{ "ECurrency::pfenum_KGS", (int64)ECurrency::pfenum_KGS },
				{ "ECurrency::pfenum_KHR", (int64)ECurrency::pfenum_KHR },
				{ "ECurrency::pfenum_KMF", (int64)ECurrency::pfenum_KMF },
				{ "ECurrency::pfenum_KPW", (int64)ECurrency::pfenum_KPW },
				{ "ECurrency::pfenum_KRW", (int64)ECurrency::pfenum_KRW },
				{ "ECurrency::pfenum_KWD", (int64)ECurrency::pfenum_KWD },
				{ "ECurrency::pfenum_KYD", (int64)ECurrency::pfenum_KYD },
				{ "ECurrency::pfenum_KZT", (int64)ECurrency::pfenum_KZT },
				{ "ECurrency::pfenum_LAK", (int64)ECurrency::pfenum_LAK },
				{ "ECurrency::pfenum_LBP", (int64)ECurrency::pfenum_LBP },
				{ "ECurrency::pfenum_LKR", (int64)ECurrency::pfenum_LKR },
				{ "ECurrency::pfenum_LRD", (int64)ECurrency::pfenum_LRD },
				{ "ECurrency::pfenum_LSL", (int64)ECurrency::pfenum_LSL },
				{ "ECurrency::pfenum_LYD", (int64)ECurrency::pfenum_LYD },
				{ "ECurrency::pfenum_MAD", (int64)ECurrency::pfenum_MAD },
				{ "ECurrency::pfenum_MDL", (int64)ECurrency::pfenum_MDL },
				{ "ECurrency::pfenum_MGA", (int64)ECurrency::pfenum_MGA },
				{ "ECurrency::pfenum_MKD", (int64)ECurrency::pfenum_MKD },
				{ "ECurrency::pfenum_MMK", (int64)ECurrency::pfenum_MMK },
				{ "ECurrency::pfenum_MNT", (int64)ECurrency::pfenum_MNT },
				{ "ECurrency::pfenum_MOP", (int64)ECurrency::pfenum_MOP },
				{ "ECurrency::pfenum_MRO", (int64)ECurrency::pfenum_MRO },
				{ "ECurrency::pfenum_MUR", (int64)ECurrency::pfenum_MUR },
				{ "ECurrency::pfenum_MVR", (int64)ECurrency::pfenum_MVR },
				{ "ECurrency::pfenum_MWK", (int64)ECurrency::pfenum_MWK },
				{ "ECurrency::pfenum_MXN", (int64)ECurrency::pfenum_MXN },
				{ "ECurrency::pfenum_MYR", (int64)ECurrency::pfenum_MYR },
				{ "ECurrency::pfenum_MZN", (int64)ECurrency::pfenum_MZN },
				{ "ECurrency::pfenum_NAD", (int64)ECurrency::pfenum_NAD },
				{ "ECurrency::pfenum_NGN", (int64)ECurrency::pfenum_NGN },
				{ "ECurrency::pfenum_NIO", (int64)ECurrency::pfenum_NIO },
				{ "ECurrency::pfenum_NOK", (int64)ECurrency::pfenum_NOK },
				{ "ECurrency::pfenum_NPR", (int64)ECurrency::pfenum_NPR },
				{ "ECurrency::pfenum_NZD", (int64)ECurrency::pfenum_NZD },
				{ "ECurrency::pfenum_OMR", (int64)ECurrency::pfenum_OMR },
				{ "ECurrency::pfenum_PAB", (int64)ECurrency::pfenum_PAB },
				{ "ECurrency::pfenum_PEN", (int64)ECurrency::pfenum_PEN },
				{ "ECurrency::pfenum_PGK", (int64)ECurrency::pfenum_PGK },
				{ "ECurrency::pfenum_PHP", (int64)ECurrency::pfenum_PHP },
				{ "ECurrency::pfenum_PKR", (int64)ECurrency::pfenum_PKR },
				{ "ECurrency::pfenum_PLN", (int64)ECurrency::pfenum_PLN },
				{ "ECurrency::pfenum_PYG", (int64)ECurrency::pfenum_PYG },
				{ "ECurrency::pfenum_QAR", (int64)ECurrency::pfenum_QAR },
				{ "ECurrency::pfenum_RON", (int64)ECurrency::pfenum_RON },
				{ "ECurrency::pfenum_RSD", (int64)ECurrency::pfenum_RSD },
				{ "ECurrency::pfenum_RUB", (int64)ECurrency::pfenum_RUB },
				{ "ECurrency::pfenum_RWF", (int64)ECurrency::pfenum_RWF },
				{ "ECurrency::pfenum_SAR", (int64)ECurrency::pfenum_SAR },
				{ "ECurrency::pfenum_SBD", (int64)ECurrency::pfenum_SBD },
				{ "ECurrency::pfenum_SCR", (int64)ECurrency::pfenum_SCR },
				{ "ECurrency::pfenum_SDG", (int64)ECurrency::pfenum_SDG },
				{ "ECurrency::pfenum_SEK", (int64)ECurrency::pfenum_SEK },
				{ "ECurrency::pfenum_SGD", (int64)ECurrency::pfenum_SGD },
				{ "ECurrency::pfenum_SHP", (int64)ECurrency::pfenum_SHP },
				{ "ECurrency::pfenum_SLL", (int64)ECurrency::pfenum_SLL },
				{ "ECurrency::pfenum_SOS", (int64)ECurrency::pfenum_SOS },
				{ "ECurrency::pfenum_SPL", (int64)ECurrency::pfenum_SPL },
				{ "ECurrency::pfenum_SRD", (int64)ECurrency::pfenum_SRD },
				{ "ECurrency::pfenum_STD", (int64)ECurrency::pfenum_STD },
				{ "ECurrency::pfenum_SVC", (int64)ECurrency::pfenum_SVC },
				{ "ECurrency::pfenum_SYP", (int64)ECurrency::pfenum_SYP },
				{ "ECurrency::pfenum_SZL", (int64)ECurrency::pfenum_SZL },
				{ "ECurrency::pfenum_THB", (int64)ECurrency::pfenum_THB },
				{ "ECurrency::pfenum_TJS", (int64)ECurrency::pfenum_TJS },
				{ "ECurrency::pfenum_TMT", (int64)ECurrency::pfenum_TMT },
				{ "ECurrency::pfenum_TND", (int64)ECurrency::pfenum_TND },
				{ "ECurrency::pfenum_TOP", (int64)ECurrency::pfenum_TOP },
				{ "ECurrency::pfenum_TRY", (int64)ECurrency::pfenum_TRY },
				{ "ECurrency::pfenum_TTD", (int64)ECurrency::pfenum_TTD },
				{ "ECurrency::pfenum_TVD", (int64)ECurrency::pfenum_TVD },
				{ "ECurrency::pfenum_TWD", (int64)ECurrency::pfenum_TWD },
				{ "ECurrency::pfenum_TZS", (int64)ECurrency::pfenum_TZS },
				{ "ECurrency::pfenum_UAH", (int64)ECurrency::pfenum_UAH },
				{ "ECurrency::pfenum_UGX", (int64)ECurrency::pfenum_UGX },
				{ "ECurrency::pfenum_USD", (int64)ECurrency::pfenum_USD },
				{ "ECurrency::pfenum_UYU", (int64)ECurrency::pfenum_UYU },
				{ "ECurrency::pfenum_UZS", (int64)ECurrency::pfenum_UZS },
				{ "ECurrency::pfenum_VEF", (int64)ECurrency::pfenum_VEF },
				{ "ECurrency::pfenum_VND", (int64)ECurrency::pfenum_VND },
				{ "ECurrency::pfenum_VUV", (int64)ECurrency::pfenum_VUV },
				{ "ECurrency::pfenum_WST", (int64)ECurrency::pfenum_WST },
				{ "ECurrency::pfenum_XAF", (int64)ECurrency::pfenum_XAF },
				{ "ECurrency::pfenum_XCD", (int64)ECurrency::pfenum_XCD },
				{ "ECurrency::pfenum_XDR", (int64)ECurrency::pfenum_XDR },
				{ "ECurrency::pfenum_XOF", (int64)ECurrency::pfenum_XOF },
				{ "ECurrency::pfenum_XPF", (int64)ECurrency::pfenum_XPF },
				{ "ECurrency::pfenum_YER", (int64)ECurrency::pfenum_YER },
				{ "ECurrency::pfenum_ZAR", (int64)ECurrency::pfenum_ZAR },
				{ "ECurrency::pfenum_ZMW", (int64)ECurrency::pfenum_ZMW },
				{ "ECurrency::pfenum_ZWD", (int64)ECurrency::pfenum_ZWD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Currency */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AED.DisplayName", "AED" },
				{ "pfenum_AED.Name", "ECurrency::pfenum_AED" },
				{ "pfenum_AFN.DisplayName", "AFN" },
				{ "pfenum_AFN.Name", "ECurrency::pfenum_AFN" },
				{ "pfenum_ALL.DisplayName", "ALL" },
				{ "pfenum_ALL.Name", "ECurrency::pfenum_ALL" },
				{ "pfenum_AMD.DisplayName", "AMD" },
				{ "pfenum_AMD.Name", "ECurrency::pfenum_AMD" },
				{ "pfenum_ANG.DisplayName", "ANG" },
				{ "pfenum_ANG.Name", "ECurrency::pfenum_ANG" },
				{ "pfenum_AOA.DisplayName", "AOA" },
				{ "pfenum_AOA.Name", "ECurrency::pfenum_AOA" },
				{ "pfenum_ARS.DisplayName", "ARS" },
				{ "pfenum_ARS.Name", "ECurrency::pfenum_ARS" },
				{ "pfenum_AUD.DisplayName", "AUD" },
				{ "pfenum_AUD.Name", "ECurrency::pfenum_AUD" },
				{ "pfenum_AWG.DisplayName", "AWG" },
				{ "pfenum_AWG.Name", "ECurrency::pfenum_AWG" },
				{ "pfenum_AZN.DisplayName", "AZN" },
				{ "pfenum_AZN.Name", "ECurrency::pfenum_AZN" },
				{ "pfenum_BAM.DisplayName", "BAM" },
				{ "pfenum_BAM.Name", "ECurrency::pfenum_BAM" },
				{ "pfenum_BBD.DisplayName", "BBD" },
				{ "pfenum_BBD.Name", "ECurrency::pfenum_BBD" },
				{ "pfenum_BDT.DisplayName", "BDT" },
				{ "pfenum_BDT.Name", "ECurrency::pfenum_BDT" },
				{ "pfenum_BGN.DisplayName", "BGN" },
				{ "pfenum_BGN.Name", "ECurrency::pfenum_BGN" },
				{ "pfenum_BHD.DisplayName", "BHD" },
				{ "pfenum_BHD.Name", "ECurrency::pfenum_BHD" },
				{ "pfenum_BIF.DisplayName", "BIF" },
				{ "pfenum_BIF.Name", "ECurrency::pfenum_BIF" },
				{ "pfenum_BMD.DisplayName", "BMD" },
				{ "pfenum_BMD.Name", "ECurrency::pfenum_BMD" },
				{ "pfenum_BND.DisplayName", "BND" },
				{ "pfenum_BND.Name", "ECurrency::pfenum_BND" },
				{ "pfenum_BOB.DisplayName", "BOB" },
				{ "pfenum_BOB.Name", "ECurrency::pfenum_BOB" },
				{ "pfenum_BRL.DisplayName", "BRL" },
				{ "pfenum_BRL.Name", "ECurrency::pfenum_BRL" },
				{ "pfenum_BSD.DisplayName", "BSD" },
				{ "pfenum_BSD.Name", "ECurrency::pfenum_BSD" },
				{ "pfenum_BTN.DisplayName", "BTN" },
				{ "pfenum_BTN.Name", "ECurrency::pfenum_BTN" },
				{ "pfenum_BWP.DisplayName", "BWP" },
				{ "pfenum_BWP.Name", "ECurrency::pfenum_BWP" },
				{ "pfenum_BYR.DisplayName", "BYR" },
				{ "pfenum_BYR.Name", "ECurrency::pfenum_BYR" },
				{ "pfenum_BZD.DisplayName", "BZD" },
				{ "pfenum_BZD.Name", "ECurrency::pfenum_BZD" },
				{ "pfenum_CAD.DisplayName", "CAD" },
				{ "pfenum_CAD.Name", "ECurrency::pfenum_CAD" },
				{ "pfenum_CDF.DisplayName", "CDF" },
				{ "pfenum_CDF.Name", "ECurrency::pfenum_CDF" },
				{ "pfenum_CHF.DisplayName", "CHF" },
				{ "pfenum_CHF.Name", "ECurrency::pfenum_CHF" },
				{ "pfenum_CLP.DisplayName", "CLP" },
				{ "pfenum_CLP.Name", "ECurrency::pfenum_CLP" },
				{ "pfenum_CNY.DisplayName", "CNY" },
				{ "pfenum_CNY.Name", "ECurrency::pfenum_CNY" },
				{ "pfenum_COP.DisplayName", "COP" },
				{ "pfenum_COP.Name", "ECurrency::pfenum_COP" },
				{ "pfenum_CRC.DisplayName", "CRC" },
				{ "pfenum_CRC.Name", "ECurrency::pfenum_CRC" },
				{ "pfenum_CUC.DisplayName", "CUC" },
				{ "pfenum_CUC.Name", "ECurrency::pfenum_CUC" },
				{ "pfenum_CUP.DisplayName", "CUP" },
				{ "pfenum_CUP.Name", "ECurrency::pfenum_CUP" },
				{ "pfenum_CVE.DisplayName", "CVE" },
				{ "pfenum_CVE.Name", "ECurrency::pfenum_CVE" },
				{ "pfenum_CZK.DisplayName", "CZK" },
				{ "pfenum_CZK.Name", "ECurrency::pfenum_CZK" },
				{ "pfenum_DJF.DisplayName", "DJF" },
				{ "pfenum_DJF.Name", "ECurrency::pfenum_DJF" },
				{ "pfenum_DKK.DisplayName", "DKK" },
				{ "pfenum_DKK.Name", "ECurrency::pfenum_DKK" },
				{ "pfenum_DOP.DisplayName", "DOP" },
				{ "pfenum_DOP.Name", "ECurrency::pfenum_DOP" },
				{ "pfenum_DZD.DisplayName", "DZD" },
				{ "pfenum_DZD.Name", "ECurrency::pfenum_DZD" },
				{ "pfenum_EGP.DisplayName", "EGP" },
				{ "pfenum_EGP.Name", "ECurrency::pfenum_EGP" },
				{ "pfenum_ERN.DisplayName", "ERN" },
				{ "pfenum_ERN.Name", "ECurrency::pfenum_ERN" },
				{ "pfenum_ETB.DisplayName", "ETB" },
				{ "pfenum_ETB.Name", "ECurrency::pfenum_ETB" },
				{ "pfenum_EUR.DisplayName", "EUR" },
				{ "pfenum_EUR.Name", "ECurrency::pfenum_EUR" },
				{ "pfenum_FJD.DisplayName", "FJD" },
				{ "pfenum_FJD.Name", "ECurrency::pfenum_FJD" },
				{ "pfenum_FKP.DisplayName", "FKP" },
				{ "pfenum_FKP.Name", "ECurrency::pfenum_FKP" },
				{ "pfenum_GBP.DisplayName", "GBP" },
				{ "pfenum_GBP.Name", "ECurrency::pfenum_GBP" },
				{ "pfenum_GEL.DisplayName", "GEL" },
				{ "pfenum_GEL.Name", "ECurrency::pfenum_GEL" },
				{ "pfenum_GGP.DisplayName", "GGP" },
				{ "pfenum_GGP.Name", "ECurrency::pfenum_GGP" },
				{ "pfenum_GHS.DisplayName", "GHS" },
				{ "pfenum_GHS.Name", "ECurrency::pfenum_GHS" },
				{ "pfenum_GIP.DisplayName", "GIP" },
				{ "pfenum_GIP.Name", "ECurrency::pfenum_GIP" },
				{ "pfenum_GMD.DisplayName", "GMD" },
				{ "pfenum_GMD.Name", "ECurrency::pfenum_GMD" },
				{ "pfenum_GNF.DisplayName", "GNF" },
				{ "pfenum_GNF.Name", "ECurrency::pfenum_GNF" },
				{ "pfenum_GTQ.DisplayName", "GTQ" },
				{ "pfenum_GTQ.Name", "ECurrency::pfenum_GTQ" },
				{ "pfenum_GYD.DisplayName", "GYD" },
				{ "pfenum_GYD.Name", "ECurrency::pfenum_GYD" },
				{ "pfenum_HKD.DisplayName", "HKD" },
				{ "pfenum_HKD.Name", "ECurrency::pfenum_HKD" },
				{ "pfenum_HNL.DisplayName", "HNL" },
				{ "pfenum_HNL.Name", "ECurrency::pfenum_HNL" },
				{ "pfenum_HRK.DisplayName", "HRK" },
				{ "pfenum_HRK.Name", "ECurrency::pfenum_HRK" },
				{ "pfenum_HTG.DisplayName", "HTG" },
				{ "pfenum_HTG.Name", "ECurrency::pfenum_HTG" },
				{ "pfenum_HUF.DisplayName", "HUF" },
				{ "pfenum_HUF.Name", "ECurrency::pfenum_HUF" },
				{ "pfenum_IDR.DisplayName", "IDR" },
				{ "pfenum_IDR.Name", "ECurrency::pfenum_IDR" },
				{ "pfenum_ILS.DisplayName", "ILS" },
				{ "pfenum_ILS.Name", "ECurrency::pfenum_ILS" },
				{ "pfenum_IMP.DisplayName", "IMP" },
				{ "pfenum_IMP.Name", "ECurrency::pfenum_IMP" },
				{ "pfenum_INR.DisplayName", "INR" },
				{ "pfenum_INR.Name", "ECurrency::pfenum_INR" },
				{ "pfenum_IQD.DisplayName", "IQD" },
				{ "pfenum_IQD.Name", "ECurrency::pfenum_IQD" },
				{ "pfenum_IRR.DisplayName", "IRR" },
				{ "pfenum_IRR.Name", "ECurrency::pfenum_IRR" },
				{ "pfenum_ISK.DisplayName", "ISK" },
				{ "pfenum_ISK.Name", "ECurrency::pfenum_ISK" },
				{ "pfenum_JEP.DisplayName", "JEP" },
				{ "pfenum_JEP.Name", "ECurrency::pfenum_JEP" },
				{ "pfenum_JMD.DisplayName", "JMD" },
				{ "pfenum_JMD.Name", "ECurrency::pfenum_JMD" },
				{ "pfenum_JOD.DisplayName", "JOD" },
				{ "pfenum_JOD.Name", "ECurrency::pfenum_JOD" },
				{ "pfenum_JPY.DisplayName", "JPY" },
				{ "pfenum_JPY.Name", "ECurrency::pfenum_JPY" },
				{ "pfenum_KES.DisplayName", "KES" },
				{ "pfenum_KES.Name", "ECurrency::pfenum_KES" },
				{ "pfenum_KGS.DisplayName", "KGS" },
				{ "pfenum_KGS.Name", "ECurrency::pfenum_KGS" },
				{ "pfenum_KHR.DisplayName", "KHR" },
				{ "pfenum_KHR.Name", "ECurrency::pfenum_KHR" },
				{ "pfenum_KMF.DisplayName", "KMF" },
				{ "pfenum_KMF.Name", "ECurrency::pfenum_KMF" },
				{ "pfenum_KPW.DisplayName", "KPW" },
				{ "pfenum_KPW.Name", "ECurrency::pfenum_KPW" },
				{ "pfenum_KRW.DisplayName", "KRW" },
				{ "pfenum_KRW.Name", "ECurrency::pfenum_KRW" },
				{ "pfenum_KWD.DisplayName", "KWD" },
				{ "pfenum_KWD.Name", "ECurrency::pfenum_KWD" },
				{ "pfenum_KYD.DisplayName", "KYD" },
				{ "pfenum_KYD.Name", "ECurrency::pfenum_KYD" },
				{ "pfenum_KZT.DisplayName", "KZT" },
				{ "pfenum_KZT.Name", "ECurrency::pfenum_KZT" },
				{ "pfenum_LAK.DisplayName", "LAK" },
				{ "pfenum_LAK.Name", "ECurrency::pfenum_LAK" },
				{ "pfenum_LBP.DisplayName", "LBP" },
				{ "pfenum_LBP.Name", "ECurrency::pfenum_LBP" },
				{ "pfenum_LKR.DisplayName", "LKR" },
				{ "pfenum_LKR.Name", "ECurrency::pfenum_LKR" },
				{ "pfenum_LRD.DisplayName", "LRD" },
				{ "pfenum_LRD.Name", "ECurrency::pfenum_LRD" },
				{ "pfenum_LSL.DisplayName", "LSL" },
				{ "pfenum_LSL.Name", "ECurrency::pfenum_LSL" },
				{ "pfenum_LYD.DisplayName", "LYD" },
				{ "pfenum_LYD.Name", "ECurrency::pfenum_LYD" },
				{ "pfenum_MAD.DisplayName", "MAD" },
				{ "pfenum_MAD.Name", "ECurrency::pfenum_MAD" },
				{ "pfenum_MDL.DisplayName", "MDL" },
				{ "pfenum_MDL.Name", "ECurrency::pfenum_MDL" },
				{ "pfenum_MGA.DisplayName", "MGA" },
				{ "pfenum_MGA.Name", "ECurrency::pfenum_MGA" },
				{ "pfenum_MKD.DisplayName", "MKD" },
				{ "pfenum_MKD.Name", "ECurrency::pfenum_MKD" },
				{ "pfenum_MMK.DisplayName", "MMK" },
				{ "pfenum_MMK.Name", "ECurrency::pfenum_MMK" },
				{ "pfenum_MNT.DisplayName", "MNT" },
				{ "pfenum_MNT.Name", "ECurrency::pfenum_MNT" },
				{ "pfenum_MOP.DisplayName", "MOP" },
				{ "pfenum_MOP.Name", "ECurrency::pfenum_MOP" },
				{ "pfenum_MRO.DisplayName", "MRO" },
				{ "pfenum_MRO.Name", "ECurrency::pfenum_MRO" },
				{ "pfenum_MUR.DisplayName", "MUR" },
				{ "pfenum_MUR.Name", "ECurrency::pfenum_MUR" },
				{ "pfenum_MVR.DisplayName", "MVR" },
				{ "pfenum_MVR.Name", "ECurrency::pfenum_MVR" },
				{ "pfenum_MWK.DisplayName", "MWK" },
				{ "pfenum_MWK.Name", "ECurrency::pfenum_MWK" },
				{ "pfenum_MXN.DisplayName", "MXN" },
				{ "pfenum_MXN.Name", "ECurrency::pfenum_MXN" },
				{ "pfenum_MYR.DisplayName", "MYR" },
				{ "pfenum_MYR.Name", "ECurrency::pfenum_MYR" },
				{ "pfenum_MZN.DisplayName", "MZN" },
				{ "pfenum_MZN.Name", "ECurrency::pfenum_MZN" },
				{ "pfenum_NAD.DisplayName", "NAD" },
				{ "pfenum_NAD.Name", "ECurrency::pfenum_NAD" },
				{ "pfenum_NGN.DisplayName", "NGN" },
				{ "pfenum_NGN.Name", "ECurrency::pfenum_NGN" },
				{ "pfenum_NIO.DisplayName", "NIO" },
				{ "pfenum_NIO.Name", "ECurrency::pfenum_NIO" },
				{ "pfenum_NOK.DisplayName", "NOK" },
				{ "pfenum_NOK.Name", "ECurrency::pfenum_NOK" },
				{ "pfenum_NPR.DisplayName", "NPR" },
				{ "pfenum_NPR.Name", "ECurrency::pfenum_NPR" },
				{ "pfenum_NZD.DisplayName", "NZD" },
				{ "pfenum_NZD.Name", "ECurrency::pfenum_NZD" },
				{ "pfenum_OMR.DisplayName", "OMR" },
				{ "pfenum_OMR.Name", "ECurrency::pfenum_OMR" },
				{ "pfenum_PAB.DisplayName", "PAB" },
				{ "pfenum_PAB.Name", "ECurrency::pfenum_PAB" },
				{ "pfenum_PEN.DisplayName", "PEN" },
				{ "pfenum_PEN.Name", "ECurrency::pfenum_PEN" },
				{ "pfenum_PGK.DisplayName", "PGK" },
				{ "pfenum_PGK.Name", "ECurrency::pfenum_PGK" },
				{ "pfenum_PHP.DisplayName", "PHP" },
				{ "pfenum_PHP.Name", "ECurrency::pfenum_PHP" },
				{ "pfenum_PKR.DisplayName", "PKR" },
				{ "pfenum_PKR.Name", "ECurrency::pfenum_PKR" },
				{ "pfenum_PLN.DisplayName", "PLN" },
				{ "pfenum_PLN.Name", "ECurrency::pfenum_PLN" },
				{ "pfenum_PYG.DisplayName", "PYG" },
				{ "pfenum_PYG.Name", "ECurrency::pfenum_PYG" },
				{ "pfenum_QAR.DisplayName", "QAR" },
				{ "pfenum_QAR.Name", "ECurrency::pfenum_QAR" },
				{ "pfenum_RON.DisplayName", "RON" },
				{ "pfenum_RON.Name", "ECurrency::pfenum_RON" },
				{ "pfenum_RSD.DisplayName", "RSD" },
				{ "pfenum_RSD.Name", "ECurrency::pfenum_RSD" },
				{ "pfenum_RUB.DisplayName", "RUB" },
				{ "pfenum_RUB.Name", "ECurrency::pfenum_RUB" },
				{ "pfenum_RWF.DisplayName", "RWF" },
				{ "pfenum_RWF.Name", "ECurrency::pfenum_RWF" },
				{ "pfenum_SAR.DisplayName", "SAR" },
				{ "pfenum_SAR.Name", "ECurrency::pfenum_SAR" },
				{ "pfenum_SBD.DisplayName", "SBD" },
				{ "pfenum_SBD.Name", "ECurrency::pfenum_SBD" },
				{ "pfenum_SCR.DisplayName", "SCR" },
				{ "pfenum_SCR.Name", "ECurrency::pfenum_SCR" },
				{ "pfenum_SDG.DisplayName", "SDG" },
				{ "pfenum_SDG.Name", "ECurrency::pfenum_SDG" },
				{ "pfenum_SEK.DisplayName", "SEK" },
				{ "pfenum_SEK.Name", "ECurrency::pfenum_SEK" },
				{ "pfenum_SGD.DisplayName", "SGD" },
				{ "pfenum_SGD.Name", "ECurrency::pfenum_SGD" },
				{ "pfenum_SHP.DisplayName", "SHP" },
				{ "pfenum_SHP.Name", "ECurrency::pfenum_SHP" },
				{ "pfenum_SLL.DisplayName", "SLL" },
				{ "pfenum_SLL.Name", "ECurrency::pfenum_SLL" },
				{ "pfenum_SOS.DisplayName", "SOS" },
				{ "pfenum_SOS.Name", "ECurrency::pfenum_SOS" },
				{ "pfenum_SPL.DisplayName", "SPL" },
				{ "pfenum_SPL.Name", "ECurrency::pfenum_SPL" },
				{ "pfenum_SRD.DisplayName", "SRD" },
				{ "pfenum_SRD.Name", "ECurrency::pfenum_SRD" },
				{ "pfenum_STD.DisplayName", "STD" },
				{ "pfenum_STD.Name", "ECurrency::pfenum_STD" },
				{ "pfenum_SVC.DisplayName", "SVC" },
				{ "pfenum_SVC.Name", "ECurrency::pfenum_SVC" },
				{ "pfenum_SYP.DisplayName", "SYP" },
				{ "pfenum_SYP.Name", "ECurrency::pfenum_SYP" },
				{ "pfenum_SZL.DisplayName", "SZL" },
				{ "pfenum_SZL.Name", "ECurrency::pfenum_SZL" },
				{ "pfenum_THB.DisplayName", "THB" },
				{ "pfenum_THB.Name", "ECurrency::pfenum_THB" },
				{ "pfenum_TJS.DisplayName", "TJS" },
				{ "pfenum_TJS.Name", "ECurrency::pfenum_TJS" },
				{ "pfenum_TMT.DisplayName", "TMT" },
				{ "pfenum_TMT.Name", "ECurrency::pfenum_TMT" },
				{ "pfenum_TND.DisplayName", "TND" },
				{ "pfenum_TND.Name", "ECurrency::pfenum_TND" },
				{ "pfenum_TOP.DisplayName", "TOP" },
				{ "pfenum_TOP.Name", "ECurrency::pfenum_TOP" },
				{ "pfenum_TRY.DisplayName", "TRY" },
				{ "pfenum_TRY.Name", "ECurrency::pfenum_TRY" },
				{ "pfenum_TTD.DisplayName", "TTD" },
				{ "pfenum_TTD.Name", "ECurrency::pfenum_TTD" },
				{ "pfenum_TVD.DisplayName", "TVD" },
				{ "pfenum_TVD.Name", "ECurrency::pfenum_TVD" },
				{ "pfenum_TWD.DisplayName", "TWD" },
				{ "pfenum_TWD.Name", "ECurrency::pfenum_TWD" },
				{ "pfenum_TZS.DisplayName", "TZS" },
				{ "pfenum_TZS.Name", "ECurrency::pfenum_TZS" },
				{ "pfenum_UAH.DisplayName", "UAH" },
				{ "pfenum_UAH.Name", "ECurrency::pfenum_UAH" },
				{ "pfenum_UGX.DisplayName", "UGX" },
				{ "pfenum_UGX.Name", "ECurrency::pfenum_UGX" },
				{ "pfenum_USD.DisplayName", "USD" },
				{ "pfenum_USD.Name", "ECurrency::pfenum_USD" },
				{ "pfenum_UYU.DisplayName", "UYU" },
				{ "pfenum_UYU.Name", "ECurrency::pfenum_UYU" },
				{ "pfenum_UZS.DisplayName", "UZS" },
				{ "pfenum_UZS.Name", "ECurrency::pfenum_UZS" },
				{ "pfenum_VEF.DisplayName", "VEF" },
				{ "pfenum_VEF.Name", "ECurrency::pfenum_VEF" },
				{ "pfenum_VND.DisplayName", "VND" },
				{ "pfenum_VND.Name", "ECurrency::pfenum_VND" },
				{ "pfenum_VUV.DisplayName", "VUV" },
				{ "pfenum_VUV.Name", "ECurrency::pfenum_VUV" },
				{ "pfenum_WST.DisplayName", "WST" },
				{ "pfenum_WST.Name", "ECurrency::pfenum_WST" },
				{ "pfenum_XAF.DisplayName", "XAF" },
				{ "pfenum_XAF.Name", "ECurrency::pfenum_XAF" },
				{ "pfenum_XCD.DisplayName", "XCD" },
				{ "pfenum_XCD.Name", "ECurrency::pfenum_XCD" },
				{ "pfenum_XDR.DisplayName", "XDR" },
				{ "pfenum_XDR.Name", "ECurrency::pfenum_XDR" },
				{ "pfenum_XOF.DisplayName", "XOF" },
				{ "pfenum_XOF.Name", "ECurrency::pfenum_XOF" },
				{ "pfenum_XPF.DisplayName", "XPF" },
				{ "pfenum_XPF.Name", "ECurrency::pfenum_XPF" },
				{ "pfenum_YER.DisplayName", "YER" },
				{ "pfenum_YER.Name", "ECurrency::pfenum_YER" },
				{ "pfenum_ZAR.DisplayName", "ZAR" },
				{ "pfenum_ZAR.Name", "ECurrency::pfenum_ZAR" },
				{ "pfenum_ZMW.DisplayName", "ZMW" },
				{ "pfenum_ZMW.Name", "ECurrency::pfenum_ZMW" },
				{ "pfenum_ZWD.DisplayName", "ZWD" },
				{ "pfenum_ZWD.Name", "ECurrency::pfenum_ZWD" },
				{ "ToolTip", "Currency" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECurrency",
				"ECurrency",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECountryCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECountryCode, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECountryCode"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECountryCode>()
	{
		return ECountryCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECountryCode(ECountryCode_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECountryCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECountryCode_Hash() { return 1840222959U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECountryCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECountryCode"), 0, Get_Z_Construct_UEnum_PlayFab_ECountryCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECountryCode::pfenum_AF", (int64)ECountryCode::pfenum_AF },
				{ "ECountryCode::pfenum_AX", (int64)ECountryCode::pfenum_AX },
				{ "ECountryCode::pfenum_AL", (int64)ECountryCode::pfenum_AL },
				{ "ECountryCode::pfenum_DZ", (int64)ECountryCode::pfenum_DZ },
				{ "ECountryCode::pfenum_AS", (int64)ECountryCode::pfenum_AS },
				{ "ECountryCode::pfenum_AD", (int64)ECountryCode::pfenum_AD },
				{ "ECountryCode::pfenum_AO", (int64)ECountryCode::pfenum_AO },
				{ "ECountryCode::pfenum_AI", (int64)ECountryCode::pfenum_AI },
				{ "ECountryCode::pfenum_AQ", (int64)ECountryCode::pfenum_AQ },
				{ "ECountryCode::pfenum_AG", (int64)ECountryCode::pfenum_AG },
				{ "ECountryCode::pfenum_AR", (int64)ECountryCode::pfenum_AR },
				{ "ECountryCode::pfenum_AM", (int64)ECountryCode::pfenum_AM },
				{ "ECountryCode::pfenum_AW", (int64)ECountryCode::pfenum_AW },
				{ "ECountryCode::pfenum_AU", (int64)ECountryCode::pfenum_AU },
				{ "ECountryCode::pfenum_AT", (int64)ECountryCode::pfenum_AT },
				{ "ECountryCode::pfenum_AZ", (int64)ECountryCode::pfenum_AZ },
				{ "ECountryCode::pfenum_BS", (int64)ECountryCode::pfenum_BS },
				{ "ECountryCode::pfenum_BH", (int64)ECountryCode::pfenum_BH },
				{ "ECountryCode::pfenum_BD", (int64)ECountryCode::pfenum_BD },
				{ "ECountryCode::pfenum_BB", (int64)ECountryCode::pfenum_BB },
				{ "ECountryCode::pfenum_BY", (int64)ECountryCode::pfenum_BY },
				{ "ECountryCode::pfenum_BE", (int64)ECountryCode::pfenum_BE },
				{ "ECountryCode::pfenum_BZ", (int64)ECountryCode::pfenum_BZ },
				{ "ECountryCode::pfenum_BJ", (int64)ECountryCode::pfenum_BJ },
				{ "ECountryCode::pfenum_BM", (int64)ECountryCode::pfenum_BM },
				{ "ECountryCode::pfenum_BT", (int64)ECountryCode::pfenum_BT },
				{ "ECountryCode::pfenum_BO", (int64)ECountryCode::pfenum_BO },
				{ "ECountryCode::pfenum_BQ", (int64)ECountryCode::pfenum_BQ },
				{ "ECountryCode::pfenum_BA", (int64)ECountryCode::pfenum_BA },
				{ "ECountryCode::pfenum_BW", (int64)ECountryCode::pfenum_BW },
				{ "ECountryCode::pfenum_BV", (int64)ECountryCode::pfenum_BV },
				{ "ECountryCode::pfenum_BR", (int64)ECountryCode::pfenum_BR },
				{ "ECountryCode::pfenum_IO", (int64)ECountryCode::pfenum_IO },
				{ "ECountryCode::pfenum_BN", (int64)ECountryCode::pfenum_BN },
				{ "ECountryCode::pfenum_BG", (int64)ECountryCode::pfenum_BG },
				{ "ECountryCode::pfenum_BF", (int64)ECountryCode::pfenum_BF },
				{ "ECountryCode::pfenum_BI", (int64)ECountryCode::pfenum_BI },
				{ "ECountryCode::pfenum_KH", (int64)ECountryCode::pfenum_KH },
				{ "ECountryCode::pfenum_CM", (int64)ECountryCode::pfenum_CM },
				{ "ECountryCode::pfenum_CA", (int64)ECountryCode::pfenum_CA },
				{ "ECountryCode::pfenum_CV", (int64)ECountryCode::pfenum_CV },
				{ "ECountryCode::pfenum_KY", (int64)ECountryCode::pfenum_KY },
				{ "ECountryCode::pfenum_CF", (int64)ECountryCode::pfenum_CF },
				{ "ECountryCode::pfenum_TD", (int64)ECountryCode::pfenum_TD },
				{ "ECountryCode::pfenum_CL", (int64)ECountryCode::pfenum_CL },
				{ "ECountryCode::pfenum_CN", (int64)ECountryCode::pfenum_CN },
				{ "ECountryCode::pfenum_CX", (int64)ECountryCode::pfenum_CX },
				{ "ECountryCode::pfenum_CC", (int64)ECountryCode::pfenum_CC },
				{ "ECountryCode::pfenum_CO", (int64)ECountryCode::pfenum_CO },
				{ "ECountryCode::pfenum_KM", (int64)ECountryCode::pfenum_KM },
				{ "ECountryCode::pfenum_CG", (int64)ECountryCode::pfenum_CG },
				{ "ECountryCode::pfenum_CD", (int64)ECountryCode::pfenum_CD },
				{ "ECountryCode::pfenum_CK", (int64)ECountryCode::pfenum_CK },
				{ "ECountryCode::pfenum_CR", (int64)ECountryCode::pfenum_CR },
				{ "ECountryCode::pfenum_CI", (int64)ECountryCode::pfenum_CI },
				{ "ECountryCode::pfenum_HR", (int64)ECountryCode::pfenum_HR },
				{ "ECountryCode::pfenum_CU", (int64)ECountryCode::pfenum_CU },
				{ "ECountryCode::pfenum_CW", (int64)ECountryCode::pfenum_CW },
				{ "ECountryCode::pfenum_CY", (int64)ECountryCode::pfenum_CY },
				{ "ECountryCode::pfenum_CZ", (int64)ECountryCode::pfenum_CZ },
				{ "ECountryCode::pfenum_DK", (int64)ECountryCode::pfenum_DK },
				{ "ECountryCode::pfenum_DJ", (int64)ECountryCode::pfenum_DJ },
				{ "ECountryCode::pfenum_DM", (int64)ECountryCode::pfenum_DM },
				{ "ECountryCode::pfenum_DO", (int64)ECountryCode::pfenum_DO },
				{ "ECountryCode::pfenum_EC", (int64)ECountryCode::pfenum_EC },
				{ "ECountryCode::pfenum_EG", (int64)ECountryCode::pfenum_EG },
				{ "ECountryCode::pfenum_SV", (int64)ECountryCode::pfenum_SV },
				{ "ECountryCode::pfenum_GQ", (int64)ECountryCode::pfenum_GQ },
				{ "ECountryCode::pfenum_ER", (int64)ECountryCode::pfenum_ER },
				{ "ECountryCode::pfenum_EE", (int64)ECountryCode::pfenum_EE },
				{ "ECountryCode::pfenum_ET", (int64)ECountryCode::pfenum_ET },
				{ "ECountryCode::pfenum_FK", (int64)ECountryCode::pfenum_FK },
				{ "ECountryCode::pfenum_FO", (int64)ECountryCode::pfenum_FO },
				{ "ECountryCode::pfenum_FJ", (int64)ECountryCode::pfenum_FJ },
				{ "ECountryCode::pfenum_FI", (int64)ECountryCode::pfenum_FI },
				{ "ECountryCode::pfenum_FR", (int64)ECountryCode::pfenum_FR },
				{ "ECountryCode::pfenum_GF", (int64)ECountryCode::pfenum_GF },
				{ "ECountryCode::pfenum_PF", (int64)ECountryCode::pfenum_PF },
				{ "ECountryCode::pfenum_TF", (int64)ECountryCode::pfenum_TF },
				{ "ECountryCode::pfenum_GA", (int64)ECountryCode::pfenum_GA },
				{ "ECountryCode::pfenum_GM", (int64)ECountryCode::pfenum_GM },
				{ "ECountryCode::pfenum_GE", (int64)ECountryCode::pfenum_GE },
				{ "ECountryCode::pfenum_DE", (int64)ECountryCode::pfenum_DE },
				{ "ECountryCode::pfenum_GH", (int64)ECountryCode::pfenum_GH },
				{ "ECountryCode::pfenum_GI", (int64)ECountryCode::pfenum_GI },
				{ "ECountryCode::pfenum_GR", (int64)ECountryCode::pfenum_GR },
				{ "ECountryCode::pfenum_GL", (int64)ECountryCode::pfenum_GL },
				{ "ECountryCode::pfenum_GD", (int64)ECountryCode::pfenum_GD },
				{ "ECountryCode::pfenum_GP", (int64)ECountryCode::pfenum_GP },
				{ "ECountryCode::pfenum_GU", (int64)ECountryCode::pfenum_GU },
				{ "ECountryCode::pfenum_GT", (int64)ECountryCode::pfenum_GT },
				{ "ECountryCode::pfenum_GG", (int64)ECountryCode::pfenum_GG },
				{ "ECountryCode::pfenum_GN", (int64)ECountryCode::pfenum_GN },
				{ "ECountryCode::pfenum_GW", (int64)ECountryCode::pfenum_GW },
				{ "ECountryCode::pfenum_GY", (int64)ECountryCode::pfenum_GY },
				{ "ECountryCode::pfenum_HT", (int64)ECountryCode::pfenum_HT },
				{ "ECountryCode::pfenum_HM", (int64)ECountryCode::pfenum_HM },
				{ "ECountryCode::pfenum_VA", (int64)ECountryCode::pfenum_VA },
				{ "ECountryCode::pfenum_HN", (int64)ECountryCode::pfenum_HN },
				{ "ECountryCode::pfenum_HK", (int64)ECountryCode::pfenum_HK },
				{ "ECountryCode::pfenum_HU", (int64)ECountryCode::pfenum_HU },
				{ "ECountryCode::pfenum_IS", (int64)ECountryCode::pfenum_IS },
				{ "ECountryCode::pfenum_IN", (int64)ECountryCode::pfenum_IN },
				{ "ECountryCode::pfenum_ID", (int64)ECountryCode::pfenum_ID },
				{ "ECountryCode::pfenum_IR", (int64)ECountryCode::pfenum_IR },
				{ "ECountryCode::pfenum_IQ", (int64)ECountryCode::pfenum_IQ },
				{ "ECountryCode::pfenum_IE", (int64)ECountryCode::pfenum_IE },
				{ "ECountryCode::pfenum_IM", (int64)ECountryCode::pfenum_IM },
				{ "ECountryCode::pfenum_IL", (int64)ECountryCode::pfenum_IL },
				{ "ECountryCode::pfenum_IT", (int64)ECountryCode::pfenum_IT },
				{ "ECountryCode::pfenum_JM", (int64)ECountryCode::pfenum_JM },
				{ "ECountryCode::pfenum_JP", (int64)ECountryCode::pfenum_JP },
				{ "ECountryCode::pfenum_JE", (int64)ECountryCode::pfenum_JE },
				{ "ECountryCode::pfenum_JO", (int64)ECountryCode::pfenum_JO },
				{ "ECountryCode::pfenum_KZ", (int64)ECountryCode::pfenum_KZ },
				{ "ECountryCode::pfenum_KE", (int64)ECountryCode::pfenum_KE },
				{ "ECountryCode::pfenum_KI", (int64)ECountryCode::pfenum_KI },
				{ "ECountryCode::pfenum_KP", (int64)ECountryCode::pfenum_KP },
				{ "ECountryCode::pfenum_KR", (int64)ECountryCode::pfenum_KR },
				{ "ECountryCode::pfenum_KW", (int64)ECountryCode::pfenum_KW },
				{ "ECountryCode::pfenum_KG", (int64)ECountryCode::pfenum_KG },
				{ "ECountryCode::pfenum_LA", (int64)ECountryCode::pfenum_LA },
				{ "ECountryCode::pfenum_LV", (int64)ECountryCode::pfenum_LV },
				{ "ECountryCode::pfenum_LB", (int64)ECountryCode::pfenum_LB },
				{ "ECountryCode::pfenum_LS", (int64)ECountryCode::pfenum_LS },
				{ "ECountryCode::pfenum_LR", (int64)ECountryCode::pfenum_LR },
				{ "ECountryCode::pfenum_LY", (int64)ECountryCode::pfenum_LY },
				{ "ECountryCode::pfenum_LI", (int64)ECountryCode::pfenum_LI },
				{ "ECountryCode::pfenum_LT", (int64)ECountryCode::pfenum_LT },
				{ "ECountryCode::pfenum_LU", (int64)ECountryCode::pfenum_LU },
				{ "ECountryCode::pfenum_MO", (int64)ECountryCode::pfenum_MO },
				{ "ECountryCode::pfenum_MK", (int64)ECountryCode::pfenum_MK },
				{ "ECountryCode::pfenum_MG", (int64)ECountryCode::pfenum_MG },
				{ "ECountryCode::pfenum_MW", (int64)ECountryCode::pfenum_MW },
				{ "ECountryCode::pfenum_MY", (int64)ECountryCode::pfenum_MY },
				{ "ECountryCode::pfenum_MV", (int64)ECountryCode::pfenum_MV },
				{ "ECountryCode::pfenum_ML", (int64)ECountryCode::pfenum_ML },
				{ "ECountryCode::pfenum_MT", (int64)ECountryCode::pfenum_MT },
				{ "ECountryCode::pfenum_MH", (int64)ECountryCode::pfenum_MH },
				{ "ECountryCode::pfenum_MQ", (int64)ECountryCode::pfenum_MQ },
				{ "ECountryCode::pfenum_MR", (int64)ECountryCode::pfenum_MR },
				{ "ECountryCode::pfenum_MU", (int64)ECountryCode::pfenum_MU },
				{ "ECountryCode::pfenum_YT", (int64)ECountryCode::pfenum_YT },
				{ "ECountryCode::pfenum_MX", (int64)ECountryCode::pfenum_MX },
				{ "ECountryCode::pfenum_FM", (int64)ECountryCode::pfenum_FM },
				{ "ECountryCode::pfenum_MD", (int64)ECountryCode::pfenum_MD },
				{ "ECountryCode::pfenum_MC", (int64)ECountryCode::pfenum_MC },
				{ "ECountryCode::pfenum_MN", (int64)ECountryCode::pfenum_MN },
				{ "ECountryCode::pfenum_ME", (int64)ECountryCode::pfenum_ME },
				{ "ECountryCode::pfenum_MS", (int64)ECountryCode::pfenum_MS },
				{ "ECountryCode::pfenum_MA", (int64)ECountryCode::pfenum_MA },
				{ "ECountryCode::pfenum_MZ", (int64)ECountryCode::pfenum_MZ },
				{ "ECountryCode::pfenum_MM", (int64)ECountryCode::pfenum_MM },
				{ "ECountryCode::pfenum_NA", (int64)ECountryCode::pfenum_NA },
				{ "ECountryCode::pfenum_NR", (int64)ECountryCode::pfenum_NR },
				{ "ECountryCode::pfenum_NP", (int64)ECountryCode::pfenum_NP },
				{ "ECountryCode::pfenum_NL", (int64)ECountryCode::pfenum_NL },
				{ "ECountryCode::pfenum_NC", (int64)ECountryCode::pfenum_NC },
				{ "ECountryCode::pfenum_NZ", (int64)ECountryCode::pfenum_NZ },
				{ "ECountryCode::pfenum_NI", (int64)ECountryCode::pfenum_NI },
				{ "ECountryCode::pfenum_NE", (int64)ECountryCode::pfenum_NE },
				{ "ECountryCode::pfenum_NG", (int64)ECountryCode::pfenum_NG },
				{ "ECountryCode::pfenum_NU", (int64)ECountryCode::pfenum_NU },
				{ "ECountryCode::pfenum_NF", (int64)ECountryCode::pfenum_NF },
				{ "ECountryCode::pfenum_MP", (int64)ECountryCode::pfenum_MP },
				{ "ECountryCode::pfenum_NO", (int64)ECountryCode::pfenum_NO },
				{ "ECountryCode::pfenum_OM", (int64)ECountryCode::pfenum_OM },
				{ "ECountryCode::pfenum_PK", (int64)ECountryCode::pfenum_PK },
				{ "ECountryCode::pfenum_PW", (int64)ECountryCode::pfenum_PW },
				{ "ECountryCode::pfenum_PS", (int64)ECountryCode::pfenum_PS },
				{ "ECountryCode::pfenum_PA", (int64)ECountryCode::pfenum_PA },
				{ "ECountryCode::pfenum_PG", (int64)ECountryCode::pfenum_PG },
				{ "ECountryCode::pfenum_PY", (int64)ECountryCode::pfenum_PY },
				{ "ECountryCode::pfenum_PE", (int64)ECountryCode::pfenum_PE },
				{ "ECountryCode::pfenum_PH", (int64)ECountryCode::pfenum_PH },
				{ "ECountryCode::pfenum_PN", (int64)ECountryCode::pfenum_PN },
				{ "ECountryCode::pfenum_PL", (int64)ECountryCode::pfenum_PL },
				{ "ECountryCode::pfenum_PT", (int64)ECountryCode::pfenum_PT },
				{ "ECountryCode::pfenum_PR", (int64)ECountryCode::pfenum_PR },
				{ "ECountryCode::pfenum_QA", (int64)ECountryCode::pfenum_QA },
				{ "ECountryCode::pfenum_RE", (int64)ECountryCode::pfenum_RE },
				{ "ECountryCode::pfenum_RO", (int64)ECountryCode::pfenum_RO },
				{ "ECountryCode::pfenum_RU", (int64)ECountryCode::pfenum_RU },
				{ "ECountryCode::pfenum_RW", (int64)ECountryCode::pfenum_RW },
				{ "ECountryCode::pfenum_BL", (int64)ECountryCode::pfenum_BL },
				{ "ECountryCode::pfenum_SH", (int64)ECountryCode::pfenum_SH },
				{ "ECountryCode::pfenum_KN", (int64)ECountryCode::pfenum_KN },
				{ "ECountryCode::pfenum_LC", (int64)ECountryCode::pfenum_LC },
				{ "ECountryCode::pfenum_MF", (int64)ECountryCode::pfenum_MF },
				{ "ECountryCode::pfenum_PM", (int64)ECountryCode::pfenum_PM },
				{ "ECountryCode::pfenum_VC", (int64)ECountryCode::pfenum_VC },
				{ "ECountryCode::pfenum_WS", (int64)ECountryCode::pfenum_WS },
				{ "ECountryCode::pfenum_SM", (int64)ECountryCode::pfenum_SM },
				{ "ECountryCode::pfenum_ST", (int64)ECountryCode::pfenum_ST },
				{ "ECountryCode::pfenum_SA", (int64)ECountryCode::pfenum_SA },
				{ "ECountryCode::pfenum_SN", (int64)ECountryCode::pfenum_SN },
				{ "ECountryCode::pfenum_RS", (int64)ECountryCode::pfenum_RS },
				{ "ECountryCode::pfenum_SC", (int64)ECountryCode::pfenum_SC },
				{ "ECountryCode::pfenum_SL", (int64)ECountryCode::pfenum_SL },
				{ "ECountryCode::pfenum_SG", (int64)ECountryCode::pfenum_SG },
				{ "ECountryCode::pfenum_SX", (int64)ECountryCode::pfenum_SX },
				{ "ECountryCode::pfenum_SK", (int64)ECountryCode::pfenum_SK },
				{ "ECountryCode::pfenum_SI", (int64)ECountryCode::pfenum_SI },
				{ "ECountryCode::pfenum_SB", (int64)ECountryCode::pfenum_SB },
				{ "ECountryCode::pfenum_SO", (int64)ECountryCode::pfenum_SO },
				{ "ECountryCode::pfenum_ZA", (int64)ECountryCode::pfenum_ZA },
				{ "ECountryCode::pfenum_GS", (int64)ECountryCode::pfenum_GS },
				{ "ECountryCode::pfenum_SS", (int64)ECountryCode::pfenum_SS },
				{ "ECountryCode::pfenum_ES", (int64)ECountryCode::pfenum_ES },
				{ "ECountryCode::pfenum_LK", (int64)ECountryCode::pfenum_LK },
				{ "ECountryCode::pfenum_SD", (int64)ECountryCode::pfenum_SD },
				{ "ECountryCode::pfenum_SR", (int64)ECountryCode::pfenum_SR },
				{ "ECountryCode::pfenum_SJ", (int64)ECountryCode::pfenum_SJ },
				{ "ECountryCode::pfenum_SZ", (int64)ECountryCode::pfenum_SZ },
				{ "ECountryCode::pfenum_SE", (int64)ECountryCode::pfenum_SE },
				{ "ECountryCode::pfenum_CH", (int64)ECountryCode::pfenum_CH },
				{ "ECountryCode::pfenum_SY", (int64)ECountryCode::pfenum_SY },
				{ "ECountryCode::pfenum_TW", (int64)ECountryCode::pfenum_TW },
				{ "ECountryCode::pfenum_TJ", (int64)ECountryCode::pfenum_TJ },
				{ "ECountryCode::pfenum_TZ", (int64)ECountryCode::pfenum_TZ },
				{ "ECountryCode::pfenum_TH", (int64)ECountryCode::pfenum_TH },
				{ "ECountryCode::pfenum_TL", (int64)ECountryCode::pfenum_TL },
				{ "ECountryCode::pfenum_TG", (int64)ECountryCode::pfenum_TG },
				{ "ECountryCode::pfenum_TK", (int64)ECountryCode::pfenum_TK },
				{ "ECountryCode::pfenum_TO", (int64)ECountryCode::pfenum_TO },
				{ "ECountryCode::pfenum_TT", (int64)ECountryCode::pfenum_TT },
				{ "ECountryCode::pfenum_TN", (int64)ECountryCode::pfenum_TN },
				{ "ECountryCode::pfenum_TR", (int64)ECountryCode::pfenum_TR },
				{ "ECountryCode::pfenum_TM", (int64)ECountryCode::pfenum_TM },
				{ "ECountryCode::pfenum_TC", (int64)ECountryCode::pfenum_TC },
				{ "ECountryCode::pfenum_TV", (int64)ECountryCode::pfenum_TV },
				{ "ECountryCode::pfenum_UG", (int64)ECountryCode::pfenum_UG },
				{ "ECountryCode::pfenum_UA", (int64)ECountryCode::pfenum_UA },
				{ "ECountryCode::pfenum_AE", (int64)ECountryCode::pfenum_AE },
				{ "ECountryCode::pfenum_GB", (int64)ECountryCode::pfenum_GB },
				{ "ECountryCode::pfenum_US", (int64)ECountryCode::pfenum_US },
				{ "ECountryCode::pfenum_UM", (int64)ECountryCode::pfenum_UM },
				{ "ECountryCode::pfenum_UY", (int64)ECountryCode::pfenum_UY },
				{ "ECountryCode::pfenum_UZ", (int64)ECountryCode::pfenum_UZ },
				{ "ECountryCode::pfenum_VU", (int64)ECountryCode::pfenum_VU },
				{ "ECountryCode::pfenum_VE", (int64)ECountryCode::pfenum_VE },
				{ "ECountryCode::pfenum_VN", (int64)ECountryCode::pfenum_VN },
				{ "ECountryCode::pfenum_VG", (int64)ECountryCode::pfenum_VG },
				{ "ECountryCode::pfenum_VI", (int64)ECountryCode::pfenum_VI },
				{ "ECountryCode::pfenum_WF", (int64)ECountryCode::pfenum_WF },
				{ "ECountryCode::pfenum_EH", (int64)ECountryCode::pfenum_EH },
				{ "ECountryCode::pfenum_YE", (int64)ECountryCode::pfenum_YE },
				{ "ECountryCode::pfenum_ZM", (int64)ECountryCode::pfenum_ZM },
				{ "ECountryCode::pfenum_ZW", (int64)ECountryCode::pfenum_ZW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** CountryCode */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AD.DisplayName", "AD" },
				{ "pfenum_AD.Name", "ECountryCode::pfenum_AD" },
				{ "pfenum_AE.DisplayName", "AE" },
				{ "pfenum_AE.Name", "ECountryCode::pfenum_AE" },
				{ "pfenum_AF.DisplayName", "AF" },
				{ "pfenum_AF.Name", "ECountryCode::pfenum_AF" },
				{ "pfenum_AG.DisplayName", "AG" },
				{ "pfenum_AG.Name", "ECountryCode::pfenum_AG" },
				{ "pfenum_AI.DisplayName", "AI" },
				{ "pfenum_AI.Name", "ECountryCode::pfenum_AI" },
				{ "pfenum_AL.DisplayName", "AL" },
				{ "pfenum_AL.Name", "ECountryCode::pfenum_AL" },
				{ "pfenum_AM.DisplayName", "AM" },
				{ "pfenum_AM.Name", "ECountryCode::pfenum_AM" },
				{ "pfenum_AO.DisplayName", "AO" },
				{ "pfenum_AO.Name", "ECountryCode::pfenum_AO" },
				{ "pfenum_AQ.DisplayName", "AQ" },
				{ "pfenum_AQ.Name", "ECountryCode::pfenum_AQ" },
				{ "pfenum_AR.DisplayName", "AR" },
				{ "pfenum_AR.Name", "ECountryCode::pfenum_AR" },
				{ "pfenum_AS.DisplayName", "AS" },
				{ "pfenum_AS.Name", "ECountryCode::pfenum_AS" },
				{ "pfenum_AT.DisplayName", "AT" },
				{ "pfenum_AT.Name", "ECountryCode::pfenum_AT" },
				{ "pfenum_AU.DisplayName", "AU" },
				{ "pfenum_AU.Name", "ECountryCode::pfenum_AU" },
				{ "pfenum_AW.DisplayName", "AW" },
				{ "pfenum_AW.Name", "ECountryCode::pfenum_AW" },
				{ "pfenum_AX.DisplayName", "AX" },
				{ "pfenum_AX.Name", "ECountryCode::pfenum_AX" },
				{ "pfenum_AZ.DisplayName", "AZ" },
				{ "pfenum_AZ.Name", "ECountryCode::pfenum_AZ" },
				{ "pfenum_BA.DisplayName", "BA" },
				{ "pfenum_BA.Name", "ECountryCode::pfenum_BA" },
				{ "pfenum_BB.DisplayName", "BB" },
				{ "pfenum_BB.Name", "ECountryCode::pfenum_BB" },
				{ "pfenum_BD.DisplayName", "BD" },
				{ "pfenum_BD.Name", "ECountryCode::pfenum_BD" },
				{ "pfenum_BE.DisplayName", "BE" },
				{ "pfenum_BE.Name", "ECountryCode::pfenum_BE" },
				{ "pfenum_BF.DisplayName", "BF" },
				{ "pfenum_BF.Name", "ECountryCode::pfenum_BF" },
				{ "pfenum_BG.DisplayName", "BG" },
				{ "pfenum_BG.Name", "ECountryCode::pfenum_BG" },
				{ "pfenum_BH.DisplayName", "BH" },
				{ "pfenum_BH.Name", "ECountryCode::pfenum_BH" },
				{ "pfenum_BI.DisplayName", "BI" },
				{ "pfenum_BI.Name", "ECountryCode::pfenum_BI" },
				{ "pfenum_BJ.DisplayName", "BJ" },
				{ "pfenum_BJ.Name", "ECountryCode::pfenum_BJ" },
				{ "pfenum_BL.DisplayName", "BL" },
				{ "pfenum_BL.Name", "ECountryCode::pfenum_BL" },
				{ "pfenum_BM.DisplayName", "BM" },
				{ "pfenum_BM.Name", "ECountryCode::pfenum_BM" },
				{ "pfenum_BN.DisplayName", "BN" },
				{ "pfenum_BN.Name", "ECountryCode::pfenum_BN" },
				{ "pfenum_BO.DisplayName", "BO" },
				{ "pfenum_BO.Name", "ECountryCode::pfenum_BO" },
				{ "pfenum_BQ.DisplayName", "BQ" },
				{ "pfenum_BQ.Name", "ECountryCode::pfenum_BQ" },
				{ "pfenum_BR.DisplayName", "BR" },
				{ "pfenum_BR.Name", "ECountryCode::pfenum_BR" },
				{ "pfenum_BS.DisplayName", "BS" },
				{ "pfenum_BS.Name", "ECountryCode::pfenum_BS" },
				{ "pfenum_BT.DisplayName", "BT" },
				{ "pfenum_BT.Name", "ECountryCode::pfenum_BT" },
				{ "pfenum_BV.DisplayName", "BV" },
				{ "pfenum_BV.Name", "ECountryCode::pfenum_BV" },
				{ "pfenum_BW.DisplayName", "BW" },
				{ "pfenum_BW.Name", "ECountryCode::pfenum_BW" },
				{ "pfenum_BY.DisplayName", "BY" },
				{ "pfenum_BY.Name", "ECountryCode::pfenum_BY" },
				{ "pfenum_BZ.DisplayName", "BZ" },
				{ "pfenum_BZ.Name", "ECountryCode::pfenum_BZ" },
				{ "pfenum_CA.DisplayName", "CA" },
				{ "pfenum_CA.Name", "ECountryCode::pfenum_CA" },
				{ "pfenum_CC.DisplayName", "CC" },
				{ "pfenum_CC.Name", "ECountryCode::pfenum_CC" },
				{ "pfenum_CD.DisplayName", "CD" },
				{ "pfenum_CD.Name", "ECountryCode::pfenum_CD" },
				{ "pfenum_CF.DisplayName", "CF" },
				{ "pfenum_CF.Name", "ECountryCode::pfenum_CF" },
				{ "pfenum_CG.DisplayName", "CG" },
				{ "pfenum_CG.Name", "ECountryCode::pfenum_CG" },
				{ "pfenum_CH.DisplayName", "CH" },
				{ "pfenum_CH.Name", "ECountryCode::pfenum_CH" },
				{ "pfenum_CI.DisplayName", "CI" },
				{ "pfenum_CI.Name", "ECountryCode::pfenum_CI" },
				{ "pfenum_CK.DisplayName", "CK" },
				{ "pfenum_CK.Name", "ECountryCode::pfenum_CK" },
				{ "pfenum_CL.DisplayName", "CL" },
				{ "pfenum_CL.Name", "ECountryCode::pfenum_CL" },
				{ "pfenum_CM.DisplayName", "CM" },
				{ "pfenum_CM.Name", "ECountryCode::pfenum_CM" },
				{ "pfenum_CN.DisplayName", "CN" },
				{ "pfenum_CN.Name", "ECountryCode::pfenum_CN" },
				{ "pfenum_CO.DisplayName", "CO" },
				{ "pfenum_CO.Name", "ECountryCode::pfenum_CO" },
				{ "pfenum_CR.DisplayName", "CR" },
				{ "pfenum_CR.Name", "ECountryCode::pfenum_CR" },
				{ "pfenum_CU.DisplayName", "CU" },
				{ "pfenum_CU.Name", "ECountryCode::pfenum_CU" },
				{ "pfenum_CV.DisplayName", "CV" },
				{ "pfenum_CV.Name", "ECountryCode::pfenum_CV" },
				{ "pfenum_CW.DisplayName", "CW" },
				{ "pfenum_CW.Name", "ECountryCode::pfenum_CW" },
				{ "pfenum_CX.DisplayName", "CX" },
				{ "pfenum_CX.Name", "ECountryCode::pfenum_CX" },
				{ "pfenum_CY.DisplayName", "CY" },
				{ "pfenum_CY.Name", "ECountryCode::pfenum_CY" },
				{ "pfenum_CZ.DisplayName", "CZ" },
				{ "pfenum_CZ.Name", "ECountryCode::pfenum_CZ" },
				{ "pfenum_DE.DisplayName", "DE" },
				{ "pfenum_DE.Name", "ECountryCode::pfenum_DE" },
				{ "pfenum_DJ.DisplayName", "DJ" },
				{ "pfenum_DJ.Name", "ECountryCode::pfenum_DJ" },
				{ "pfenum_DK.DisplayName", "DK" },
				{ "pfenum_DK.Name", "ECountryCode::pfenum_DK" },
				{ "pfenum_DM.DisplayName", "DM" },
				{ "pfenum_DM.Name", "ECountryCode::pfenum_DM" },
				{ "pfenum_DO.DisplayName", "DO" },
				{ "pfenum_DO.Name", "ECountryCode::pfenum_DO" },
				{ "pfenum_DZ.DisplayName", "DZ" },
				{ "pfenum_DZ.Name", "ECountryCode::pfenum_DZ" },
				{ "pfenum_EC.DisplayName", "EC" },
				{ "pfenum_EC.Name", "ECountryCode::pfenum_EC" },
				{ "pfenum_EE.DisplayName", "EE" },
				{ "pfenum_EE.Name", "ECountryCode::pfenum_EE" },
				{ "pfenum_EG.DisplayName", "EG" },
				{ "pfenum_EG.Name", "ECountryCode::pfenum_EG" },
				{ "pfenum_EH.DisplayName", "EH" },
				{ "pfenum_EH.Name", "ECountryCode::pfenum_EH" },
				{ "pfenum_ER.DisplayName", "ER" },
				{ "pfenum_ER.Name", "ECountryCode::pfenum_ER" },
				{ "pfenum_ES.DisplayName", "ES" },
				{ "pfenum_ES.Name", "ECountryCode::pfenum_ES" },
				{ "pfenum_ET.DisplayName", "ET" },
				{ "pfenum_ET.Name", "ECountryCode::pfenum_ET" },
				{ "pfenum_FI.DisplayName", "FI" },
				{ "pfenum_FI.Name", "ECountryCode::pfenum_FI" },
				{ "pfenum_FJ.DisplayName", "FJ" },
				{ "pfenum_FJ.Name", "ECountryCode::pfenum_FJ" },
				{ "pfenum_FK.DisplayName", "FK" },
				{ "pfenum_FK.Name", "ECountryCode::pfenum_FK" },
				{ "pfenum_FM.DisplayName", "FM" },
				{ "pfenum_FM.Name", "ECountryCode::pfenum_FM" },
				{ "pfenum_FO.DisplayName", "FO" },
				{ "pfenum_FO.Name", "ECountryCode::pfenum_FO" },
				{ "pfenum_FR.DisplayName", "FR" },
				{ "pfenum_FR.Name", "ECountryCode::pfenum_FR" },
				{ "pfenum_GA.DisplayName", "GA" },
				{ "pfenum_GA.Name", "ECountryCode::pfenum_GA" },
				{ "pfenum_GB.DisplayName", "GB" },
				{ "pfenum_GB.Name", "ECountryCode::pfenum_GB" },
				{ "pfenum_GD.DisplayName", "GD" },
				{ "pfenum_GD.Name", "ECountryCode::pfenum_GD" },
				{ "pfenum_GE.DisplayName", "GE" },
				{ "pfenum_GE.Name", "ECountryCode::pfenum_GE" },
				{ "pfenum_GF.DisplayName", "GF" },
				{ "pfenum_GF.Name", "ECountryCode::pfenum_GF" },
				{ "pfenum_GG.DisplayName", "GG" },
				{ "pfenum_GG.Name", "ECountryCode::pfenum_GG" },
				{ "pfenum_GH.DisplayName", "GH" },
				{ "pfenum_GH.Name", "ECountryCode::pfenum_GH" },
				{ "pfenum_GI.DisplayName", "GI" },
				{ "pfenum_GI.Name", "ECountryCode::pfenum_GI" },
				{ "pfenum_GL.DisplayName", "GL" },
				{ "pfenum_GL.Name", "ECountryCode::pfenum_GL" },
				{ "pfenum_GM.DisplayName", "GM" },
				{ "pfenum_GM.Name", "ECountryCode::pfenum_GM" },
				{ "pfenum_GN.DisplayName", "GN" },
				{ "pfenum_GN.Name", "ECountryCode::pfenum_GN" },
				{ "pfenum_GP.DisplayName", "GP" },
				{ "pfenum_GP.Name", "ECountryCode::pfenum_GP" },
				{ "pfenum_GQ.DisplayName", "GQ" },
				{ "pfenum_GQ.Name", "ECountryCode::pfenum_GQ" },
				{ "pfenum_GR.DisplayName", "GR" },
				{ "pfenum_GR.Name", "ECountryCode::pfenum_GR" },
				{ "pfenum_GS.DisplayName", "GS" },
				{ "pfenum_GS.Name", "ECountryCode::pfenum_GS" },
				{ "pfenum_GT.DisplayName", "GT" },
				{ "pfenum_GT.Name", "ECountryCode::pfenum_GT" },
				{ "pfenum_GU.DisplayName", "GU" },
				{ "pfenum_GU.Name", "ECountryCode::pfenum_GU" },
				{ "pfenum_GW.DisplayName", "GW" },
				{ "pfenum_GW.Name", "ECountryCode::pfenum_GW" },
				{ "pfenum_GY.DisplayName", "GY" },
				{ "pfenum_GY.Name", "ECountryCode::pfenum_GY" },
				{ "pfenum_HK.DisplayName", "HK" },
				{ "pfenum_HK.Name", "ECountryCode::pfenum_HK" },
				{ "pfenum_HM.DisplayName", "HM" },
				{ "pfenum_HM.Name", "ECountryCode::pfenum_HM" },
				{ "pfenum_HN.DisplayName", "HN" },
				{ "pfenum_HN.Name", "ECountryCode::pfenum_HN" },
				{ "pfenum_HR.DisplayName", "HR" },
				{ "pfenum_HR.Name", "ECountryCode::pfenum_HR" },
				{ "pfenum_HT.DisplayName", "HT" },
				{ "pfenum_HT.Name", "ECountryCode::pfenum_HT" },
				{ "pfenum_HU.DisplayName", "HU" },
				{ "pfenum_HU.Name", "ECountryCode::pfenum_HU" },
				{ "pfenum_ID.DisplayName", "ID" },
				{ "pfenum_ID.Name", "ECountryCode::pfenum_ID" },
				{ "pfenum_IE.DisplayName", "IE" },
				{ "pfenum_IE.Name", "ECountryCode::pfenum_IE" },
				{ "pfenum_IL.DisplayName", "IL" },
				{ "pfenum_IL.Name", "ECountryCode::pfenum_IL" },
				{ "pfenum_IM.DisplayName", "IM" },
				{ "pfenum_IM.Name", "ECountryCode::pfenum_IM" },
				{ "pfenum_IN.DisplayName", "IN" },
				{ "pfenum_IN.Name", "ECountryCode::pfenum_IN" },
				{ "pfenum_IO.DisplayName", "IO" },
				{ "pfenum_IO.Name", "ECountryCode::pfenum_IO" },
				{ "pfenum_IQ.DisplayName", "IQ" },
				{ "pfenum_IQ.Name", "ECountryCode::pfenum_IQ" },
				{ "pfenum_IR.DisplayName", "IR" },
				{ "pfenum_IR.Name", "ECountryCode::pfenum_IR" },
				{ "pfenum_IS.DisplayName", "IS" },
				{ "pfenum_IS.Name", "ECountryCode::pfenum_IS" },
				{ "pfenum_IT.DisplayName", "IT" },
				{ "pfenum_IT.Name", "ECountryCode::pfenum_IT" },
				{ "pfenum_JE.DisplayName", "JE" },
				{ "pfenum_JE.Name", "ECountryCode::pfenum_JE" },
				{ "pfenum_JM.DisplayName", "JM" },
				{ "pfenum_JM.Name", "ECountryCode::pfenum_JM" },
				{ "pfenum_JO.DisplayName", "JO" },
				{ "pfenum_JO.Name", "ECountryCode::pfenum_JO" },
				{ "pfenum_JP.DisplayName", "JP" },
				{ "pfenum_JP.Name", "ECountryCode::pfenum_JP" },
				{ "pfenum_KE.DisplayName", "KE" },
				{ "pfenum_KE.Name", "ECountryCode::pfenum_KE" },
				{ "pfenum_KG.DisplayName", "KG" },
				{ "pfenum_KG.Name", "ECountryCode::pfenum_KG" },
				{ "pfenum_KH.DisplayName", "KH" },
				{ "pfenum_KH.Name", "ECountryCode::pfenum_KH" },
				{ "pfenum_KI.DisplayName", "KI" },
				{ "pfenum_KI.Name", "ECountryCode::pfenum_KI" },
				{ "pfenum_KM.DisplayName", "KM" },
				{ "pfenum_KM.Name", "ECountryCode::pfenum_KM" },
				{ "pfenum_KN.DisplayName", "KN" },
				{ "pfenum_KN.Name", "ECountryCode::pfenum_KN" },
				{ "pfenum_KP.DisplayName", "KP" },
				{ "pfenum_KP.Name", "ECountryCode::pfenum_KP" },
				{ "pfenum_KR.DisplayName", "KR" },
				{ "pfenum_KR.Name", "ECountryCode::pfenum_KR" },
				{ "pfenum_KW.DisplayName", "KW" },
				{ "pfenum_KW.Name", "ECountryCode::pfenum_KW" },
				{ "pfenum_KY.DisplayName", "KY" },
				{ "pfenum_KY.Name", "ECountryCode::pfenum_KY" },
				{ "pfenum_KZ.DisplayName", "KZ" },
				{ "pfenum_KZ.Name", "ECountryCode::pfenum_KZ" },
				{ "pfenum_LA.DisplayName", "LA" },
				{ "pfenum_LA.Name", "ECountryCode::pfenum_LA" },
				{ "pfenum_LB.DisplayName", "LB" },
				{ "pfenum_LB.Name", "ECountryCode::pfenum_LB" },
				{ "pfenum_LC.DisplayName", "LC" },
				{ "pfenum_LC.Name", "ECountryCode::pfenum_LC" },
				{ "pfenum_LI.DisplayName", "LI" },
				{ "pfenum_LI.Name", "ECountryCode::pfenum_LI" },
				{ "pfenum_LK.DisplayName", "LK" },
				{ "pfenum_LK.Name", "ECountryCode::pfenum_LK" },
				{ "pfenum_LR.DisplayName", "LR" },
				{ "pfenum_LR.Name", "ECountryCode::pfenum_LR" },
				{ "pfenum_LS.DisplayName", "LS" },
				{ "pfenum_LS.Name", "ECountryCode::pfenum_LS" },
				{ "pfenum_LT.DisplayName", "LT" },
				{ "pfenum_LT.Name", "ECountryCode::pfenum_LT" },
				{ "pfenum_LU.DisplayName", "LU" },
				{ "pfenum_LU.Name", "ECountryCode::pfenum_LU" },
				{ "pfenum_LV.DisplayName", "LV" },
				{ "pfenum_LV.Name", "ECountryCode::pfenum_LV" },
				{ "pfenum_LY.DisplayName", "LY" },
				{ "pfenum_LY.Name", "ECountryCode::pfenum_LY" },
				{ "pfenum_MA.DisplayName", "MA" },
				{ "pfenum_MA.Name", "ECountryCode::pfenum_MA" },
				{ "pfenum_MC.DisplayName", "MC" },
				{ "pfenum_MC.Name", "ECountryCode::pfenum_MC" },
				{ "pfenum_MD.DisplayName", "MD" },
				{ "pfenum_MD.Name", "ECountryCode::pfenum_MD" },
				{ "pfenum_ME.DisplayName", "ME" },
				{ "pfenum_ME.Name", "ECountryCode::pfenum_ME" },
				{ "pfenum_MF.DisplayName", "MF" },
				{ "pfenum_MF.Name", "ECountryCode::pfenum_MF" },
				{ "pfenum_MG.DisplayName", "MG" },
				{ "pfenum_MG.Name", "ECountryCode::pfenum_MG" },
				{ "pfenum_MH.DisplayName", "MH" },
				{ "pfenum_MH.Name", "ECountryCode::pfenum_MH" },
				{ "pfenum_MK.DisplayName", "MK" },
				{ "pfenum_MK.Name", "ECountryCode::pfenum_MK" },
				{ "pfenum_ML.DisplayName", "ML" },
				{ "pfenum_ML.Name", "ECountryCode::pfenum_ML" },
				{ "pfenum_MM.DisplayName", "MM" },
				{ "pfenum_MM.Name", "ECountryCode::pfenum_MM" },
				{ "pfenum_MN.DisplayName", "MN" },
				{ "pfenum_MN.Name", "ECountryCode::pfenum_MN" },
				{ "pfenum_MO.DisplayName", "MO" },
				{ "pfenum_MO.Name", "ECountryCode::pfenum_MO" },
				{ "pfenum_MP.DisplayName", "MP" },
				{ "pfenum_MP.Name", "ECountryCode::pfenum_MP" },
				{ "pfenum_MQ.DisplayName", "MQ" },
				{ "pfenum_MQ.Name", "ECountryCode::pfenum_MQ" },
				{ "pfenum_MR.DisplayName", "MR" },
				{ "pfenum_MR.Name", "ECountryCode::pfenum_MR" },
				{ "pfenum_MS.DisplayName", "MS" },
				{ "pfenum_MS.Name", "ECountryCode::pfenum_MS" },
				{ "pfenum_MT.DisplayName", "MT" },
				{ "pfenum_MT.Name", "ECountryCode::pfenum_MT" },
				{ "pfenum_MU.DisplayName", "MU" },
				{ "pfenum_MU.Name", "ECountryCode::pfenum_MU" },
				{ "pfenum_MV.DisplayName", "MV" },
				{ "pfenum_MV.Name", "ECountryCode::pfenum_MV" },
				{ "pfenum_MW.DisplayName", "MW" },
				{ "pfenum_MW.Name", "ECountryCode::pfenum_MW" },
				{ "pfenum_MX.DisplayName", "MX" },
				{ "pfenum_MX.Name", "ECountryCode::pfenum_MX" },
				{ "pfenum_MY.DisplayName", "MY" },
				{ "pfenum_MY.Name", "ECountryCode::pfenum_MY" },
				{ "pfenum_MZ.DisplayName", "MZ" },
				{ "pfenum_MZ.Name", "ECountryCode::pfenum_MZ" },
				{ "pfenum_NA.DisplayName", "NA" },
				{ "pfenum_NA.Name", "ECountryCode::pfenum_NA" },
				{ "pfenum_NC.DisplayName", "NC" },
				{ "pfenum_NC.Name", "ECountryCode::pfenum_NC" },
				{ "pfenum_NE.DisplayName", "NE" },
				{ "pfenum_NE.Name", "ECountryCode::pfenum_NE" },
				{ "pfenum_NF.DisplayName", "NF" },
				{ "pfenum_NF.Name", "ECountryCode::pfenum_NF" },
				{ "pfenum_NG.DisplayName", "NG" },
				{ "pfenum_NG.Name", "ECountryCode::pfenum_NG" },
				{ "pfenum_NI.DisplayName", "NI" },
				{ "pfenum_NI.Name", "ECountryCode::pfenum_NI" },
				{ "pfenum_NL.DisplayName", "NL" },
				{ "pfenum_NL.Name", "ECountryCode::pfenum_NL" },
				{ "pfenum_NO.DisplayName", "NO" },
				{ "pfenum_NO.Name", "ECountryCode::pfenum_NO" },
				{ "pfenum_NP.DisplayName", "NP" },
				{ "pfenum_NP.Name", "ECountryCode::pfenum_NP" },
				{ "pfenum_NR.DisplayName", "NR" },
				{ "pfenum_NR.Name", "ECountryCode::pfenum_NR" },
				{ "pfenum_NU.DisplayName", "NU" },
				{ "pfenum_NU.Name", "ECountryCode::pfenum_NU" },
				{ "pfenum_NZ.DisplayName", "NZ" },
				{ "pfenum_NZ.Name", "ECountryCode::pfenum_NZ" },
				{ "pfenum_OM.DisplayName", "OM" },
				{ "pfenum_OM.Name", "ECountryCode::pfenum_OM" },
				{ "pfenum_PA.DisplayName", "PA" },
				{ "pfenum_PA.Name", "ECountryCode::pfenum_PA" },
				{ "pfenum_PE.DisplayName", "PE" },
				{ "pfenum_PE.Name", "ECountryCode::pfenum_PE" },
				{ "pfenum_PF.DisplayName", "PF" },
				{ "pfenum_PF.Name", "ECountryCode::pfenum_PF" },
				{ "pfenum_PG.DisplayName", "PG" },
				{ "pfenum_PG.Name", "ECountryCode::pfenum_PG" },
				{ "pfenum_PH.DisplayName", "PH" },
				{ "pfenum_PH.Name", "ECountryCode::pfenum_PH" },
				{ "pfenum_PK.DisplayName", "PK" },
				{ "pfenum_PK.Name", "ECountryCode::pfenum_PK" },
				{ "pfenum_PL.DisplayName", "PL" },
				{ "pfenum_PL.Name", "ECountryCode::pfenum_PL" },
				{ "pfenum_PM.DisplayName", "PM" },
				{ "pfenum_PM.Name", "ECountryCode::pfenum_PM" },
				{ "pfenum_PN.DisplayName", "PN" },
				{ "pfenum_PN.Name", "ECountryCode::pfenum_PN" },
				{ "pfenum_PR.DisplayName", "PR" },
				{ "pfenum_PR.Name", "ECountryCode::pfenum_PR" },
				{ "pfenum_PS.DisplayName", "PS" },
				{ "pfenum_PS.Name", "ECountryCode::pfenum_PS" },
				{ "pfenum_PT.DisplayName", "PT" },
				{ "pfenum_PT.Name", "ECountryCode::pfenum_PT" },
				{ "pfenum_PW.DisplayName", "PW" },
				{ "pfenum_PW.Name", "ECountryCode::pfenum_PW" },
				{ "pfenum_PY.DisplayName", "PY" },
				{ "pfenum_PY.Name", "ECountryCode::pfenum_PY" },
				{ "pfenum_QA.DisplayName", "QA" },
				{ "pfenum_QA.Name", "ECountryCode::pfenum_QA" },
				{ "pfenum_RE.DisplayName", "RE" },
				{ "pfenum_RE.Name", "ECountryCode::pfenum_RE" },
				{ "pfenum_RO.DisplayName", "RO" },
				{ "pfenum_RO.Name", "ECountryCode::pfenum_RO" },
				{ "pfenum_RS.DisplayName", "RS" },
				{ "pfenum_RS.Name", "ECountryCode::pfenum_RS" },
				{ "pfenum_RU.DisplayName", "RU" },
				{ "pfenum_RU.Name", "ECountryCode::pfenum_RU" },
				{ "pfenum_RW.DisplayName", "RW" },
				{ "pfenum_RW.Name", "ECountryCode::pfenum_RW" },
				{ "pfenum_SA.DisplayName", "SA" },
				{ "pfenum_SA.Name", "ECountryCode::pfenum_SA" },
				{ "pfenum_SB.DisplayName", "SB" },
				{ "pfenum_SB.Name", "ECountryCode::pfenum_SB" },
				{ "pfenum_SC.DisplayName", "SC" },
				{ "pfenum_SC.Name", "ECountryCode::pfenum_SC" },
				{ "pfenum_SD.DisplayName", "SD" },
				{ "pfenum_SD.Name", "ECountryCode::pfenum_SD" },
				{ "pfenum_SE.DisplayName", "SE" },
				{ "pfenum_SE.Name", "ECountryCode::pfenum_SE" },
				{ "pfenum_SG.DisplayName", "SG" },
				{ "pfenum_SG.Name", "ECountryCode::pfenum_SG" },
				{ "pfenum_SH.DisplayName", "SH" },
				{ "pfenum_SH.Name", "ECountryCode::pfenum_SH" },
				{ "pfenum_SI.DisplayName", "SI" },
				{ "pfenum_SI.Name", "ECountryCode::pfenum_SI" },
				{ "pfenum_SJ.DisplayName", "SJ" },
				{ "pfenum_SJ.Name", "ECountryCode::pfenum_SJ" },
				{ "pfenum_SK.DisplayName", "SK" },
				{ "pfenum_SK.Name", "ECountryCode::pfenum_SK" },
				{ "pfenum_SL.DisplayName", "SL" },
				{ "pfenum_SL.Name", "ECountryCode::pfenum_SL" },
				{ "pfenum_SM.DisplayName", "SM" },
				{ "pfenum_SM.Name", "ECountryCode::pfenum_SM" },
				{ "pfenum_SN.DisplayName", "SN" },
				{ "pfenum_SN.Name", "ECountryCode::pfenum_SN" },
				{ "pfenum_SO.DisplayName", "SO" },
				{ "pfenum_SO.Name", "ECountryCode::pfenum_SO" },
				{ "pfenum_SR.DisplayName", "SR" },
				{ "pfenum_SR.Name", "ECountryCode::pfenum_SR" },
				{ "pfenum_SS.DisplayName", "SS" },
				{ "pfenum_SS.Name", "ECountryCode::pfenum_SS" },
				{ "pfenum_ST.DisplayName", "ST" },
				{ "pfenum_ST.Name", "ECountryCode::pfenum_ST" },
				{ "pfenum_SV.DisplayName", "SV" },
				{ "pfenum_SV.Name", "ECountryCode::pfenum_SV" },
				{ "pfenum_SX.DisplayName", "SX" },
				{ "pfenum_SX.Name", "ECountryCode::pfenum_SX" },
				{ "pfenum_SY.DisplayName", "SY" },
				{ "pfenum_SY.Name", "ECountryCode::pfenum_SY" },
				{ "pfenum_SZ.DisplayName", "SZ" },
				{ "pfenum_SZ.Name", "ECountryCode::pfenum_SZ" },
				{ "pfenum_TC.DisplayName", "TC" },
				{ "pfenum_TC.Name", "ECountryCode::pfenum_TC" },
				{ "pfenum_TD.DisplayName", "TD" },
				{ "pfenum_TD.Name", "ECountryCode::pfenum_TD" },
				{ "pfenum_TF.DisplayName", "TF" },
				{ "pfenum_TF.Name", "ECountryCode::pfenum_TF" },
				{ "pfenum_TG.DisplayName", "TG" },
				{ "pfenum_TG.Name", "ECountryCode::pfenum_TG" },
				{ "pfenum_TH.DisplayName", "TH" },
				{ "pfenum_TH.Name", "ECountryCode::pfenum_TH" },
				{ "pfenum_TJ.DisplayName", "TJ" },
				{ "pfenum_TJ.Name", "ECountryCode::pfenum_TJ" },
				{ "pfenum_TK.DisplayName", "TK" },
				{ "pfenum_TK.Name", "ECountryCode::pfenum_TK" },
				{ "pfenum_TL.DisplayName", "TL" },
				{ "pfenum_TL.Name", "ECountryCode::pfenum_TL" },
				{ "pfenum_TM.DisplayName", "TM" },
				{ "pfenum_TM.Name", "ECountryCode::pfenum_TM" },
				{ "pfenum_TN.DisplayName", "TN" },
				{ "pfenum_TN.Name", "ECountryCode::pfenum_TN" },
				{ "pfenum_TO.DisplayName", "TO" },
				{ "pfenum_TO.Name", "ECountryCode::pfenum_TO" },
				{ "pfenum_TR.DisplayName", "TR" },
				{ "pfenum_TR.Name", "ECountryCode::pfenum_TR" },
				{ "pfenum_TT.DisplayName", "TT" },
				{ "pfenum_TT.Name", "ECountryCode::pfenum_TT" },
				{ "pfenum_TV.DisplayName", "TV" },
				{ "pfenum_TV.Name", "ECountryCode::pfenum_TV" },
				{ "pfenum_TW.DisplayName", "TW" },
				{ "pfenum_TW.Name", "ECountryCode::pfenum_TW" },
				{ "pfenum_TZ.DisplayName", "TZ" },
				{ "pfenum_TZ.Name", "ECountryCode::pfenum_TZ" },
				{ "pfenum_UA.DisplayName", "UA" },
				{ "pfenum_UA.Name", "ECountryCode::pfenum_UA" },
				{ "pfenum_UG.DisplayName", "UG" },
				{ "pfenum_UG.Name", "ECountryCode::pfenum_UG" },
				{ "pfenum_UM.DisplayName", "UM" },
				{ "pfenum_UM.Name", "ECountryCode::pfenum_UM" },
				{ "pfenum_US.DisplayName", "US" },
				{ "pfenum_US.Name", "ECountryCode::pfenum_US" },
				{ "pfenum_UY.DisplayName", "UY" },
				{ "pfenum_UY.Name", "ECountryCode::pfenum_UY" },
				{ "pfenum_UZ.DisplayName", "UZ" },
				{ "pfenum_UZ.Name", "ECountryCode::pfenum_UZ" },
				{ "pfenum_VA.DisplayName", "VA" },
				{ "pfenum_VA.Name", "ECountryCode::pfenum_VA" },
				{ "pfenum_VC.DisplayName", "VC" },
				{ "pfenum_VC.Name", "ECountryCode::pfenum_VC" },
				{ "pfenum_VE.DisplayName", "VE" },
				{ "pfenum_VE.Name", "ECountryCode::pfenum_VE" },
				{ "pfenum_VG.DisplayName", "VG" },
				{ "pfenum_VG.Name", "ECountryCode::pfenum_VG" },
				{ "pfenum_VI.DisplayName", "VI" },
				{ "pfenum_VI.Name", "ECountryCode::pfenum_VI" },
				{ "pfenum_VN.DisplayName", "VN" },
				{ "pfenum_VN.Name", "ECountryCode::pfenum_VN" },
				{ "pfenum_VU.DisplayName", "VU" },
				{ "pfenum_VU.Name", "ECountryCode::pfenum_VU" },
				{ "pfenum_WF.DisplayName", "WF" },
				{ "pfenum_WF.Name", "ECountryCode::pfenum_WF" },
				{ "pfenum_WS.DisplayName", "WS" },
				{ "pfenum_WS.Name", "ECountryCode::pfenum_WS" },
				{ "pfenum_YE.DisplayName", "YE" },
				{ "pfenum_YE.Name", "ECountryCode::pfenum_YE" },
				{ "pfenum_YT.DisplayName", "YT" },
				{ "pfenum_YT.Name", "ECountryCode::pfenum_YT" },
				{ "pfenum_ZA.DisplayName", "ZA" },
				{ "pfenum_ZA.Name", "ECountryCode::pfenum_ZA" },
				{ "pfenum_ZM.DisplayName", "ZM" },
				{ "pfenum_ZM.Name", "ECountryCode::pfenum_ZM" },
				{ "pfenum_ZW.DisplayName", "ZW" },
				{ "pfenum_ZW.Name", "ECountryCode::pfenum_ZW" },
				{ "ToolTip", "CountryCode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECountryCode",
				"ECountryCode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EContinentCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EContinentCode, Z_Construct_UPackage__Script_PlayFab(), TEXT("EContinentCode"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EContinentCode>()
	{
		return EContinentCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContinentCode(EContinentCode_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EContinentCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EContinentCode_Hash() { return 2756200522U; }
	UEnum* Z_Construct_UEnum_PlayFab_EContinentCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContinentCode"), 0, Get_Z_Construct_UEnum_PlayFab_EContinentCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContinentCode::pfenum_AF", (int64)EContinentCode::pfenum_AF },
				{ "EContinentCode::pfenum_AN", (int64)EContinentCode::pfenum_AN },
				{ "EContinentCode::pfenum_AS", (int64)EContinentCode::pfenum_AS },
				{ "EContinentCode::pfenum_EU", (int64)EContinentCode::pfenum_EU },
				{ "EContinentCode::pfenum_NA", (int64)EContinentCode::pfenum_NA },
				{ "EContinentCode::pfenum_OC", (int64)EContinentCode::pfenum_OC },
				{ "EContinentCode::pfenum_SA", (int64)EContinentCode::pfenum_SA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** ContinentCode */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_AF.DisplayName", "AF" },
				{ "pfenum_AF.Name", "EContinentCode::pfenum_AF" },
				{ "pfenum_AN.DisplayName", "AN" },
				{ "pfenum_AN.Name", "EContinentCode::pfenum_AN" },
				{ "pfenum_AS.DisplayName", "AS" },
				{ "pfenum_AS.Name", "EContinentCode::pfenum_AS" },
				{ "pfenum_EU.DisplayName", "EU" },
				{ "pfenum_EU.Name", "EContinentCode::pfenum_EU" },
				{ "pfenum_NA.DisplayName", "NA" },
				{ "pfenum_NA.Name", "EContinentCode::pfenum_NA" },
				{ "pfenum_OC.DisplayName", "OC" },
				{ "pfenum_OC.Name", "EContinentCode::pfenum_OC" },
				{ "pfenum_SA.DisplayName", "SA" },
				{ "pfenum_SA.Name", "EContinentCode::pfenum_SA" },
				{ "ToolTip", "ContinentCode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EContinentCode",
				"EContinentCode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConditionals_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EConditionals, Z_Construct_UPackage__Script_PlayFab(), TEXT("EConditionals"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EConditionals>()
	{
		return EConditionals_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConditionals(EConditionals_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EConditionals"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EConditionals_Hash() { return 880451158U; }
	UEnum* Z_Construct_UEnum_PlayFab_EConditionals()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConditionals"), 0, Get_Z_Construct_UEnum_PlayFab_EConditionals_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConditionals::pfenum_Any", (int64)EConditionals::pfenum_Any },
				{ "EConditionals::pfenum_True", (int64)EConditionals::pfenum_True },
				{ "EConditionals::pfenum_False", (int64)EConditionals::pfenum_False },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Conditionals */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Any.DisplayName", "Any" },
				{ "pfenum_Any.Name", "EConditionals::pfenum_Any" },
				{ "pfenum_False.DisplayName", "False" },
				{ "pfenum_False.Name", "EConditionals::pfenum_False" },
				{ "pfenum_True.DisplayName", "True" },
				{ "pfenum_True.Name", "EConditionals::pfenum_True" },
				{ "ToolTip", "Conditionals" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EConditionals",
				"EConditionals",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAuthTokenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAuthTokenType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAuthTokenType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAuthTokenType>()
	{
		return EAuthTokenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAuthTokenType(EAuthTokenType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAuthTokenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAuthTokenType_Hash() { return 2916532819U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAuthTokenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAuthTokenType"), 0, Get_Z_Construct_UEnum_PlayFab_EAuthTokenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAuthTokenType::pfenum_Email", (int64)EAuthTokenType::pfenum_Email },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** AuthTokenType */" },
				{ "ModuleRelativePath", "Classes/PlayFabEnums.h" },
				{ "pfenum_Email.DisplayName", "Email" },
				{ "pfenum_Email.Name", "EAuthTokenType::pfenum_Email" },
				{ "ToolTip", "AuthTokenType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAuthTokenType",
				"EAuthTokenType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
