// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestBlankProjectGameMode.h"
#include "TestBlankProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestBlankProjectGameMode::ATestBlankProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
