// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASSandboxGameMode.h"
#include "GASSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASSandboxGameMode::AGASSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
