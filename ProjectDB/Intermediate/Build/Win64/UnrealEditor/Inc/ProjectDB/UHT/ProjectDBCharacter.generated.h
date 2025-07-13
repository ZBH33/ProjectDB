// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDBCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FGameplayAbilityInfo;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef PROJECTDB_ProjectDBCharacter_generated_h
#error "ProjectDBCharacter.generated.h already included, missing '#pragma once' in ProjectDBCharacter.h"
#endif
#define PROJECTDB_ProjectDBCharacter_generated_h

#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RemoveLooseGameplayTags_Implementation(FGameplayTag TagsToRemove); \
	virtual void Server_AddLooseGameplayTag_Implementation(FGameplayTag TagToAdd); \
	virtual void Server_CancelAbilityWithTags_Implementation(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags); \
	virtual void Server_ChangeAbilityLevelWithTags_Implementation(FGameplayTagContainer TagContainer, int32 NewLevel); \
	virtual void Server_RemoveAbilityWithTags_Implementation(FGameplayTagContainer TagContainer); \
	virtual void Server_InitializeAbilityMulti_Implementation(TArray<TSubclassOf<UGameplayAbility> > const& AbilitiesToAcquire, int32 AbilityLevel); \
	virtual void Server_InitializeAbility_Implementation(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel); \
	DECLARE_FUNCTION(execSetDefenceValue); \
	DECLARE_FUNCTION(execSetAttackPowerValue); \
	DECLARE_FUNCTION(execSetManaValues); \
	DECLARE_FUNCTION(execSetHealthValues); \
	DECLARE_FUNCTION(execGetDefenceValue); \
	DECLARE_FUNCTION(execGetAttackPowerValue); \
	DECLARE_FUNCTION(execGetManaValues); \
	DECLARE_FUNCTION(execGetHealthValues); \
	DECLARE_FUNCTION(execOnDefenceChangedNative); \
	DECLARE_FUNCTION(execOnAttackPowerChangedNative); \
	DECLARE_FUNCTION(execOnManaChangedNative); \
	DECLARE_FUNCTION(execOnHealthChangedNative); \
	DECLARE_FUNCTION(execServer_RemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execServer_AddLooseGameplayTag); \
	DECLARE_FUNCTION(execServer_CancelAbilityWithTags); \
	DECLARE_FUNCTION(execServer_ChangeAbilityLevelWithTags); \
	DECLARE_FUNCTION(execServer_RemoveAbilityWithTags); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTag); \
	DECLARE_FUNCTION(execCancelAbilityWithTags); \
	DECLARE_FUNCTION(execChangeAbilityLevelWithTags); \
	DECLARE_FUNCTION(execRemoveAbilityWithTags); \
	DECLARE_FUNCTION(execGetAbilityInfoFromAbilityClass); \
	DECLARE_FUNCTION(execServer_InitializeAbilityMulti); \
	DECLARE_FUNCTION(execServer_InitializeAbility); \
	DECLARE_FUNCTION(execInitializeAbilityMulti); \
	DECLARE_FUNCTION(execInitializeAbility);


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_CALLBACK_WRAPPERS
#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDBCharacter(); \
	friend struct Z_Construct_UClass_AProjectDBCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectDBCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDB"), NO_API) \
	DECLARE_SERIALIZER(AProjectDBCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AProjectDBCharacter*>(this); }


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectDBCharacter(AProjectDBCharacter&&); \
	AProjectDBCharacter(const AProjectDBCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDBCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDBCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectDBCharacter) \
	NO_API virtual ~AProjectDBCharacter();


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_21_PROLOG
#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_CALLBACK_WRAPPERS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDB_API UClass* StaticClass<class AProjectDBCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_ProjectDBCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
