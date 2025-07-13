// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityInfo;
#ifdef PROJECTDB_GASGameplayAbility_generated_h
#error "GASGameplayAbility.generated.h already included, missing '#pragma once' in GASGameplayAbility.h"
#endif
#define PROJECTDB_GASGameplayAbility_generated_h

#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilityInfo);


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASGameplayAbility(); \
	friend struct Z_Construct_UClass_UGASGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGASGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDB"), NO_API) \
	DECLARE_SERIALIZER(UGASGameplayAbility)


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGASGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGASGameplayAbility(UGASGameplayAbility&&); \
	UGASGameplayAbility(const UGASGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASGameplayAbility) \
	NO_API virtual ~UGASGameplayAbility();


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_13_PROLOG
#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDB_API UClass* StaticClass<class UGASGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
