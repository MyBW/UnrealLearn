// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShader/Public/MyShader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShader() {}
// Cross Module References
	TESTSHADER_API UScriptStruct* Z_Construct_UScriptStruct_FMyUniformBufferTestData();
	UPackage* Z_Construct_UPackage__Script_TestShader();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TESTSHADER_API UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary_NoRegister();
	TESTSHADER_API UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TESTSHADER_API UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	TESTSHADER_API UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget();
	TESTSHADER_API UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting();
// End Cross Module References
class UScriptStruct* FMyUniformBufferTestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TESTSHADER_API uint32 Get_Z_Construct_UScriptStruct_FMyUniformBufferTestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyUniformBufferTestData, Z_Construct_UPackage__Script_TestShader(), TEXT("MyUniformBufferTestData"), sizeof(FMyUniformBufferTestData), Get_Z_Construct_UScriptStruct_FMyUniformBufferTestData_Hash());
	}
	return Singleton;
}
template<> TESTSHADER_API UScriptStruct* StaticStruct<FMyUniformBufferTestData>()
{
	return FMyUniformBufferTestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyUniformBufferTestData(FMyUniformBufferTestData::StaticStruct, TEXT("/Script/TestShader"), TEXT("MyUniformBufferTestData"), false, nullptr, nullptr);
static struct FScriptStruct_TestShader_StaticRegisterNativesFMyUniformBufferTestData
{
	FScriptStruct_TestShader_StaticRegisterNativesFMyUniformBufferTestData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyUniformBufferTestData")),new UScriptStruct::TCppStructOps<FMyUniformBufferTestData>);
	}
} ScriptStruct_TestShader_StaticRegisterNativesFMyUniformBufferTestData;
	struct Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorFour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyUniformBufferTestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorIndex_MetaData[] = {
		{ "Category", "ShaderData" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyUniformBufferTestData, ColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorFour_MetaData[] = {
		{ "Category", "ShaderData" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorFour = { "ColorFour", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyUniformBufferTestData, ColorFour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorFour_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorFour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorThree_MetaData[] = {
		{ "Category", "ShaderData" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorThree = { "ColorThree", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyUniformBufferTestData, ColorThree), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorThree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorTwo_MetaData[] = {
		{ "Category", "ShaderData" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorTwo = { "ColorTwo", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyUniformBufferTestData, ColorTwo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorTwo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorOne_MetaData[] = {
		{ "Category", "ShaderData" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorOne = { "ColorOne", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyUniformBufferTestData, ColorOne), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorOne_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::NewProp_ColorOne,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TestShader,
		nullptr,
		&NewStructOps,
		"MyUniformBufferTestData",
		sizeof(FMyUniformBufferTestData),
		alignof(FMyUniformBufferTestData),
		Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyUniformBufferTestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyUniformBufferTestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TestShader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyUniformBufferTestData"), sizeof(FMyUniformBufferTestData), Get_Z_Construct_UScriptStruct_FMyUniformBufferTestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyUniformBufferTestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyUniformBufferTestData_Hash() { return 3402858896U; }
	void UTestShaderBlueprintLibrary::StaticRegisterNativesUTestShaderBlueprintLibrary()
	{
		UClass* Class = UTestShaderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTestShaderRenderTarget", &UTestShaderBlueprintLibrary::execDrawTestShaderRenderTarget },
			{ "TestComputerShaderRenderTarget", &UTestShaderBlueprintLibrary::execTestComputerShaderRenderTarget },
			{ "TextureWriting", &UTestShaderBlueprintLibrary::execTextureWriting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics
	{
		struct TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms
		{
			UTextureRenderTarget2D* OutputRenderTarget;
			AActor* Ac;
			FLinearColor MyColor;
			UTexture2D* MyTexture;
			FMyUniformBufferTestData UniformBufferTestData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniformBufferTestData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ac;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_UniformBufferTestData = { "UniformBufferTestData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, UniformBufferTestData), Z_Construct_UScriptStruct_FMyUniformBufferTestData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_MyTexture = { "MyTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, MyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_MyColor = { "MyColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, MyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_Ac = { "Ac", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, Ac), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_UniformBufferTestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_MyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_MyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_Ac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_OutputRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderTestPlugin" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestShaderBlueprintLibrary, nullptr, "DrawTestShaderRenderTarget", nullptr, nullptr, sizeof(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms), Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics
	{
		struct TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms
		{
			UTextureRenderTarget2D* OutputRenderTarget;
			AActor* Ac;
			FLinearColor MyColor;
			UTexture2D* MyTexture;
			FMyUniformBufferTestData UniformBufferTestData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniformBufferTestData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ac;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_UniformBufferTestData = { "UniformBufferTestData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms, UniformBufferTestData), Z_Construct_UScriptStruct_FMyUniformBufferTestData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_MyTexture = { "MyTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms, MyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_MyColor = { "MyColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms, MyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_Ac = { "Ac", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms, Ac), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_UniformBufferTestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_MyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_MyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_Ac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::NewProp_OutputRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderTestPlugin" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestShaderBlueprintLibrary, nullptr, "TestComputerShaderRenderTarget", nullptr, nullptr, sizeof(TestShaderBlueprintLibrary_eventTestComputerShaderRenderTarget_Parms), Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics
	{
		struct TestShaderBlueprintLibrary_eventTextureWriting_Parms
		{
			UTexture2D* TextureToBeWrite;
			AActor* ActorSelf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSelf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureToBeWrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::NewProp_ActorSelf = { "ActorSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTextureWriting_Parms, ActorSelf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::NewProp_TextureToBeWrite = { "TextureToBeWrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventTextureWriting_Parms, TextureToBeWrite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::NewProp_ActorSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::NewProp_TextureToBeWrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderTestPlugin" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestShaderBlueprintLibrary, nullptr, "TextureWriting", nullptr, nullptr, sizeof(TestShaderBlueprintLibrary_eventTextureWriting_Parms), Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary_NoRegister()
	{
		return UTestShaderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget, "DrawTestShaderRenderTarget" }, // 3732698552
		{ &Z_Construct_UFunction_UTestShaderBlueprintLibrary_TestComputerShaderRenderTarget, "TestComputerShaderRenderTarget" }, // 1068699061
		{ &Z_Construct_UFunction_UTestShaderBlueprintLibrary_TextureWriting, "TextureWriting" }, // 3071038062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyShader.h" },
		{ "ModuleRelativePath", "Public/MyShader.h" },
		{ "ScriptName", "TestShaderLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestShaderBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::ClassParams = {
		&UTestShaderBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestShaderBlueprintLibrary, 3525360285);
	template<> TESTSHADER_API UClass* StaticClass<UTestShaderBlueprintLibrary>()
	{
		return UTestShaderBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestShaderBlueprintLibrary(Z_Construct_UClass_UTestShaderBlueprintLibrary, &UTestShaderBlueprintLibrary::StaticClass, TEXT("/Script/TestShader"), TEXT("UTestShaderBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestShaderBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
