// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Items/Weapons/WarriorHeroWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroWeapon() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorWeaponBase();
// End Cross Module References

// Begin Class AWarriorHeroWeapon
void AWarriorHeroWeapon::StaticRegisterNativesAWarriorHeroWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroWeapon);
UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister()
{
	return AWarriorHeroWeapon::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/WarriorHeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/WarriorHeroWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams = {
	&AWarriorHeroWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroWeapon()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton, Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorHeroWeapon>()
{
	return AWarriorHeroWeapon::StaticClass();
}
AWarriorHeroWeapon::AWarriorHeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroWeapon);
AWarriorHeroWeapon::~AWarriorHeroWeapon() {}
// End Class AWarriorHeroWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroWeapon, AWarriorHeroWeapon::StaticClass, TEXT("AWarriorHeroWeapon"), &Z_Registration_Info_UClass_AWarriorHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroWeapon), 2860780553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_1587873861(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
