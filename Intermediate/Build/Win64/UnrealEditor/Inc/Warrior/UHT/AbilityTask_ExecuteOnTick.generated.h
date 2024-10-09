// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTask/AbilityTask_ExecuteOnTick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ExecuteOnTick;
class UGameplayAbility;
#ifdef WARRIOR_AbilityTask_ExecuteOnTick_generated_h
#error "AbilityTask_ExecuteOnTick.generated.h already included, missing '#pragma once' in AbilityTask_ExecuteOnTick.h"
#endif
#define WARRIOR_AbilityTask_ExecuteOnTick_generated_h

#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_7_DELEGATE \
WARRIOR_API void FOnAbilityTaskTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTaskTickDelegate, float DeltaTime);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteOnTick);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ExecuteOnTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_ExecuteOnTick_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ExecuteOnTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ExecuteOnTick)


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_ExecuteOnTick(UAbilityTask_ExecuteOnTick&&); \
	UAbilityTask_ExecuteOnTick(const UAbilityTask_ExecuteOnTick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ExecuteOnTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ExecuteOnTick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_ExecuteOnTick) \
	NO_API virtual ~UAbilityTask_ExecuteOnTick();


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_11_PROLOG
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UAbilityTask_ExecuteOnTick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteOnTick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
