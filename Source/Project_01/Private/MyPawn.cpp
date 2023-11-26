// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyPawn::AMyPawn()
{
	AutoPossessPlayer = EAutoReceiveInput::Disabled;

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//forward_speed += DeltaTime * 100;
	//MoveForward(DeltaTime);
}

void AMyPawn::MoveForward(float value)
{
	// FVector NewLocation = GetActorLocation();
	// NewLocation.X += value * forward_speed;
	// SetActorLocation(NewLocation, true);
}