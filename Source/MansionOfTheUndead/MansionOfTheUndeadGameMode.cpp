// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MansionOfTheUndeadGameMode.h"
#include "MansionOfTheUndeadHUD.h"
#include "MansionOfTheUndeadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMansionOfTheUndeadGameMode::AMansionOfTheUndeadGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMansionOfTheUndeadHUD::StaticClass();
}
