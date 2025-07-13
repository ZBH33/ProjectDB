// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectDB : ModuleRules
{
    public ProjectDB(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Core engine and gameplay dependencies -------------------------------------
        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "OnlineSubsystem",
            "OnlineSubsystemUtils"
        });

        // Runtime‑only linkage -------------------------------------------------------
        // Steam must be loaded dynamically so that the plugin manager can resolve
        // the correct platform implementation and control startup order.
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
        }
    }
}
