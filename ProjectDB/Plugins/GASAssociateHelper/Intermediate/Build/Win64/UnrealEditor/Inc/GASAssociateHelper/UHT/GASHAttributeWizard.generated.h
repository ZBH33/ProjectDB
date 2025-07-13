// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASHAttributeWizard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASASSOCIATEHELPER_GASHAttributeWizard_generated_h
#error "GASHAttributeWizard.generated.h already included, missing '#pragma once' in GASHAttributeWizard.h"
#endif
#define GASASSOCIATEHELPER_GASHAttributeWizard_generated_h

#define FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeSettings_Statics; \
	GASASSOCIATEHELPER_API static class UScriptStruct* StaticStruct();


template<> GASASSOCIATEHELPER_API UScriptStruct* StaticStruct<struct FAttributeSettings>();

#define FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASHAttributeWizard(); \
	friend struct Z_Construct_UClass_UGASHAttributeWizard_Statics; \
public: \
	DECLARE_CLASS(UGASHAttributeWizard, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAssociateHelper"), NO_API) \
	DECLARE_SERIALIZER(UGASHAttributeWizard) \
	static const TCHAR* StaticConfigName() {return TEXT("GASAttributes");} \



#define FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGASHAttributeWizard(UGASHAttributeWizard&&); \
	UGASHAttributeWizard(const UGASHAttributeWizard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASHAttributeWizard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASHAttributeWizard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASHAttributeWizard) \
	NO_API virtual ~UGASHAttributeWizard();


#define FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_43_PROLOG
#define FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_46_INCLASS_NO_PURE_DECLS \
	FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASASSOCIATEHELPER_API UClass* StaticClass<class UGASHAttributeWizard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repository_ProjectDB_ProjectDB_Plugins_GASAssociateHelper_Source_GASAssociateHelper_Public_GASHAttributeWizard_h


#define FOREACH_ENUM_REPMODE(op) \
	op(RepMode::Full) \
	op(RepMode::Mixed) \
	op(RepMode::Minimal) 

enum class RepMode : uint8;
template<> struct TIsUEnumClass<RepMode> { enum { Value = true }; };
template<> GASASSOCIATEHELPER_API UEnum* StaticEnum<RepMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
