// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestShader.h"

#define LOCTEXT_NAMESPACE "FTestShaderModule"

void FTestShaderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("TestShader"))->GetBaseDir(), TEXT("Shader"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/ShadertestPlugin"), PluginShaderDir);
}

void FTestShaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestShaderModule, TestShader)