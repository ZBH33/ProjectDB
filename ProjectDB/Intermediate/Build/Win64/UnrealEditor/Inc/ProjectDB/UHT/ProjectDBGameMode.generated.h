// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDBGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDB_ProjectDBGameMode_generated_h
#error "ProjectDBGameMode.generated.h already included, missing '#pragma once' in ProjectDBGameMode.h"
#endif
#define PROJECTDB_ProjectDBGameMode_generated_h

#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDBGameMode(); \
	friend struct Z_Construct_UClass_AProjectDBGameMode_Statics; \
public: \
	DECLARE_CLASS(AProjectDBGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDB"), PROJECTDB_API) \
	DECLARE_SERIALIZER(AProjectDBGameMode)


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectDBGameMode(AProjectDBGameMode&&); \
	AProjectDBGameMode(const AProjectDBGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTDB_API, AProjectDBGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDBGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectDBGameMode) \
	PROJECTDB_API virtual ~AProjectDBGameMode();


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_9_PROLOG
#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDB_API UClass* StaticClass<class AProjectDBGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_ProjectDBGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
