// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GASTargetActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTargetActor() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
PROJECTDB_API UClass* Z_Construct_UClass_AGASTargetActor();
PROJECTDB_API UClass* Z_Construct_UClass_AGASTargetActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class AGASTargetActor
void AGASTargetActor::StaticRegisterNativesAGASTargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTargetActor);
UClass* Z_Construct_UClass_AGASTargetActor_NoRegister()
{
	return AGASTargetActor::StaticClass();
}
struct Z_Construct_UClass_AGASTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASTargetActor.h" },
		{ "ModuleRelativePath", "Public/GASTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRange_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GASTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitResults_MetaData[] = {
		{ "Category", "GASGameplayAbility" },
		{ "ModuleRelativePath", "Public/GASTargetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASTargetActor_Statics::NewProp_TraceRange = { "TraceRange", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASTargetActor, TraceRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRange_MetaData), NewProp_TraceRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGASTargetActor_Statics::NewProp_TraceHitResults = { "TraceHitResults", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASTargetActor, TraceHitResults), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitResults_MetaData), NewProp_TraceHitResults_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASTargetActor_Statics::NewProp_TraceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASTargetActor_Statics::NewProp_TraceHitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGASTargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTargetActor_Statics::ClassParams = {
	&AGASTargetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGASTargetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASTargetActor()
{
	if (!Z_Registration_Info_UClass_AGASTargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTargetActor.OuterSingleton, Z_Construct_UClass_AGASTargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASTargetActor.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<AGASTargetActor>()
{
	return AGASTargetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTargetActor);
AGASTargetActor::~AGASTargetActor() {}
// End Class AGASTargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASTargetActor, AGASTargetActor::StaticClass, TEXT("AGASTargetActor"), &Z_Registration_Info_UClass_AGASTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTargetActor), 1750546498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_h_1782551057(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
