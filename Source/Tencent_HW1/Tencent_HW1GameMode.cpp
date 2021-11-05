// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tencent_HW1GameMode.h"
#include "Tencent_HW1HUD.h"
#include "Tencent_HW1Character.h"
#include "UObject/ConstructorHelpers.h"

ATencent_HW1GameMode::ATencent_HW1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATencent_HW1HUD::StaticClass();
}
