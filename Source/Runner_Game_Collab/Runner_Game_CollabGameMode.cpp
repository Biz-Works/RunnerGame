// Copyright Epic Games, Inc. All Rights Reserved.

#include "Runner_Game_CollabGameMode.h"
#include "Runner_Game_CollabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunner_Game_CollabGameMode::ARunner_Game_CollabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
