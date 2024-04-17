// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Runner_Game_Collab : ModuleRules
{
	public Runner_Game_Collab(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
