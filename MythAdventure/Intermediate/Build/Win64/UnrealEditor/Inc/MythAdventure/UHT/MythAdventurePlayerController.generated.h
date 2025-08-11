// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MythAdventurePlayerController.h"

#ifdef MYTHADVENTURE_MythAdventurePlayerController_generated_h
#error "MythAdventurePlayerController.generated.h already included, missing '#pragma once' in MythAdventurePlayerController.h"
#endif
#define MYTHADVENTURE_MythAdventurePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMythAdventurePlayerController *******************************************
MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventurePlayerController_NoRegister();

#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMythAdventurePlayerController(); \
	friend struct Z_Construct_UClass_AMythAdventurePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventurePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMythAdventurePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MythAdventure"), Z_Construct_UClass_AMythAdventurePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMythAdventurePlayerController)


#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMythAdventurePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMythAdventurePlayerController(AMythAdventurePlayerController&&) = delete; \
	AMythAdventurePlayerController(const AMythAdventurePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMythAdventurePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMythAdventurePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMythAdventurePlayerController) \
	NO_API virtual ~AMythAdventurePlayerController();


#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_15_PROLOG
#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMythAdventurePlayerController;

// ********** End Class AMythAdventurePlayerController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventurePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
