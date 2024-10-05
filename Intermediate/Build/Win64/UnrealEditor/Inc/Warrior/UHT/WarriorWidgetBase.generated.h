// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/WarriorWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnemyUIComponent;
class UHeroUIComponent;
#ifdef WARRIOR_WarriorWidgetBase_generated_h
#error "WarriorWidgetBase.generated.h already included, missing '#pragma once' in WarriorWidgetBase.h"
#endif
#define WARRIOR_WarriorWidgetBase_generated_h

#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitEnemyCreatedWidget);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorWidgetBase(); \
	friend struct Z_Construct_UClass_UWarriorWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UWarriorWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorWidgetBase)


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorWidgetBase(UWarriorWidgetBase&&); \
	UWarriorWidgetBase(const UWarriorWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorWidgetBase) \
	NO_API virtual ~UWarriorWidgetBase();


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_12_PROLOG
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarriorWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Warrior_Source_Warrior_Public_Widgets_WarriorWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
