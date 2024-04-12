// Copyright JINMY

using UnrealBuildTool;
using System.Collections.Generic;

public class Aura_GASTarget : TargetRules
{
	public Aura_GASTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Aura_GAS" } );
	}
}
