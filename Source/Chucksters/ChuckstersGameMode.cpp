// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChuckstersGameMode.h"
#include "ChuckstersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChuckstersGameMode::AChuckstersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
