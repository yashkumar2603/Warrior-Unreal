// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarrior_init() {}
	WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature();
	WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Warrior;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Warrior()
	{
		if (!Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Warrior",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC928199B,
				0x20402B46,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Warrior(Z_Construct_UPackage__Script_Warrior, TEXT("/Script/Warrior"), Z_Registration_Info_UPackage__Script_Warrior, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC928199B, 0x20402B46));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
