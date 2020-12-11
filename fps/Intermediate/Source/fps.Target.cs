using UnrealBuildTool;

public class fpsTarget : TargetRules
{
	public fpsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("fps");
	}
}
