#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Classes/Kismet/BlueprintFunctionLibrary.h"
#include "MyShader.generated.h"

USTRUCT(BlueprintType)
struct FMyUniformBufferTestData
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = ShaderData)
		FLinearColor ColorOne;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = ShaderData)
		FLinearColor ColorTwo;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = ShaderData)
		FLinearColor ColorThree;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = ShaderData)
		FLinearColor ColorFour;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = ShaderData)
		int32 ColorIndex;
};


UCLASS(MinimalAPI, meta=(ScriptName = "TestShaderLibrary"))
class UTestShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "ShaderTestPlugin", meta = (WorldContext = "WorldContextObject"))
	static void DrawTestShaderRenderTarget(class UTextureRenderTarget2D *OutputRenderTarget, AActor *Ac, FLinearColor MyColor, UTexture2D* MyTexture, FMyUniformBufferTestData UniformBufferTestData);
	UFUNCTION(BlueprintCallable, Category = "ShaderTestPlugin", meta = (WorldContext = "WorldContextObject"))
	static void TextureWriting(class UTexture2D *TextureToBeWrite, AActor *ActorSelf);
	UFUNCTION(BlueprintCallable, Category = "ShaderTestPlugin", meta = (WorldContext = "WorldContextObject"))
	static void TestComputerShaderRenderTarget(class UTextureRenderTarget2D *OutputRenderTarget, AActor *Ac, FLinearColor MyColor, UTexture2D* MyTexture, FMyUniformBufferTestData UniformBufferTestData);
};