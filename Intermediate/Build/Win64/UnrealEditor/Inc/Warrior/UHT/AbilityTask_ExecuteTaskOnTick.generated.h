// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTask/AbilityTask_ExecuteTaskOnTick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ExecuteTaskOnTick;
class UGameplayAbility;
#ifdef WARRIOR_AbilityTask_ExecuteTaskOnTick_generated_h
#error "AbilityTask_ExecuteTaskOnTick.generated.h already included, missing '#pragma once' in AbilityTask_ExecuteTaskOnTick.h"
#endif
#define WARRIOR_AbilityTask_ExecuteTaskOnTick_generated_h

#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_8_DELEGATE \
WARRIOR_API void FOnAbilityTaskTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTaskTickDelegate, float DeltaTime);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteTaskOnTick);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ExecuteTaskOnTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ExecuteTaskOnTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ExecuteTaskOnTick)


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_ExecuteTaskOnTick(UAbilityTask_ExecuteTaskOnTick&&); \
	UAbilityTask_ExecuteTaskOnTick(const UAbilityTask_ExecuteTaskOnTick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ExecuteTaskOnTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ExecuteTaskOnTick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_ExecuteTaskOnTick) \
	NO_API virtual ~UAbilityTask_ExecuteTaskOnTick();


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_12_PROLOG
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UAbilityTask_ExecuteTaskOnTick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTask_AbilityTask_ExecuteTaskOnTick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
