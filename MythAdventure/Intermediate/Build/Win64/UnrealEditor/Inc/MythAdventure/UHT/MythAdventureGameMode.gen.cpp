// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MythAdventure/MythAdventureGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMythAdventureGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventureGameMode();
MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventureGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MythAdventure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMythAdventureGameMode ***************************************************
void AMythAdventureGameMode::StaticRegisterNativesAMythAdventureGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMythAdventureGameMode;
UClass* AMythAdventureGameMode::GetPrivateStaticClass()
{
	using TClass = AMythAdventureGameMode;
	if (!Z_Registration_Info_UClass_AMythAdventureGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MythAdventureGameMode"),
			Z_Registration_Info_UClass_AMythAdventureGameMode.InnerSingleton,
			StaticRegisterNativesAMythAdventureGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMythAdventureGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMythAdventureGameMode_NoRegister()
{
	return AMythAdventureGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMythAdventureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MythAdventureGameMode.h" },
		{ "ModuleRelativePath", "MythAdventureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMythAdventureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMythAdventureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MythAdventure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMythAdventureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMythAdventureGameMode_Statics::ClassParams = {
	&AMythAdventureGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMythAdventureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMythAdventureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMythAdventureGameMode()
{
	if (!Z_Registration_Info_UClass_AMythAdventureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMythAdventureGameMode.OuterSingleton, Z_Construct_UClass_AMythAdventureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMythAdventureGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMythAdventureGameMode);
AMythAdventureGameMode::~AMythAdventureGameMode() {}
// ********** End Class AMythAdventureGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureGameMode_h__Script_MythAdventure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMythAdventureGameMode, AMythAdventureGameMode::StaticClass, TEXT("AMythAdventureGameMode"), &Z_Registration_Info_UClass_AMythAdventureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMythAdventureGameMode), 2852016647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureGameMode_h__Script_MythAdventure_588602017(TEXT("/Script/MythAdventure"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureGameMode_h__Script_MythAdventure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureGameMode_h__Script_MythAdventure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
