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
enum class EWarriorConfirmType : uint8;
struct FGameplayTag;
#ifdef WARRIOR_WarrriorFunctionLibrary_generated_h
#error "WarrriorFunctionLibrary.generated.h already included, missing '#pragma once' in WarrriorFunctionLibrary.h"
#endif
#define WARRIOR_WarrriorFunctionLibrary_generated_h

#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWarriorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorFunctionLibrary)


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorFunctionLibrary(UWarriorFunctionLibrary&&); \
	UWarriorFunctionLibrary(const UWarriorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorFunctionLibrary) \
	NO_API virtual ~UWarriorFunctionLibrary();


#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_17_PROLOG
#define FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarriorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Warrior_Source_Warrior_Public_WarrriorFunctionLibrary_h


#define FOREACH_ENUM_EWARRIORCONFIRMTYPE(op) \
	op(EWarriorConfirmType::Yes) \
	op(EWarriorConfirmType::No) 

enum class EWarriorConfirmType : uint8;
template<> struct TIsUEnumClass<EWarriorConfirmType> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorConfirmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
