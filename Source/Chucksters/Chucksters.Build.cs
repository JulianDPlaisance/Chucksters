// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Chucksters : ModuleRules
{
	public Chucksters(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
