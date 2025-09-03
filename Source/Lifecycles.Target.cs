// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

using UnrealBuildTool;
using System.Collections.Generic;

public class LifecyclesTarget : TargetRules
{
	public LifecyclesTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Lifecycles" } );
	}
}
