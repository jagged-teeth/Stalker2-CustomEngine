﻿using UnrealBuildTool;

public class Stalker2EditorTarget : TargetRules {
	public Stalker2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"CustomInterfaces",
			"MediaIOCore",
			"SRLEAsset",
			"Stalker2",
		});
	}
}
