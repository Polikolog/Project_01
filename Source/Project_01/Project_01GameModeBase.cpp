// Copyright Epic Games, Inc. All Rights Reserved.


#include "Project_01GameModeBase.h"
#include "MyPawn.h"
#include "MyPlayerController.h"

AProject_01GameModeBase::AProject_01GameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}
