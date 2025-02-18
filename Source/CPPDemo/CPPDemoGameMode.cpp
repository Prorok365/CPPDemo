// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPDemoGameMode.h"
#include "CPPDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPDemoGameMode::ACPPDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
