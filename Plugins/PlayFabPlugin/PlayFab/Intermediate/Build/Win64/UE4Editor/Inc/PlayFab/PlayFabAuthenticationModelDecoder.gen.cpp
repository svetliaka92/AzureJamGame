// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAuthenticationModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationValidateEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationGetEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationModelDecoder::StaticRegisterNativesUPlayFabAuthenticationModelDecoder()
	{
		UClass* Class = UPlayFabAuthenticationModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeGetEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse },
			{ "decodeValidateEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationGetEntityTokenResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the GetEntityTokenResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the GetEntityTokenResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeGetEntityTokenResponseResponse", nullptr, nullptr, sizeof(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationValidateEntityTokenResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the ValidateEntityTokenResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the ValidateEntityTokenResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeValidateEntityTokenResponseResponse", nullptr, nullptr, sizeof(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister()
	{
		return UPlayFabAuthenticationModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse, "decodeGetEntityTokenResponseResponse" }, // 642877385
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse, "decodeValidateEntityTokenResponseResponse" }, // 983641337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabAuthenticationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams = {
		&UPlayFabAuthenticationModelDecoder::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabAuthenticationModelDecoder, 3204334963);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabAuthenticationModelDecoder>()
	{
		return UPlayFabAuthenticationModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabAuthenticationModelDecoder(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, &UPlayFabAuthenticationModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabAuthenticationModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
