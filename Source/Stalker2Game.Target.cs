using UnrealBuildTool;

public class Stalker2GameTarget : TargetRules {
	public Stalker2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"CustomInterfaces",
			"MediaIOCore",
			"SRLEAsset",
			"Stalker2",
		});
	}
}
