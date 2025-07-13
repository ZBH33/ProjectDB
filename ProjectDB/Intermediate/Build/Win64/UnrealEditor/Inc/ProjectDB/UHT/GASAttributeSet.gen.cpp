// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GASAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAttributeSet();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister();
PROJECTDB_API UFunction* Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Delegate FAttrChangeDelegate
struct Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics
{
	struct _Script_ProjectDB_eventAttrChangeDelegate_Parms
	{
		float Attr;
		int32 StackcCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackcCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::NewProp_Attr = { "Attr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectDB_eventAttrChangeDelegate_Parms, Attr), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::NewProp_StackcCount = { "StackcCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectDB_eventAttrChangeDelegate_Parms, StackcCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::NewProp_Attr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::NewProp_StackcCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDB, nullptr, "AttrChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::_Script_ProjectDB_eventAttrChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::_Script_ProjectDB_eventAttrChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAttrChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttrChangeDelegate, float Attr, int32 StackcCount)
{
	struct _Script_ProjectDB_eventAttrChangeDelegate_Parms
	{
		float Attr;
		int32 StackcCount;
	};
	_Script_ProjectDB_eventAttrChangeDelegate_Parms Parms;
	Parms.Attr=Attr;
	Parms.StackcCount=StackcCount;
	AttrChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAttrChangeDelegate

// Begin Class UGASAttributeSet Function OnRep_AttackPower
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics
{
	struct GASAttributeSet_eventOnRep_AttackPower_Parms
	{
		FGameplayAttributeData OldAttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_AttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackPower_MetaData), NewProp_OldAttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_AttackPower", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::GASAttributeSet_eventOnRep_AttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::GASAttributeSet_eventOnRep_AttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_AttackPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackPower(Z_Param_Out_OldAttackPower);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_AttackPower

// Begin Class UGASAttributeSet Function OnRep_Defence
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics
{
	struct GASAttributeSet_eventOnRep_Defence_Parms
	{
		FGameplayAttributeData OldDefence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDefence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDefence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::NewProp_OldDefence = { "OldDefence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Defence_Parms, OldDefence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDefence_MetaData), NewProp_OldDefence_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::NewProp_OldDefence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Defence", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::GASAttributeSet_eventOnRep_Defence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::GASAttributeSet_eventOnRep_Defence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Defence)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDefence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Defence(Z_Param_Out_OldDefence);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_Defence

// Begin Class UGASAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics
{
	struct GASAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replication Functions for Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Functions for Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::GASAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::GASAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_Health

// Begin Class UGASAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics
{
	struct GASAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::GASAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::GASAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_Mana

// Begin Class UGASAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics
{
	struct GASAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::GASAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::GASAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_MaxHealth

// Begin Class UGASAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics
{
	struct GASAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::GASAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::GASAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UGASAttributeSet Function OnRep_MaxMana

// Begin Class UGASAttributeSet
void UGASAttributeSet::StaticRegisterNativesUGASAttributeSet()
{
	UClass* Class = UGASAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AttackPower", &UGASAttributeSet::execOnRep_AttackPower },
		{ "OnRep_Defence", &UGASAttributeSet::execOnRep_Defence },
		{ "OnRep_Health", &UGASAttributeSet::execOnRep_Health },
		{ "OnRep_Mana", &UGASAttributeSet::execOnRep_Mana },
		{ "OnRep_MaxHealth", &UGASAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UGASAttributeSet::execOnRep_MaxMana },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAttributeSet);
UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister()
{
	return UGASAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UGASAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==PATTERN==\n//Attribute for Health\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==PATTERN==\nAttribute for Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute for MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute for MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute for Mana\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute for Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute for MaxMana\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute for MaxMana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute for AttackPower\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute for AttackPower" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defence_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute for Defence\n" },
#endif
		{ "ModuleRelativePath", "Public/GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute for Defence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Defence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 2261894017
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Defence, "OnRep_Defence" }, // 823749690
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Health, "OnRep_Health" }, // 1883621718
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 4273920207
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2753578536
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 2971375462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Defence = { "Defence", "OnRep_Defence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, Defence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defence_MetaData), NewProp_Defence_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Defence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGASAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams = {
	&UGASAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton, Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<UGASAttributeSet>()
{
	return UGASAttributeSet::StaticClass();
}
void UGASAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_AttackPower(TEXT("AttackPower"));
	static const FName Name_Defence(TEXT("Defence"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName()
		&& Name_Defence == ClassReps[(int32)ENetFields_Private::Defence].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGASAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAttributeSet);
UGASAttributeSet::~UGASAttributeSet() {}
// End Class UGASAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASAttributeSet, UGASAttributeSet::StaticClass, TEXT("UGASAttributeSet"), &Z_Registration_Info_UClass_UGASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAttributeSet), 2696542134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_2158127809(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
