// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GASGameplayAbility.h"
#include "ProjectDB/Public/GetAbilityInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
PROJECTDB_API UClass* Z_Construct_UClass_UGASGameplayAbility();
PROJECTDB_API UClass* Z_Construct_UClass_UGASGameplayAbility_NoRegister();
PROJECTDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class UGASGameplayAbility Function GetAbilityInfo
struct Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics
{
	struct GASGameplayAbility_eventGetAbilityInfo_Parms
	{
		FGameplayAbilityInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/GASGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASGameplayAbility_eventGetAbilityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(0, nullptr) }; // 3835202411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASGameplayAbility, nullptr, "GetAbilityInfo", nullptr, nullptr, Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::GASGameplayAbility_eventGetAbilityInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::GASGameplayAbility_eventGetAbilityInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASGameplayAbility::execGetAbilityInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo();
	P_NATIVE_END;
}
// End Class UGASGameplayAbility Function GetAbilityInfo

// Begin Class UGASGameplayAbility
void UGASGameplayAbility::StaticRegisterNativesUGASGameplayAbility()
{
	UClass* Class = UGASGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityInfo", &UGASGameplayAbility::execGetAbilityInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASGameplayAbility);
UClass* Z_Construct_UClass_UGASGameplayAbility_NoRegister()
{
	return UGASGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UGASGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GASGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASGameplayAbility_GetAbilityInfo, "GetAbilityInfo" }, // 1521408489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGASGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASGameplayAbility_Statics::ClassParams = {
	&UGASGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton, Z_Construct_UClass_UGASGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<UGASGameplayAbility>()
{
	return UGASGameplayAbility::StaticClass();
}
UGASGameplayAbility::UGASGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASGameplayAbility);
UGASGameplayAbility::~UGASGameplayAbility() {}
// End Class UGASGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASGameplayAbility, UGASGameplayAbility::StaticClass, TEXT("UGASGameplayAbility"), &Z_Registration_Info_UClass_UGASGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASGameplayAbility), 3285247282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_2068504780(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
