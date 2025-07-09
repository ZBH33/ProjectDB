// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDBCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDB_ProjectDBCharacter_generated_h
#error "ProjectDBCharacter.generated.h already included, missing '#pragma once' in ProjectDBCharacter.h"
#endif
#define PROJECTDB_ProjectDBCharacter_generated_h

#define FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDBCharacter(); \
	friend struct Z_Construct_UClass_AProjectDBCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectDBCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDB"), NO_API) \
	DECLARE_SERIALIZER(AProjectDBCharacter)


#define FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectDBCharacter(AProjectDBCharacter&&); \
	AProjectDBCharacter(const AProjectDBCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDBCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDBCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectDBCharacter) \
	NO_API virtual ~AProjectDBCharacter();


#define FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_18_PROLOG
#define FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDB_API UClass* StaticClass<class AProjectDBCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDB_Source_ProjectDB_ProjectDBCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
