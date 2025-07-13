// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GetAbilityInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAbilityInfo() {}

// Begin Cross Module References
PROJECTDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin ScriptStruct FGameplayAbilityInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityInfo;
class UScriptStruct* FGameplayAbilityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityInfo, (UObject*)Z_Construct_UPackage__Script_ProjectDB(), TEXT("GameplayAbilityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton;
}
template<> PROJECTDB_API UScriptStruct* StaticStruct<FGameplayAbilityInfo>()
{
	return FGameplayAbilityInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GetAbilityInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldownDuration_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/GetAbilityInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCost_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/GetAbilityInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCostName_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/GetAbilityInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityCooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityCost_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityCost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityCostName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityCostName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCooldownDuration = { "AbilityCooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityCooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCooldownDuration_MetaData), NewProp_AbilityCooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCost_Inner = { "AbilityCost", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCost = { "AbilityCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityCost), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCost_MetaData), NewProp_AbilityCost_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCostName_Inner = { "AbilityCostName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCostName = { "AbilityCostName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityCostName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCostName_MetaData), NewProp_AbilityCostName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCost_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCostName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityCostName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
	nullptr,
	&NewStructOps,
	"GameplayAbilityInfo",
	Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers),
	sizeof(FGameplayAbilityInfo),
	alignof(FGameplayAbilityInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GetAbilityInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewStructOps, TEXT("GameplayAbilityInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityInfo), 3835202411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GetAbilityInfo_h_769739952(TEXT("/Script/ProjectDB"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GetAbilityInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GetAbilityInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
