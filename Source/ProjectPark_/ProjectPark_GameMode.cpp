// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPark_GameMode.h"
#include "ProjectPark_Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectPark_GameMode::AProjectPark_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
