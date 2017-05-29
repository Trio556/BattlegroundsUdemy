// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BattlegroundsUdemy.h"
#include "BattlegroundsUdemyGameMode.h"
#include "BattlegroundsUdemyHUD.h"
#include "BattlegroundsUdemyCharacter.h"

ABattlegroundsUdemyGameMode::ABattlegroundsUdemyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABattlegroundsUdemyHUD::StaticClass();
}
