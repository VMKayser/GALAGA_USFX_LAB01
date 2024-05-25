// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GALAGA_USFXFVM : ModuleRules
{
	public GALAGA_USFXFVM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
