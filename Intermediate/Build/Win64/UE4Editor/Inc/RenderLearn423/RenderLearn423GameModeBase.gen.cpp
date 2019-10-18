// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderLearn423/RenderLearn423GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderLearn423GameModeBase() {}
// Cross Module References
	RENDERLEARN423_API UClass* Z_Construct_UClass_ARenderLearn423GameModeBase_NoRegister();
	RENDERLEARN423_API UClass* Z_Construct_UClass_ARenderLearn423GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RenderLearn423();
// End Cross Module References
	void ARenderLearn423GameModeBase::StaticRegisterNativesARenderLearn423GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARenderLearn423GameModeBase_NoRegister()
	{
		return ARenderLearn423GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARenderLearn423GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderLearn423,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RenderLearn423GameModeBase.h" },
		{ "ModuleRelativePath", "RenderLearn423GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderLearn423GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::ClassParams = {
		&ARenderLearn423GameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARenderLearn423GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARenderLearn423GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARenderLearn423GameModeBase, 2970958376);
	template<> RENDERLEARN423_API UClass* StaticClass<ARenderLearn423GameModeBase>()
	{
		return ARenderLearn423GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARenderLearn423GameModeBase(Z_Construct_UClass_ARenderLearn423GameModeBase, &ARenderLearn423GameModeBase::StaticClass, TEXT("/Script/RenderLearn423"), TEXT("ARenderLearn423GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderLearn423GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
