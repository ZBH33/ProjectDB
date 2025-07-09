// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/ProjectDBGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDBGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTDB_API UClass* Z_Construct_UClass_AProjectDBGameMode();
PROJECTDB_API UClass* Z_Construct_UClass_AProjectDBGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class AProjectDBGameMode
void AProjectDBGameMode::StaticRegisterNativesAProjectDBGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectDBGameMode);
UClass* Z_Construct_UClass_AProjectDBGameMode_NoRegister()
{
	return AProjectDBGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectDBGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectDBGameMode.h" },
		{ "ModuleRelativePath", "ProjectDBGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDBGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectDBGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDBGameMode_Statics::ClassParams = {
	&AProjectDBGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDBGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDBGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDBGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectDBGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDBGameMode.OuterSingleton, Z_Construct_UClass_AProjectDBGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDBGameMode.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<AProjectDBGameMode>()
{
	return AProjectDBGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDBGameMode);
AProjectDBGameMode::~AProjectDBGameMode() {}
// End Class AProjectDBGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDBGameMode, AProjectDBGameMode::StaticClass, TEXT("AProjectDBGameMode"), &Z_Registration_Info_UClass_AProjectDBGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDBGameMode), 3896041549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_3632679234(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
