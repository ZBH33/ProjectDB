// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDBGameMode.h"
#include "ProjectDBCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectDBGameMode::AProjectDBGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
