// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDB_init() {}
	PROJECTDB_API UFunction* Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectDB;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectDB()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDB_AttrChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectDB",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0711B24D,
				0x384BAB49,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectDB.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectDB(Z_Construct_UPackage__Script_ProjectDB, TEXT("/Script/ProjectDB"), Z_Registration_Info_UPackage__Script_ProjectDB, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0711B24D, 0x384BAB49));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
