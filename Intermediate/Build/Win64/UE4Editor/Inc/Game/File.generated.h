// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_File_generated_h
#error "File.generated.h already included, missing '#pragma once' in File.h"
#endif
#define GAME_File_generated_h

#define Game_Source_Game_File_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_File_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_File_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFile(); \
	friend struct Z_Construct_UClass_UFile_Statics; \
public: \
	DECLARE_CLASS(UFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UFile)


#define Game_Source_Game_File_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFile(); \
	friend struct Z_Construct_UClass_UFile_Statics; \
public: \
	DECLARE_CLASS(UFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UFile)


#define Game_Source_Game_File_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFile(UFile&&); \
	NO_API UFile(const UFile&); \
public:


#define Game_Source_Game_File_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFile(UFile&&); \
	NO_API UFile(const UFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFile)


#define Game_Source_Game_File_h_15_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_File_h_12_PROLOG
#define Game_Source_Game_File_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_File_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_File_h_15_RPC_WRAPPERS \
	Game_Source_Game_File_h_15_INCLASS \
	Game_Source_Game_File_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_File_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_File_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_File_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_File_h_15_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_File_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_File_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
