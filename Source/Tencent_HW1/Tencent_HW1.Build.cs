// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tencent_HW1 : ModuleRules
{
	public Tencent_HW1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
