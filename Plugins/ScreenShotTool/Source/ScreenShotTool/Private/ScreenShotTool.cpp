// Some copyright should be here...

#include "ScreenShotToolPrivatePCH.h"



#define LOCTEXT_NAMESPACE "FScreenShotToolModule"

void FScreenShotToolModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FScreenShotToolModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FScreenShotToolModule, ScreenShotTool)