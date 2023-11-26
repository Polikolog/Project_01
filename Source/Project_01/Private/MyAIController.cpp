// Fill out your copyright notice in the Description page of Project Settings.
#include "MyAIController.h"
#include "MyPawn.h"

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnInfo.Owner = this;
	SpawnInfo.Name = "SubPawn";
}

void AMyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
