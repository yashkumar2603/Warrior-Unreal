// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/Combat/HeroCombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCombatComponent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent();
// End Cross Module References

// Begin Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics
{
	struct HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms
	{
		FGameplayTag InWeaponTag;
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InWeaponTag = { "InWeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, InWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InWeaponTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCarriedWeaponByTag", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCarriedWeaponByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCarriedWeaponByTag(Z_Param_InWeaponTag);
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag

// Begin Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms
	{
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCurrentEquippedWeapon();
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon

// Begin Class UHeroCombatComponent Function GetHeroCurrentEquippWeaponDamageAtLevel
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentEquippWeaponDamageAtLevel_Parms
	{
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippWeaponDamageAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippWeaponDamageAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentEquippWeaponDamageAtLevel", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentEquippWeaponDamageAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentEquippWeaponDamageAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentEquippWeaponDamageAtLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeroCurrentEquippWeaponDamageAtLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCurrentEquippWeaponDamageAtLevel

// Begin Class UHeroCombatComponent
void UHeroCombatComponent::StaticRegisterNativesUHeroCombatComponent()
{
	UClass* Class = UHeroCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCarriedWeaponByTag", &UHeroCombatComponent::execGetHeroCarriedWeaponByTag },
		{ "GetHeroCurrentEquippedWeapon", &UHeroCombatComponent::execGetHeroCurrentEquippedWeapon },
		{ "GetHeroCurrentEquippWeaponDamageAtLevel", &UHeroCombatComponent::execGetHeroCurrentEquippWeaponDamageAtLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroCombatComponent);
UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister()
{
	return UHeroCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/HeroCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag, "GetHeroCarriedWeaponByTag" }, // 1312690686
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon, "GetHeroCurrentEquippedWeapon" }, // 3761104595
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippWeaponDamageAtLevel, "GetHeroCurrentEquippWeaponDamageAtLevel" }, // 2396435844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams = {
	&UHeroCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroCombatComponent()
{
	if (!Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton, Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroCombatComponent>()
{
	return UHeroCombatComponent::StaticClass();
}
UHeroCombatComponent::UHeroCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCombatComponent);
UHeroCombatComponent::~UHeroCombatComponent() {}
// End Class UHeroCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroCombatComponent, UHeroCombatComponent::StaticClass, TEXT("UHeroCombatComponent"), &Z_Registration_Info_UClass_UHeroCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroCombatComponent), 74603977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_1368463983(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
