// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ProvingGroundsFPSGameMode.h"
#include "ProvingGroundsFPSHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProvingGroundsFPSGameMode::AProvingGroundsFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProvingGroundsFPSHUD::StaticClass();
}
