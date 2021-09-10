// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabJsonValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabJsonValue() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPFJson();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonValue_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EPFJson_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPFJson, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPFJson"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPFJson::Type>()
	{
		return EPFJson_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPFJson(EPFJson_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPFJson"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPFJson_Hash() { return 3235063409U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPFJson()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPFJson"), 0, Get_Z_Construct_UEnum_PlayFab_EPFJson_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPFJson::None", (int64)EPFJson::None },
				{ "EPFJson::Null", (int64)EPFJson::Null },
				{ "EPFJson::String", (int64)EPFJson::String },
				{ "EPFJson::Number", (int64)EPFJson::Number },
				{ "EPFJson::Boolean", (int64)EPFJson::Boolean },
				{ "EPFJson::Array", (int64)EPFJson::Array },
				{ "EPFJson::Object", (int64)EPFJson::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EPFJson::Array" },
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EPFJson::Boolean" },
				{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
				{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
				{ "None.Name", "EPFJson::None" },
				{ "Null.Name", "EPFJson::Null" },
				{ "Number.Name", "EPFJson::Number" },
				{ "Object.Name", "EPFJson::Object" },
				{ "String.Name", "EPFJson::String" },
				{ "ToolTip", "Represents all the types a Json Value can be." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPFJson",
				"EPFJson::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPlayFabJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execGetTypeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTypeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPFJson::Type>*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueObject(Z_Param_WorldContextObject,Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(UPlayFabJsonValue*,Z_Param_Out_InArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueBool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueNumber)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number);
		P_NATIVE_END;
	}
	void UPlayFabJsonValue::StaticRegisterNativesUPlayFabJsonValue()
	{
		UClass* Class = UPlayFabJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &UPlayFabJsonValue::execAsArray },
			{ "AsBool", &UPlayFabJsonValue::execAsBool },
			{ "AsNumber", &UPlayFabJsonValue::execAsNumber },
			{ "AsObject", &UPlayFabJsonValue::execAsObject },
			{ "AsString", &UPlayFabJsonValue::execAsString },
			{ "ConstructJsonValueArray", &UPlayFabJsonValue::execConstructJsonValueArray },
			{ "ConstructJsonValueBool", &UPlayFabJsonValue::execConstructJsonValueBool },
			{ "ConstructJsonValueNumber", &UPlayFabJsonValue::execConstructJsonValueNumber },
			{ "ConstructJsonValueObject", &UPlayFabJsonValue::execConstructJsonValueObject },
			{ "ConstructJsonValueString", &UPlayFabJsonValue::execConstructJsonValueString },
			{ "GetType", &UPlayFabJsonValue::execGetType },
			{ "GetTypeString", &UPlayFabJsonValue::execGetTypeString },
			{ "IsNull", &UPlayFabJsonValue::execIsNull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics
	{
		struct PlayFabJsonValue_eventAsArray_Parms
		{
			TArray<UPlayFabJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsArray", nullptr, nullptr, sizeof(PlayFabJsonValue_eventAsArray_Parms), Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics
	{
		struct PlayFabJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayFabJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsBool", nullptr, nullptr, sizeof(PlayFabJsonValue_eventAsBool_Parms), Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics
	{
		struct PlayFabJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsNumber", nullptr, nullptr, sizeof(PlayFabJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics
	{
		struct PlayFabJsonValue_eventAsObject_Parms
		{
			UPlayFabJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsObject", nullptr, nullptr, sizeof(PlayFabJsonValue_eventAsObject_Parms), Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics
	{
		struct PlayFabJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns this value as a number, throwing an error if this is not an Json String */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns this value as a number, throwing an error if this is not an Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsString", nullptr, nullptr, sizeof(PlayFabJsonValue_eventAsString_Parms), Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics
	{
		struct PlayFabJsonValue_eventConstructJsonValueArray_Parms
		{
			UObject* WorldContextObject;
			TArray<UPlayFabJsonValue*> InArray;
			UPlayFabJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Create new Json Array value */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Create new Json Array value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueArray", nullptr, nullptr, sizeof(PlayFabJsonValue_eventConstructJsonValueArray_Parms), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics
	{
		struct PlayFabJsonValue_eventConstructJsonValueBool_Parms
		{
			UObject* WorldContextObject;
			bool InValue;
			UPlayFabJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((PlayFabJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Create new Json Bool value */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Create new Json Bool value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueBool", nullptr, nullptr, sizeof(PlayFabJsonValue_eventConstructJsonValueBool_Parms), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics
	{
		struct PlayFabJsonValue_eventConstructJsonValueNumber_Parms
		{
			UObject* WorldContextObject;
			float Number;
			UPlayFabJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Create new Json Number value\n    * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, sizeof(PlayFabJsonValue_eventConstructJsonValueNumber_Parms), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics
	{
		struct PlayFabJsonValue_eventConstructJsonValueObject_Parms
		{
			UObject* WorldContextObject;
			UPlayFabJsonObject* JsonObject;
			UPlayFabJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Create new Json Object value */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Create new Json Object value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueObject", nullptr, nullptr, sizeof(PlayFabJsonValue_eventConstructJsonValueObject_Parms), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics
	{
		struct PlayFabJsonValue_eventConstructJsonValueString_Parms
		{
			UObject* WorldContextObject;
			FString StringValue;
			UPlayFabJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Create new Json String value */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json String Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Create new Json String value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueString", nullptr, nullptr, sizeof(PlayFabJsonValue_eventConstructJsonValueString_Parms), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics
	{
		struct PlayFabJsonValue_eventGetType_Parms
		{
			TEnumAsByte<EPFJson::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_PlayFab_EPFJson, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Get type of Json value (Enum) */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Get type of Json value (Enum)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "GetType", nullptr, nullptr, sizeof(PlayFabJsonValue_eventGetType_Parms), Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics
	{
		struct PlayFabJsonValue_eventGetTypeString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Get type of Json value (String) */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Get type of Json value (String)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "GetTypeString", nullptr, nullptr, sizeof(PlayFabJsonValue_eventGetTypeString_Parms), Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics
	{
		struct PlayFabJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayFabJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
		{ "Comment", "/** Returns true if this value is a 'null' */" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Returns true if this value is a 'null'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "IsNull", nullptr, nullptr, sizeof(PlayFabJsonValue_eventIsNull_Parms), Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabJsonValue_NoRegister()
	{
		return UPlayFabJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsArray, "AsArray" }, // 3127516236
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsBool, "AsBool" }, // 3589396697
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsNumber, "AsNumber" }, // 2101406813
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsObject, "AsObject" }, // 2347640615
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsString, "AsString" }, // 2837441016
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 4230634727
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 1057152379
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 1068481951
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 1303444748
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 3885845888
		{ &Z_Construct_UFunction_UPlayFabJsonValue_GetType, "GetType" }, // 2553863913
		{ &Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString, "GetTypeString" }, // 4288221165
		{ &Z_Construct_UFunction_UPlayFabJsonValue_IsNull, "IsNull" }, // 2159326603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
		{ "IncludePath", "PlayFabJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabJsonValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabJsonValue_Statics::ClassParams = {
		&UPlayFabJsonValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabJsonValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabJsonValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabJsonValue, 45274974);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabJsonValue>()
	{
		return UPlayFabJsonValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabJsonValue(Z_Construct_UClass_UPlayFabJsonValue, &UPlayFabJsonValue::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabJsonValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabJsonValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
