// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MansionOfTheUndeadEditorTarget : TargetRules
{
	public MansionOfTheUndeadEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("MansionOfTheUndead");
	}
}
