// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PUBGInventory : ModuleRules
{
	public PUBGInventory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PUBGInventory",
			"PUBGInventory/Variant_Platforming",
			"PUBGInventory/Variant_Platforming/Animation",
			"PUBGInventory/Variant_Combat",
			"PUBGInventory/Variant_Combat/AI",
			"PUBGInventory/Variant_Combat/Animation",
			"PUBGInventory/Variant_Combat/Gameplay",
			"PUBGInventory/Variant_Combat/Interfaces",
			"PUBGInventory/Variant_Combat/UI",
			"PUBGInventory/Variant_SideScrolling",
			"PUBGInventory/Variant_SideScrolling/AI",
			"PUBGInventory/Variant_SideScrolling/Gameplay",
			"PUBGInventory/Variant_SideScrolling/Interfaces",
			"PUBGInventory/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
