// Fill out your copyright notice in the Description page of Project Settings.

#include "ScreenShotToolPrivatePCH.h"
#include "SanwuBPlib.h"
#include "Engine.h"

FString USanwuBPlib::TakeScreenShoot(FString picName,bool bUnique)
{
	FString inStr;
	FString Filename;
	FScreenshotRequest::RequestScreenshot(picName + ".png", false, bUnique);
	FString ResultStr=FScreenshotRequest::GetFilename();
	ResultStr = FPaths::GetBaseFilename(ResultStr, true);
	return ResultStr+".png";
	//return  FPaths::ConvertRelativePathToFull(FPaths::ScreenShotDir()) + picName + ".png";

}
FString USanwuBPlib::GetBaseScreenShotPath()
{
	return  FPaths::ConvertRelativePathToFull(FPaths::ScreenShotDir());
}
