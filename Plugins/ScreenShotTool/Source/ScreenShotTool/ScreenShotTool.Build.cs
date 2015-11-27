// Some copyright should be here...

using UnrealBuildTool;

public class ScreenShotTool : ModuleRules
{
	public ScreenShotTool(TargetInfo Target)
	{
		PublicIncludePaths.AddRange(new string[] {
				"ScreenShotTool/Public"
			});
		PrivateIncludePaths.AddRange(new string[] {
				"ScreenShotTool/Private",
			});
		PublicDependencyModuleNames.AddRange(new string[]{
				"Core","CoreUObject","Engine","InputCore"
			});
		PrivateDependencyModuleNames.AddRange(new string[]{
				"Slate", "SlateCore","Core","CoreUObject","Engine","InputCore"
			});
		DynamicallyLoadedModuleNames.AddRange(new string[]{
			});
	}
}
