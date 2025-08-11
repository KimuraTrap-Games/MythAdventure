// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MythAdventureCharacter.h"

#ifdef MYTHADVENTURE_MythAdventureCharacter_generated_h
#error "MythAdventureCharacter.generated.h already included, missing '#pragma once' in MythAdventureCharacter.h"
#endif
#define MYTHADVENTURE_MythAdventureCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMythAdventureCharacter **************************************************
#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventureCharacter_NoRegister();

#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMythAdventureCharacter(); \
	friend struct Z_Construct_UClass_AMythAdventureCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYTHADVENTURE_API UClass* Z_Construct_UClass_AMythAdventureCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMythAdventureCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MythAdventure"), Z_Construct_UClass_AMythAdventureCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMythAdventureCharacter)


#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMythAdventureCharacter(AMythAdventureCharacter&&) = delete; \
	AMythAdventureCharacter(const AMythAdventureCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMythAdventureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMythAdventureCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMythAdventureCharacter) \
	NO_API virtual ~AMythAdventureCharacter();


#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_21_PROLOG
#define FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMythAdventureCharacter;

// ********** End Class AMythAdventureCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_MythAdventure_MythAdventure_Source_MythAdventure_MythAdventureCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
