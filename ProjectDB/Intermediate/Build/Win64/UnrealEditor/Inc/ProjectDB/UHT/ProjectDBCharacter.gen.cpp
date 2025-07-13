// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/ProjectDBCharacter.h"
#include "ProjectDB/Public/GetAbilityInfo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDBCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
PROJECTDB_API UClass* Z_Construct_UClass_AProjectDBCharacter();
PROJECTDB_API UClass* Z_Construct_UClass_AProjectDBCharacter_NoRegister();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister();
PROJECTDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class AProjectDBCharacter Function AddLooseGameplayTag
struct Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics
{
	struct ProjectDBCharacter_eventAddLooseGameplayTag_Parms
	{
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventAddLooseGameplayTag_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "AddLooseGameplayTag", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::ProjectDBCharacter_eventAddLooseGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::ProjectDBCharacter_eventAddLooseGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execAddLooseGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLooseGameplayTag(Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function AddLooseGameplayTag

// Begin Class AProjectDBCharacter Function CancelAbilityWithTags
struct Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics
{
	struct ProjectDBCharacter_eventCancelAbilityWithTags_Parms
	{
		FGameplayTagContainer WithTags;
		FGameplayTagContainer WithoutTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithoutTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::NewProp_WithTags = { "WithTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventCancelAbilityWithTags_Parms, WithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::NewProp_WithoutTags = { "WithoutTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventCancelAbilityWithTags_Parms, WithoutTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::NewProp_WithTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::NewProp_WithoutTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "CancelAbilityWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::ProjectDBCharacter_eventCancelAbilityWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::ProjectDBCharacter_eventCancelAbilityWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execCancelAbilityWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithTags);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithoutTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAbilityWithTags(Z_Param_WithTags,Z_Param_WithoutTags);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function CancelAbilityWithTags

// Begin Class AProjectDBCharacter Function ChangeAbilityLevelWithTags
struct Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics
{
	struct ProjectDBCharacter_eventChangeAbilityLevelWithTags_Parms
	{
		FGameplayTagContainer TagContainer;
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventChangeAbilityLevelWithTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventChangeAbilityLevelWithTags_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "ChangeAbilityLevelWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::ProjectDBCharacter_eventChangeAbilityLevelWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::ProjectDBCharacter_eventChangeAbilityLevelWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execChangeAbilityLevelWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeAbilityLevelWithTags(Z_Param_TagContainer,Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function ChangeAbilityLevelWithTags

// Begin Class AProjectDBCharacter Function GetAbilityInfoFromAbilityClass
struct Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics
{
	struct ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms
	{
		TSubclassOf<UGameplayAbility> AbilityClass;
		int32 AtAbilityLevel;
		FGameplayAbilityInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtAbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_AtAbilityLevel = { "AtAbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms, AtAbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(0, nullptr) }; // 3835202411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_AtAbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "GetAbilityInfoFromAbilityClass", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::ProjectDBCharacter_eventGetAbilityInfoFromAbilityClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execGetAbilityInfoFromAbilityClass)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_AtAbilityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfoFromAbilityClass(Z_Param_AbilityClass,Z_Param_AtAbilityLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function GetAbilityInfoFromAbilityClass

// Begin Class AProjectDBCharacter Function GetAttackPowerValue
struct Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics
{
	struct ProjectDBCharacter_eventGetAttackPowerValue_Parms
	{
		float AttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetAttackPowerValue_Parms, AttackPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::NewProp_AttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "GetAttackPowerValue", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::ProjectDBCharacter_eventGetAttackPowerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::ProjectDBCharacter_eventGetAttackPowerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execGetAttackPowerValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAttackPowerValue(Z_Param_Out_AttackPower);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function GetAttackPowerValue

// Begin Class AProjectDBCharacter Function GetDefenceValue
struct Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics
{
	struct ProjectDBCharacter_eventGetDefenceValue_Parms
	{
		float Defence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Defence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetDefenceValue_Parms, Defence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::NewProp_Defence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "GetDefenceValue", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::ProjectDBCharacter_eventGetDefenceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::ProjectDBCharacter_eventGetDefenceValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execGetDefenceValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Defence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDefenceValue(Z_Param_Out_Defence);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function GetDefenceValue

// Begin Class AProjectDBCharacter Function GetHealthValues
struct Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics
{
	struct ProjectDBCharacter_eventGetHealthValues_Parms
	{
		float Health;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Getters\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetHealthValues_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetHealthValues_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "GetHealthValues", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::ProjectDBCharacter_eventGetHealthValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::ProjectDBCharacter_eventGetHealthValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execGetHealthValues)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Health);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHealthValues(Z_Param_Out_Health,Z_Param_Out_MaxHealth);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function GetHealthValues

// Begin Class AProjectDBCharacter Function GetManaValues
struct Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics
{
	struct ProjectDBCharacter_eventGetManaValues_Parms
	{
		float Mana;
		float MaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetManaValues_Parms, Mana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventGetManaValues_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "GetManaValues", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::ProjectDBCharacter_eventGetManaValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::ProjectDBCharacter_eventGetManaValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_GetManaValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_GetManaValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execGetManaValues)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Mana);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetManaValues(Z_Param_Out_Mana,Z_Param_Out_MaxMana);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function GetManaValues

// Begin Class AProjectDBCharacter Function InitializeAbility
struct Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics
{
	struct ProjectDBCharacter_eventInitializeAbility_Parms
	{
		TSubclassOf<UGameplayAbility> AbilityToGet;
		int32 AbilityLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::NewProp_AbilityToGet = { "AbilityToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventInitializeAbility_Parms, AbilityToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventInitializeAbility_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::NewProp_AbilityToGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "InitializeAbility", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::ProjectDBCharacter_eventInitializeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::ProjectDBCharacter_eventInitializeAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execInitializeAbility)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityToGet);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbility(Z_Param_AbilityToGet,Z_Param_AbilityLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function InitializeAbility

// Begin Class AProjectDBCharacter Function InitializeAbilityMulti
struct Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics
{
	struct ProjectDBCharacter_eventInitializeAbilityMulti_Parms
	{
		TArray<TSubclassOf<UGameplayAbility> > AbilitiesToAcquire;
		int32 AbilityLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fixed parameter to const reference\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed parameter to const reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesToAcquire_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilitiesToAcquire_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesToAcquire;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire_Inner = { "AbilitiesToAcquire", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire = { "AbilitiesToAcquire", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventInitializeAbilityMulti_Parms, AbilitiesToAcquire), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesToAcquire_MetaData), NewProp_AbilitiesToAcquire_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventInitializeAbilityMulti_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "InitializeAbilityMulti", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::ProjectDBCharacter_eventInitializeAbilityMulti_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::ProjectDBCharacter_eventInitializeAbilityMulti_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execInitializeAbilityMulti)
{
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_AbilitiesToAcquire);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbilityMulti(Z_Param_Out_AbilitiesToAcquire,Z_Param_AbilityLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function InitializeAbilityMulti

// Begin Class AProjectDBCharacter Function OnAttackPowerChange
struct ProjectDBCharacter_eventOnAttackPowerChange_Parms
{
	float AttackPower;
	int32 StackCount;
};
static const FName NAME_AProjectDBCharacter_OnAttackPowerChange = FName(TEXT("OnAttackPowerChange"));
void AProjectDBCharacter::OnAttackPowerChange(float AttackPower, int32 StackCount)
{
	ProjectDBCharacter_eventOnAttackPowerChange_Parms Parms;
	Parms.AttackPower=AttackPower;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_OnAttackPowerChange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnAttackPowerChange_Parms, AttackPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnAttackPowerChange_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnAttackPowerChange", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::PropPointers), sizeof(ProjectDBCharacter_eventOnAttackPowerChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventOnAttackPowerChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AProjectDBCharacter Function OnAttackPowerChange

// Begin Class AProjectDBCharacter Function OnAttackPowerChangedNative
struct Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics
{
	struct ProjectDBCharacter_eventOnAttackPowerChangedNative_Parms
	{
		float AttackPower;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnAttackPowerChangedNative_Parms, AttackPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnAttackPowerChangedNative_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnAttackPowerChangedNative", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::ProjectDBCharacter_eventOnAttackPowerChangedNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::ProjectDBCharacter_eventOnAttackPowerChangedNative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execOnAttackPowerChangedNative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttackPower);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackPowerChangedNative(Z_Param_AttackPower,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function OnAttackPowerChangedNative

// Begin Class AProjectDBCharacter Function OnDefenceChange
struct ProjectDBCharacter_eventOnDefenceChange_Parms
{
	float Defence;
	int32 StackCount;
};
static const FName NAME_AProjectDBCharacter_OnDefenceChange = FName(TEXT("OnDefenceChange"));
void AProjectDBCharacter::OnDefenceChange(float Defence, int32 StackCount)
{
	ProjectDBCharacter_eventOnDefenceChange_Parms Parms;
	Parms.Defence=Defence;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_OnDefenceChange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Defence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnDefenceChange_Parms, Defence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnDefenceChange_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::NewProp_Defence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnDefenceChange", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::PropPointers), sizeof(ProjectDBCharacter_eventOnDefenceChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventOnDefenceChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AProjectDBCharacter Function OnDefenceChange

// Begin Class AProjectDBCharacter Function OnDefenceChangedNative
struct Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics
{
	struct ProjectDBCharacter_eventOnDefenceChangedNative_Parms
	{
		float Defence;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Defence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnDefenceChangedNative_Parms, Defence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnDefenceChangedNative_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::NewProp_Defence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnDefenceChangedNative", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::ProjectDBCharacter_eventOnDefenceChangedNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::ProjectDBCharacter_eventOnDefenceChangedNative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execOnDefenceChangedNative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Defence);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDefenceChangedNative(Z_Param_Defence,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function OnDefenceChangedNative

// Begin Class AProjectDBCharacter Function OnHealthChange
struct ProjectDBCharacter_eventOnHealthChange_Parms
{
	float Health;
	int32 StackCount;
};
static const FName NAME_AProjectDBCharacter_OnHealthChange = FName(TEXT("OnHealthChange"));
void AProjectDBCharacter::OnHealthChange(float Health, int32 StackCount)
{
	ProjectDBCharacter_eventOnHealthChange_Parms Parms;
	Parms.Health=Health;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_OnHealthChange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Events\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnHealthChange_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnHealthChange_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnHealthChange", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::PropPointers), sizeof(ProjectDBCharacter_eventOnHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventOnHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AProjectDBCharacter Function OnHealthChange

// Begin Class AProjectDBCharacter Function OnHealthChangedNative
struct Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics
{
	struct ProjectDBCharacter_eventOnHealthChangedNative_Parms
	{
		float Health;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnHealthChangedNative_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnHealthChangedNative_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnHealthChangedNative", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::ProjectDBCharacter_eventOnHealthChangedNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::ProjectDBCharacter_eventOnHealthChangedNative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execOnHealthChangedNative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChangedNative(Z_Param_Health,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function OnHealthChangedNative

// Begin Class AProjectDBCharacter Function OnManaChange
struct ProjectDBCharacter_eventOnManaChange_Parms
{
	float Mana;
	int32 StackCount;
};
static const FName NAME_AProjectDBCharacter_OnManaChange = FName(TEXT("OnManaChange"));
void AProjectDBCharacter::OnManaChange(float Mana, int32 StackCount)
{
	ProjectDBCharacter_eventOnManaChange_Parms Parms;
	Parms.Mana=Mana;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_OnManaChange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnManaChange_Parms, Mana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnManaChange_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnManaChange", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::PropPointers), sizeof(ProjectDBCharacter_eventOnManaChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventOnManaChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnManaChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnManaChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AProjectDBCharacter Function OnManaChange

// Begin Class AProjectDBCharacter Function OnManaChangedNative
struct Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics
{
	struct ProjectDBCharacter_eventOnManaChangedNative_Parms
	{
		float Mana;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnManaChangedNative_Parms, Mana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventOnManaChangedNative_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "OnManaChangedNative", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::ProjectDBCharacter_eventOnManaChangedNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::ProjectDBCharacter_eventOnManaChangedNative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execOnManaChangedNative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnManaChangedNative(Z_Param_Mana,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function OnManaChangedNative

// Begin Class AProjectDBCharacter Function RemoveAbilityWithTags
struct Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics
{
	struct ProjectDBCharacter_eventRemoveAbilityWithTags_Parms
	{
		FGameplayTagContainer TagContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventRemoveAbilityWithTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::NewProp_TagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "RemoveAbilityWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::ProjectDBCharacter_eventRemoveAbilityWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::ProjectDBCharacter_eventRemoveAbilityWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execRemoveAbilityWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityWithTags(Z_Param_TagContainer);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function RemoveAbilityWithTags

// Begin Class AProjectDBCharacter Function RemoveLooseGameplayTags
struct Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics
{
	struct ProjectDBCharacter_eventRemoveLooseGameplayTags_Parms
	{
		FGameplayTag TagsToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::NewProp_TagsToRemove = { "TagsToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventRemoveLooseGameplayTags_Parms, TagsToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::NewProp_TagsToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "RemoveLooseGameplayTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::ProjectDBCharacter_eventRemoveLooseGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::ProjectDBCharacter_eventRemoveLooseGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execRemoveLooseGameplayTags)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagsToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveLooseGameplayTags(Z_Param_TagsToRemove);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function RemoveLooseGameplayTags

// Begin Class AProjectDBCharacter Function Server_AddLooseGameplayTag
struct ProjectDBCharacter_eventServer_AddLooseGameplayTag_Parms
{
	FGameplayTag TagToAdd;
};
static const FName NAME_AProjectDBCharacter_Server_AddLooseGameplayTag = FName(TEXT("Server_AddLooseGameplayTag"));
void AProjectDBCharacter::Server_AddLooseGameplayTag(FGameplayTag TagToAdd)
{
	ProjectDBCharacter_eventServer_AddLooseGameplayTag_Parms Parms;
	Parms.TagToAdd=TagToAdd;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_AddLooseGameplayTag);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_AddLooseGameplayTag_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_AddLooseGameplayTag", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_AddLooseGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_AddLooseGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_AddLooseGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddLooseGameplayTag_Implementation(Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_AddLooseGameplayTag

// Begin Class AProjectDBCharacter Function Server_CancelAbilityWithTags
struct ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms
{
	FGameplayTagContainer WithTags;
	FGameplayTagContainer WithoutTags;
};
static const FName NAME_AProjectDBCharacter_Server_CancelAbilityWithTags = FName(TEXT("Server_CancelAbilityWithTags"));
void AProjectDBCharacter::Server_CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms Parms;
	Parms.WithTags=WithTags;
	Parms.WithoutTags=WithoutTags;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_CancelAbilityWithTags);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithoutTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::NewProp_WithTags = { "WithTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms, WithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::NewProp_WithoutTags = { "WithoutTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms, WithoutTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::NewProp_WithTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::NewProp_WithoutTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_CancelAbilityWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_CancelAbilityWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_CancelAbilityWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithTags);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithoutTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_CancelAbilityWithTags_Implementation(Z_Param_WithTags,Z_Param_WithoutTags);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_CancelAbilityWithTags

// Begin Class AProjectDBCharacter Function Server_ChangeAbilityLevelWithTags
struct ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms
{
	FGameplayTagContainer TagContainer;
	int32 NewLevel;
};
static const FName NAME_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags = FName(TEXT("Server_ChangeAbilityLevelWithTags"));
void AProjectDBCharacter::Server_ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms Parms;
	Parms.TagContainer=TagContainer;
	Parms.NewLevel=NewLevel;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_ChangeAbilityLevelWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_ChangeAbilityLevelWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_ChangeAbilityLevelWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ChangeAbilityLevelWithTags_Implementation(Z_Param_TagContainer,Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_ChangeAbilityLevelWithTags

// Begin Class AProjectDBCharacter Function Server_InitializeAbility
struct ProjectDBCharacter_eventServer_InitializeAbility_Parms
{
	TSubclassOf<UGameplayAbility> AbilityToGet;
	int32 AbilityLevel;
};
static const FName NAME_AProjectDBCharacter_Server_InitializeAbility = FName(TEXT("Server_InitializeAbility"));
void AProjectDBCharacter::Server_InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	ProjectDBCharacter_eventServer_InitializeAbility_Parms Parms;
	Parms.AbilityToGet=AbilityToGet;
	Parms.AbilityLevel=AbilityLevel;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_InitializeAbility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::NewProp_AbilityToGet = { "AbilityToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_InitializeAbility_Parms, AbilityToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_InitializeAbility_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::NewProp_AbilityToGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_InitializeAbility", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_InitializeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_InitializeAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_InitializeAbility)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityToGet);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_InitializeAbility_Implementation(Z_Param_AbilityToGet,Z_Param_AbilityLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_InitializeAbility

// Begin Class AProjectDBCharacter Function Server_InitializeAbilityMulti
struct ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms
{
	TArray<TSubclassOf<UGameplayAbility> > AbilitiesToAcquire;
	int32 AbilityLevel;
};
static const FName NAME_AProjectDBCharacter_Server_InitializeAbilityMulti = FName(TEXT("Server_InitializeAbilityMulti"));
void AProjectDBCharacter::Server_InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility> > const& AbilitiesToAcquire, int32 AbilityLevel)
{
	ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms Parms;
	Parms.AbilitiesToAcquire=AbilitiesToAcquire;
	Parms.AbilityLevel=AbilityLevel;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_InitializeAbilityMulti);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fixed parameter to const reference\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed parameter to const reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesToAcquire_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilitiesToAcquire_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesToAcquire;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire_Inner = { "AbilitiesToAcquire", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire = { "AbilitiesToAcquire", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms, AbilitiesToAcquire), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesToAcquire_MetaData), NewProp_AbilitiesToAcquire_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilitiesToAcquire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_InitializeAbilityMulti", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_InitializeAbilityMulti_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_InitializeAbilityMulti)
{
	P_GET_TARRAY(TSubclassOf<UGameplayAbility>,Z_Param_AbilitiesToAcquire);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_InitializeAbilityMulti_Implementation(Z_Param_AbilitiesToAcquire,Z_Param_AbilityLevel);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_InitializeAbilityMulti

// Begin Class AProjectDBCharacter Function Server_RemoveAbilityWithTags
struct ProjectDBCharacter_eventServer_RemoveAbilityWithTags_Parms
{
	FGameplayTagContainer TagContainer;
};
static const FName NAME_AProjectDBCharacter_Server_RemoveAbilityWithTags = FName(TEXT("Server_RemoveAbilityWithTags"));
void AProjectDBCharacter::Server_RemoveAbilityWithTags(FGameplayTagContainer TagContainer)
{
	ProjectDBCharacter_eventServer_RemoveAbilityWithTags_Parms Parms;
	Parms.TagContainer=TagContainer;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_RemoveAbilityWithTags);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_RemoveAbilityWithTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::NewProp_TagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_RemoveAbilityWithTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_RemoveAbilityWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_RemoveAbilityWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_RemoveAbilityWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RemoveAbilityWithTags_Implementation(Z_Param_TagContainer);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_RemoveAbilityWithTags

// Begin Class AProjectDBCharacter Function Server_RemoveLooseGameplayTags
struct ProjectDBCharacter_eventServer_RemoveLooseGameplayTags_Parms
{
	FGameplayTag TagsToRemove;
};
static const FName NAME_AProjectDBCharacter_Server_RemoveLooseGameplayTags = FName(TEXT("Server_RemoveLooseGameplayTags"));
void AProjectDBCharacter::Server_RemoveLooseGameplayTags(FGameplayTag TagsToRemove)
{
	ProjectDBCharacter_eventServer_RemoveLooseGameplayTags_Parms Parms;
	Parms.TagsToRemove=TagsToRemove;
	UFunction* Func = FindFunctionChecked(NAME_AProjectDBCharacter_Server_RemoveLooseGameplayTags);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility|Server Version" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::NewProp_TagsToRemove = { "TagsToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventServer_RemoveLooseGameplayTags_Parms, TagsToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::NewProp_TagsToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "Server_RemoveLooseGameplayTags", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::PropPointers), sizeof(ProjectDBCharacter_eventServer_RemoveLooseGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectDBCharacter_eventServer_RemoveLooseGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execServer_RemoveLooseGameplayTags)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagsToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RemoveLooseGameplayTags_Implementation(Z_Param_TagsToRemove);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function Server_RemoveLooseGameplayTags

// Begin Class AProjectDBCharacter Function SetAttackPowerValue
struct Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics
{
	struct ProjectDBCharacter_eventSetAttackPowerValue_Parms
	{
		float NewAttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::NewProp_NewAttackPower = { "NewAttackPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetAttackPowerValue_Parms, NewAttackPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::NewProp_NewAttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "SetAttackPowerValue", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::ProjectDBCharacter_eventSetAttackPowerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::ProjectDBCharacter_eventSetAttackPowerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execSetAttackPowerValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackPowerValue(Z_Param_NewAttackPower);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function SetAttackPowerValue

// Begin Class AProjectDBCharacter Function SetDefenceValue
struct Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics
{
	struct ProjectDBCharacter_eventSetDefenceValue_Parms
	{
		float NewDefence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDefence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::NewProp_NewDefence = { "NewDefence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetDefenceValue_Parms, NewDefence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::NewProp_NewDefence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "SetDefenceValue", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::ProjectDBCharacter_eventSetDefenceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::ProjectDBCharacter_eventSetDefenceValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execSetDefenceValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDefence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefenceValue(Z_Param_NewDefence);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function SetDefenceValue

// Begin Class AProjectDBCharacter Function SetHealthValues
struct Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics
{
	struct ProjectDBCharacter_eventSetHealthValues_Parms
	{
		float NewHealth;
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Setters\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Setters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetHealthValues_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetHealthValues_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "SetHealthValues", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::ProjectDBCharacter_eventSetHealthValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::ProjectDBCharacter_eventSetHealthValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execSetHealthValues)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthValues(Z_Param_NewHealth,Z_Param_NewMaxHealth);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function SetHealthValues

// Begin Class AProjectDBCharacter Function SetManaValues
struct Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics
{
	struct ProjectDBCharacter_eventSetManaValues_Parms
	{
		float NewMana;
		float NewMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::NewProp_NewMana = { "NewMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetManaValues_Parms, NewMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::NewProp_NewMaxMana = { "NewMaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDBCharacter_eventSetManaValues_Parms, NewMaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::NewProp_NewMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::NewProp_NewMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDBCharacter, nullptr, "SetManaValues", nullptr, nullptr, Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::ProjectDBCharacter_eventSetManaValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::ProjectDBCharacter_eventSetManaValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDBCharacter_SetManaValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDBCharacter_SetManaValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDBCharacter::execSetManaValues)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMana);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetManaValues(Z_Param_NewMana,Z_Param_NewMaxMana);
	P_NATIVE_END;
}
// End Class AProjectDBCharacter Function SetManaValues

// Begin Class AProjectDBCharacter
void AProjectDBCharacter::StaticRegisterNativesAProjectDBCharacter()
{
	UClass* Class = AProjectDBCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLooseGameplayTag", &AProjectDBCharacter::execAddLooseGameplayTag },
		{ "CancelAbilityWithTags", &AProjectDBCharacter::execCancelAbilityWithTags },
		{ "ChangeAbilityLevelWithTags", &AProjectDBCharacter::execChangeAbilityLevelWithTags },
		{ "GetAbilityInfoFromAbilityClass", &AProjectDBCharacter::execGetAbilityInfoFromAbilityClass },
		{ "GetAttackPowerValue", &AProjectDBCharacter::execGetAttackPowerValue },
		{ "GetDefenceValue", &AProjectDBCharacter::execGetDefenceValue },
		{ "GetHealthValues", &AProjectDBCharacter::execGetHealthValues },
		{ "GetManaValues", &AProjectDBCharacter::execGetManaValues },
		{ "InitializeAbility", &AProjectDBCharacter::execInitializeAbility },
		{ "InitializeAbilityMulti", &AProjectDBCharacter::execInitializeAbilityMulti },
		{ "OnAttackPowerChangedNative", &AProjectDBCharacter::execOnAttackPowerChangedNative },
		{ "OnDefenceChangedNative", &AProjectDBCharacter::execOnDefenceChangedNative },
		{ "OnHealthChangedNative", &AProjectDBCharacter::execOnHealthChangedNative },
		{ "OnManaChangedNative", &AProjectDBCharacter::execOnManaChangedNative },
		{ "RemoveAbilityWithTags", &AProjectDBCharacter::execRemoveAbilityWithTags },
		{ "RemoveLooseGameplayTags", &AProjectDBCharacter::execRemoveLooseGameplayTags },
		{ "Server_AddLooseGameplayTag", &AProjectDBCharacter::execServer_AddLooseGameplayTag },
		{ "Server_CancelAbilityWithTags", &AProjectDBCharacter::execServer_CancelAbilityWithTags },
		{ "Server_ChangeAbilityLevelWithTags", &AProjectDBCharacter::execServer_ChangeAbilityLevelWithTags },
		{ "Server_InitializeAbility", &AProjectDBCharacter::execServer_InitializeAbility },
		{ "Server_InitializeAbilityMulti", &AProjectDBCharacter::execServer_InitializeAbilityMulti },
		{ "Server_RemoveAbilityWithTags", &AProjectDBCharacter::execServer_RemoveAbilityWithTags },
		{ "Server_RemoveLooseGameplayTags", &AProjectDBCharacter::execServer_RemoveLooseGameplayTags },
		{ "SetAttackPowerValue", &AProjectDBCharacter::execSetAttackPowerValue },
		{ "SetDefenceValue", &AProjectDBCharacter::execSetDefenceValue },
		{ "SetHealthValues", &AProjectDBCharacter::execSetHealthValues },
		{ "SetManaValues", &AProjectDBCharacter::execSetManaValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectDBCharacter);
UClass* Z_Construct_UClass_AProjectDBCharacter_NoRegister()
{
	return AProjectDBCharacter::StaticClass();
}
struct Z_Construct_UClass_AProjectDBCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectDBCharacter.h" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GAS Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetVar_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAbilities_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/ProjectDBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetVar;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InitialAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectDBCharacter_AddLooseGameplayTag, "AddLooseGameplayTag" }, // 1833593124
		{ &Z_Construct_UFunction_AProjectDBCharacter_CancelAbilityWithTags, "CancelAbilityWithTags" }, // 339879218
		{ &Z_Construct_UFunction_AProjectDBCharacter_ChangeAbilityLevelWithTags, "ChangeAbilityLevelWithTags" }, // 310611879
		{ &Z_Construct_UFunction_AProjectDBCharacter_GetAbilityInfoFromAbilityClass, "GetAbilityInfoFromAbilityClass" }, // 3712968306
		{ &Z_Construct_UFunction_AProjectDBCharacter_GetAttackPowerValue, "GetAttackPowerValue" }, // 3744687721
		{ &Z_Construct_UFunction_AProjectDBCharacter_GetDefenceValue, "GetDefenceValue" }, // 2234333225
		{ &Z_Construct_UFunction_AProjectDBCharacter_GetHealthValues, "GetHealthValues" }, // 3093681661
		{ &Z_Construct_UFunction_AProjectDBCharacter_GetManaValues, "GetManaValues" }, // 2839928735
		{ &Z_Construct_UFunction_AProjectDBCharacter_InitializeAbility, "InitializeAbility" }, // 2502384573
		{ &Z_Construct_UFunction_AProjectDBCharacter_InitializeAbilityMulti, "InitializeAbilityMulti" }, // 2964500934
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChange, "OnAttackPowerChange" }, // 2193287096
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnAttackPowerChangedNative, "OnAttackPowerChangedNative" }, // 3337018495
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChange, "OnDefenceChange" }, // 378981775
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnDefenceChangedNative, "OnDefenceChangedNative" }, // 2641256848
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnHealthChange, "OnHealthChange" }, // 2498318053
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnHealthChangedNative, "OnHealthChangedNative" }, // 124618371
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnManaChange, "OnManaChange" }, // 4114269485
		{ &Z_Construct_UFunction_AProjectDBCharacter_OnManaChangedNative, "OnManaChangedNative" }, // 575553282
		{ &Z_Construct_UFunction_AProjectDBCharacter_RemoveAbilityWithTags, "RemoveAbilityWithTags" }, // 3033103857
		{ &Z_Construct_UFunction_AProjectDBCharacter_RemoveLooseGameplayTags, "RemoveLooseGameplayTags" }, // 2539413743
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_AddLooseGameplayTag, "Server_AddLooseGameplayTag" }, // 1708171799
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_CancelAbilityWithTags, "Server_CancelAbilityWithTags" }, // 3575906727
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_ChangeAbilityLevelWithTags, "Server_ChangeAbilityLevelWithTags" }, // 1956083959
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbility, "Server_InitializeAbility" }, // 3143290115
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_InitializeAbilityMulti, "Server_InitializeAbilityMulti" }, // 3033809294
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveAbilityWithTags, "Server_RemoveAbilityWithTags" }, // 1491535748
		{ &Z_Construct_UFunction_AProjectDBCharacter_Server_RemoveLooseGameplayTags, "Server_RemoveLooseGameplayTags" }, // 295112551
		{ &Z_Construct_UFunction_AProjectDBCharacter_SetAttackPowerValue, "SetAttackPowerValue" }, // 2352575042
		{ &Z_Construct_UFunction_AProjectDBCharacter_SetDefenceValue, "SetDefenceValue" }, // 3983883200
		{ &Z_Construct_UFunction_AProjectDBCharacter_SetHealthValues, "SetHealthValues" }, // 2032141228
		{ &Z_Construct_UFunction_AProjectDBCharacter_SetManaValues, "SetManaValues" }, // 2099948746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDBCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, AbilitySystemComponent), Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_AttributeSetVar = { "AttributeSetVar", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, AttributeSetVar), Z_Construct_UClass_UGASAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetVar_MetaData), NewProp_AttributeSetVar_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_InitialAbilities_Inner = { "InitialAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_InitialAbilities = { "InitialAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDBCharacter, InitialAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAbilities_MetaData), NewProp_InitialAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectDBCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_AttributeSetVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_InitialAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDBCharacter_Statics::NewProp_InitialAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectDBCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProjectDBCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AProjectDBCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDBCharacter_Statics::ClassParams = {
	&AProjectDBCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectDBCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDBCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDBCharacter()
{
	if (!Z_Registration_Info_UClass_AProjectDBCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDBCharacter.OuterSingleton, Z_Construct_UClass_AProjectDBCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDBCharacter.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<AProjectDBCharacter>()
{
	return AProjectDBCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDBCharacter);
AProjectDBCharacter::~AProjectDBCharacter() {}
// End Class AProjectDBCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDBCharacter, AProjectDBCharacter::StaticClass, TEXT("AProjectDBCharacter"), &Z_Registration_Info_UClass_AProjectDBCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDBCharacter), 3829300085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_3968951315(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
