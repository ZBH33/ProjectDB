// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDB_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectDB;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectDB()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectDB",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDEA6A001,
				0x1D09F390,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectDB(Z_Construct_UPackage__Script_ProjectDB, TEXT("/Script/ProjectDB"), Z_Registration_Info_UPackage__Script_ProjectDB, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDEA6A001, 0x1D09F390));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
