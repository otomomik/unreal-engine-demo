// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEngineDemoGameMode.h"
#include "UnrealEngineDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealEngineDemoGameMode::AUnrealEngineDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
