// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDB/Public/GASAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAbilitySystemComponent();
PROJECTDB_API UClass* Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDB();
// End Cross Module References

// Begin Class UGASAbilitySystemComponent
void UGASAbilitySystemComponent::StaticRegisterNativesUGASAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAbilitySystemComponent);
UClass* Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister()
{
	return UGASAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGASAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GASAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GASAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGASAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAbilitySystemComponent_Statics::ClassParams = {
	&UGASAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGASAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGASAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASAbilitySystemComponent.OuterSingleton;
}
template<> PROJECTDB_API UClass* StaticClass<UGASAbilitySystemComponent>()
{
	return UGASAbilitySystemComponent::StaticClass();
}
UGASAbilitySystemComponent::UGASAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAbilitySystemComponent);
UGASAbilitySystemComponent::~UGASAbilitySystemComponent() {}
// End Class UGASAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASAbilitySystemComponent, UGASAbilitySystemComponent::StaticClass, TEXT("UGASAbilitySystemComponent"), &Z_Registration_Info_UClass_UGASAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAbilitySystemComponent), 3598469603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAbilitySystemComponent_h_3062725854(TEXT("/Script/ProjectDB"),
	Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
