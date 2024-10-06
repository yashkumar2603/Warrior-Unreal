// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WarrriorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPawnCombatComponent;
enum class EWarriorConfirmType : uint8;
enum class EWarriorValidType : uint8;
struct FGameplayTag;
#ifdef WARRIOR_WarrriorFunctionLibrary_generated_h
#error "WarrriorFunctionLibrary.generated.h already included, missing '#pragma once' in WarrriorFunctionLibrary.h"
#endif
#define WARRIOR_WarrriorFunctionLibrary_generated_h

#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTargetPawnHostile); \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActor); \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarrriorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWarrriorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWarrriorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarrriorFunctionLibrary)


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarrriorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarrriorFunctionLibrary(UWarrriorFunctionLibrary&&); \
	UWarrriorFunctionLibrary(const UWarrriorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarrriorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarrriorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarrriorFunctionLibrary) \
	NO_API virtual ~UWarrriorFunctionLibrary();


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_13_PROLOG
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarrriorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
