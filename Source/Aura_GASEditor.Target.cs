// Copyright JINMY

using UnrealBuildTool;
using System.Collections.Generic;

public class Aura_GASEditorTarget : TargetRules
{
	public Aura_GASEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Aura_GAS" } );
	}
}
