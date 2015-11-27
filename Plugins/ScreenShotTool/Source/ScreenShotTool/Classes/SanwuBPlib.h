// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SanwuBPlib.generated.h"

/**
 * 
 */
using namespace UF;

UCLASS()
class  USanwuBPlib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Sanwu|Tools")
	static FString TakeScreenShoot(FString picName,bool bUnique=true);
	UFUNCTION(BlueprintCallable, Category = "Sanwu|Tools")
	static FString GetBaseScreenShotPath();
};
