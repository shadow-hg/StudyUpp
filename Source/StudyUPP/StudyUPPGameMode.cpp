// Copyright Epic Games, Inc. All Rights Reserved.

#include "StudyUPPGameMode.h"
#include "StudyUPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudyUPPGameMode::AStudyUPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
