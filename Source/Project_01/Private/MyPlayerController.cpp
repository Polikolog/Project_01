// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyPawn.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
}

void AMyPlayerController::MoveRight(float value)
{
	auto pawn = Cast<AMyPawn, APawn>(GetPawn());
	if(!pawn)
		return;

	axis_input = -value * pawn->GetRightSpeed();
	pawn->AddMovementInput(GetPawn()->GetActorRightVector(), axis_input);
}
