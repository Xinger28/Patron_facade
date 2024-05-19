// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patron_facade : ModuleRules
{
	public Patron_facade(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
