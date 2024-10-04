// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/GE_ExecCalc_DamageTaken.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGE_ExecCalc_DamageTaken() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UGE_ExecCalc_DamageTaken();
WARRIOR_API UClass* Z_Construct_UClass_UGE_ExecCalc_DamageTaken_NoRegister();
// End Cross Module References

// Begin Class UGE_ExecCalc_DamageTaken
void UGE_ExecCalc_DamageTaken::StaticRegisterNativesUGE_ExecCalc_DamageTaken()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGE_ExecCalc_DamageTaken);
UClass* Z_Construct_UClass_UGE_ExecCalc_DamageTaken_NoRegister()
{
	return UGE_ExecCalc_DamageTaken::StaticClass();
}
struct Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GE_ExecCalc_DamageTaken.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GE_ExecCalc_DamageTaken.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGE_ExecCalc_DamageTaken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::ClassParams = {
	&UGE_ExecCalc_DamageTaken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::Class_MetaDataParams), Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGE_ExecCalc_DamageTaken()
{
	if (!Z_Registration_Info_UClass_UGE_ExecCalc_DamageTaken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGE_ExecCalc_DamageTaken.OuterSingleton, Z_Construct_UClass_UGE_ExecCalc_DamageTaken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGE_ExecCalc_DamageTaken.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UGE_ExecCalc_DamageTaken>()
{
	return UGE_ExecCalc_DamageTaken::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGE_ExecCalc_DamageTaken);
UGE_ExecCalc_DamageTaken::~UGE_ExecCalc_DamageTaken() {}
// End Class UGE_ExecCalc_DamageTaken

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_GE_ExecCalc_DamageTaken_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGE_ExecCalc_DamageTaken, UGE_ExecCalc_DamageTaken::StaticClass, TEXT("UGE_ExecCalc_DamageTaken"), &Z_Registration_Info_UClass_UGE_ExecCalc_DamageTaken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGE_ExecCalc_DamageTaken), 510854311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_GE_ExecCalc_DamageTaken_h_3239160512(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_GE_ExecCalc_DamageTaken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_AbilitySystem_GE_ExecCalc_DamageTaken_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
