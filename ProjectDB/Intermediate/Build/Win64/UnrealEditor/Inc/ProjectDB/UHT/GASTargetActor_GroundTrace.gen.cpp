// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GASTargetActor_GroundTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTargetActor_GroundTrace() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
PROJECTDB_API UClass* Z_Construct_UClass_AGASTargetActor_GroundTrace();
PROJECTDB_API UClass* Z_Construct_UClass_AGASTargetActor_GroundTrace_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class AGASTargetActor_GroundTrace
void AGASTargetActor_GroundTrace::StaticRegisterNativesAGASTargetActor_GroundTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTargetActor_GroundTrace);
UClass* Z_Construct_UClass_AGASTargetActor_GroundTrace_NoRegister()
{
	return AGASTargetActor_GroundTrace::StaticClass();
}
struct Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASTargetActor_GroundTrace.h" },
		{ "ModuleRelativePath", "Public/GASTargetActor_GroundTrace.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTargetActor_GroundTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::ClassParams = {
	&AGASTargetActor_GroundTrace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASTargetActor_GroundTrace()
{
	if (!Z_Registration_Info_UClass_AGASTargetActor_GroundTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTargetActor_GroundTrace.OuterSingleton, Z_Construct_UClass_AGASTargetActor_GroundTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASTargetActor_GroundTrace.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<AGASTargetActor_GroundTrace>()
{
	return AGASTargetActor_GroundTrace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTargetActor_GroundTrace);
AGASTargetActor_GroundTrace::~AGASTargetActor_GroundTrace() {}
// End Class AGASTargetActor_GroundTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_GroundTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASTargetActor_GroundTrace, AGASTargetActor_GroundTrace::StaticClass, TEXT("AGASTargetActor_GroundTrace"), &Z_Registration_Info_UClass_AGASTargetActor_GroundTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTargetActor_GroundTrace), 2876894204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_GroundTrace_h_234025618(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_GroundTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASTargetActor_GroundTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
