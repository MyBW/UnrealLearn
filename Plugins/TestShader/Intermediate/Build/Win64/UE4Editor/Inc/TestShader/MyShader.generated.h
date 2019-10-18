// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class AActor;
struct FLinearColor;
class UTexture2D;
struct FMyUniformBufferTestData;
#ifdef TESTSHADER_MyShader_generated_h
#error "MyShader.generated.h already included, missing '#pragma once' in MyShader.h"
#endif
#define TESTSHADER_MyShader_generated_h

#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics; \
	TESTSHADER_API static class UScriptStruct* StaticStruct();


template<> TESTSHADER_API UScriptStruct* StaticStruct<struct FMyUniformBufferTestData>();

#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestComputerShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(AActor,Z_Param_Ac); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture2D,Z_Param_MyTexture); \
		P_GET_STRUCT(FMyUniformBufferTestData,Z_Param_UniformBufferTestData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::TestComputerShaderRenderTarget(Z_Param_OutputRenderTarget,Z_Param_Ac,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformBufferTestData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextureWriting) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_TextureToBeWrite); \
		P_GET_OBJECT(AActor,Z_Param_ActorSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::TextureWriting(Z_Param_TextureToBeWrite,Z_Param_ActorSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTestShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(AActor,Z_Param_Ac); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture2D,Z_Param_MyTexture); \
		P_GET_STRUCT(FMyUniformBufferTestData,Z_Param_UniformBufferTestData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::DrawTestShaderRenderTarget(Z_Param_OutputRenderTarget,Z_Param_Ac,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformBufferTestData); \
		P_NATIVE_END; \
	}


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestComputerShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(AActor,Z_Param_Ac); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture2D,Z_Param_MyTexture); \
		P_GET_STRUCT(FMyUniformBufferTestData,Z_Param_UniformBufferTestData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::TestComputerShaderRenderTarget(Z_Param_OutputRenderTarget,Z_Param_Ac,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformBufferTestData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTextureWriting) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_TextureToBeWrite); \
		P_GET_OBJECT(AActor,Z_Param_ActorSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::TextureWriting(Z_Param_TextureToBeWrite,Z_Param_ActorSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTestShaderRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(AActor,Z_Param_Ac); \
		P_GET_STRUCT(FLinearColor,Z_Param_MyColor); \
		P_GET_OBJECT(UTexture2D,Z_Param_MyTexture); \
		P_GET_STRUCT(FMyUniformBufferTestData,Z_Param_UniformBufferTestData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTestShaderBlueprintLibrary::DrawTestShaderRenderTarget(Z_Param_OutputRenderTarget,Z_Param_Ac,Z_Param_MyColor,Z_Param_MyTexture,Z_Param_UniformBufferTestData); \
		P_NATIVE_END; \
	}


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestShader"), TESTSHADER_API) \
	DECLARE_SERIALIZER(UTestShaderBlueprintLibrary)


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTestShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestShader"), TESTSHADER_API) \
	DECLARE_SERIALIZER(UTestShaderBlueprintLibrary)


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTSHADER_API UTestShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestShaderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTSHADER_API, UTestShaderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestShaderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTSHADER_API UTestShaderBlueprintLibrary(UTestShaderBlueprintLibrary&&); \
	TESTSHADER_API UTestShaderBlueprintLibrary(const UTestShaderBlueprintLibrary&); \
public:


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTSHADER_API UTestShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTSHADER_API UTestShaderBlueprintLibrary(UTestShaderBlueprintLibrary&&); \
	TESTSHADER_API UTestShaderBlueprintLibrary(const UTestShaderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTSHADER_API, UTestShaderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestShaderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestShaderBlueprintLibrary)


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_PRIVATE_PROPERTY_OFFSET
#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_24_PROLOG
#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_PRIVATE_PROPERTY_OFFSET \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_RPC_WRAPPERS \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_INCLASS \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_PRIVATE_PROPERTY_OFFSET \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_INCLASS_NO_PURE_DECLS \
	RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TestShaderBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSHADER_API UClass* StaticClass<class UTestShaderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RenderLearn423_Plugins_TestShader_Source_TestShader_Public_MyShader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
