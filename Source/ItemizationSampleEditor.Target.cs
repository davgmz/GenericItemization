// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ItemizationSampleEditorTarget : TargetRules
{
	public ItemizationSampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		
		bUseUnityBuild = false;
		bUseAdaptiveUnityBuild = false;
		
		ExtraModuleNames.Add("ItemizationSample");
	}
}
