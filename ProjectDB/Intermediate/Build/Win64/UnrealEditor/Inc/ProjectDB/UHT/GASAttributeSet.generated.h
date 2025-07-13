// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef PROJECTDB_GASAttributeSet_generated_h
#error "GASAttributeSet.generated.h already included, missing '#pragma once' in GASAttributeSet.h"
#endif
#define PROJECTDB_GASAttributeSet_generated_h

#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_18_DELEGATE \
PROJECTDB_API void FAttrChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttrChangeDelegate, float Attr, int32 StackcCount);


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Defence); \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASAttributeSet(); \
	friend struct Z_Construct_UClass_UGASAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDB"), NO_API) \
	DECLARE_SERIALIZER(UGASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		AttackPower, \
		Defence, \
		NETFIELD_REP_END=Defence	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttributeSet) \
public:


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGASAttributeSet(UGASAttributeSet&&); \
	UGASAttributeSet(const UGASAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASAttributeSet) \
	NO_API virtual ~UGASAttributeSet();


#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_23_PROLOG
#define FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDB_API UClass* StaticClass<class UGASAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_ProjectDB_ProjectDB_Source_ProjectDB_Public_GASAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
