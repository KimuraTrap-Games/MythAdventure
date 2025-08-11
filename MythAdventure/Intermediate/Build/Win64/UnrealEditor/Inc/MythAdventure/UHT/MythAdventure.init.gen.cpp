// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMythAdventure_init() {}
	MYTHADVENTURE_API UFunction* Z_Construct_UDelegateFunction_MythAdventure_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MythAdventure;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MythAdventure()
	{
		if (!Z_Registration_Info_UPackage__Script_MythAdventure.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MythAdventure_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MythAdventure",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4055E1C9,
				0xC170C4D3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MythAdventure.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MythAdventure.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MythAdventure(Z_Construct_UPackage__Script_MythAdventure, TEXT("/Script/MythAdventure"), Z_Registration_Info_UPackage__Script_MythAdventure, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4055E1C9, 0xC170C4D3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
