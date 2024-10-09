// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_TargetLock() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister();
// End Cross Module References

// Begin Class UHeroGameplayAbility_TargetLock Function OnTargetLockTick
struct Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics
{
	struct HeroGameplayAbility_TargetLock_eventOnTargetLockTick_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UGameplayAbility Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_TargetLock_eventOnTargetLockTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_TargetLock, nullptr, "OnTargetLockTick", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::HeroGameplayAbility_TargetLock_eventOnTargetLockTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::HeroGameplayAbility_TargetLock_eventOnTargetLockTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_TargetLock::execOnTargetLockTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetLockTick(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_TargetLock Function OnTargetLockTick

// Begin Class UHeroGameplayAbility_TargetLock Function SwitchTarget
struct Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics
{
	struct HeroGameplayAbility_TargetLock_eventSwitchTarget_Parms
	{
		FGameplayTag InSwitchDirectionTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSwitchDirectionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSwitchDirectionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::NewProp_InSwitchDirectionTag = { "InSwitchDirectionTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_TargetLock_eventSwitchTarget_Parms, InSwitchDirectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSwitchDirectionTag_MetaData), NewProp_InSwitchDirectionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::NewProp_InSwitchDirectionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_TargetLock, nullptr, "SwitchTarget", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::HeroGameplayAbility_TargetLock_eventSwitchTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::HeroGameplayAbility_TargetLock_eventSwitchTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_TargetLock::execSwitchTarget)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InSwitchDirectionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchTarget(Z_Param_Out_InSwitchDirectionTag);
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_TargetLock Function SwitchTarget

// Begin Class UHeroGameplayAbility_TargetLock
void UHeroGameplayAbility_TargetLock::StaticRegisterNativesUHeroGameplayAbility_TargetLock()
{
	UClass* Class = UHeroGameplayAbility_TargetLock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetLockTick", &UHeroGameplayAbility_TargetLock::execOnTargetLockTick },
		{ "SwitchTarget", &UHeroGameplayAbility_TargetLock::execSwitchTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility_TargetLock);
UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock_NoRegister()
{
	return UHeroGameplayAbility_TargetLock::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceDistance_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceBoxSize_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceChannel_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPersistentDebugShape_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidgetClass_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockRotationInterpSpeed_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockMaxWalkSpeed_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockMappingContext_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockCameraOffsetDistance_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActorsToLock_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLockedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnTargetLockWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidgetSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultMaxWalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_TargetLock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxTraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBoxSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoxTraceChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxTraceChannel;
	static void NewProp_bShowPersistentDebugShape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPersistentDebugShape;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetLockWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockRotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockMaxWalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockCameraOffsetDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActorsToLock_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActorsToLock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentLockedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnTargetLockWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLockWidgetSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedDefaultMaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_OnTargetLockTick, "OnTargetLockTick" }, // 1695636822
		{ &Z_Construct_UFunction_UHeroGameplayAbility_TargetLock_SwitchTarget, "SwitchTarget" }, // 1250172902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_TargetLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceDistance = { "BoxTraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, BoxTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceDistance_MetaData), NewProp_BoxTraceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TraceBoxSize = { "TraceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TraceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceBoxSize_MetaData), NewProp_TraceBoxSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel_Inner = { "BoxTraceChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel = { "BoxTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, BoxTraceChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceChannel_MetaData), NewProp_BoxTraceChannel_MetaData) }; // 1798967895
void Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape_SetBit(void* Obj)
{
	((UHeroGameplayAbility_TargetLock*)Obj)->bShowPersistentDebugShape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape = { "bShowPersistentDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility_TargetLock), &Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPersistentDebugShape_MetaData), NewProp_bShowPersistentDebugShape_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockWidgetClass = { "TargetLockWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockWidgetClass_MetaData), NewProp_TargetLockWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockRotationInterpSpeed = { "TargetLockRotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockRotationInterpSpeed_MetaData), NewProp_TargetLockRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockMaxWalkSpeed = { "TargetLockMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockMaxWalkSpeed_MetaData), NewProp_TargetLockMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockMappingContext = { "TargetLockMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockMappingContext_MetaData), NewProp_TargetLockMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockCameraOffsetDistance = { "TargetLockCameraOffsetDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockCameraOffsetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockCameraOffsetDistance_MetaData), NewProp_TargetLockCameraOffsetDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLock_Inner = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLock = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, AvailableActorsToLock), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActorsToLock_MetaData), NewProp_AvailableActorsToLock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_CurrentLockedActor = { "CurrentLockedActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, CurrentLockedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLockedActor_MetaData), NewProp_CurrentLockedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_DrawnTargetLockWidget = { "DrawnTargetLockWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, DrawnTargetLockWidget), Z_Construct_UClass_UWarriorWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnTargetLockWidget_MetaData), NewProp_DrawnTargetLockWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockWidgetSize = { "TargetLockWidgetSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, TargetLockWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockWidgetSize_MetaData), NewProp_TargetLockWidgetSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_CachedDefaultMaxWalkSpeed = { "CachedDefaultMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_TargetLock, CachedDefaultMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDefaultMaxWalkSpeed_MetaData), NewProp_CachedDefaultMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TraceBoxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_BoxTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_bShowPersistentDebugShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockMaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockCameraOffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLock_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_AvailableActorsToLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_CurrentLockedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_DrawnTargetLockWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_TargetLockWidgetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::NewProp_CachedDefaultMaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::ClassParams = {
	&UHeroGameplayAbility_TargetLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility_TargetLock()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_TargetLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroGameplayAbility_TargetLock>()
{
	return UHeroGameplayAbility_TargetLock::StaticClass();
}
UHeroGameplayAbility_TargetLock::UHeroGameplayAbility_TargetLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_TargetLock);
UHeroGameplayAbility_TargetLock::~UHeroGameplayAbility_TargetLock() {}
// End Class UHeroGameplayAbility_TargetLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility_TargetLock, UHeroGameplayAbility_TargetLock::StaticClass, TEXT("UHeroGameplayAbility_TargetLock"), &Z_Registration_Info_UClass_UHeroGameplayAbility_TargetLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility_TargetLock), 1522462097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_2937110929(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_TargetLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
