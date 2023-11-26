// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PJ_Pawn.generated.h"

class UCameraComponent;

UCLASS()
class PROJECT_01_API APJ_Pawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Camera")
	UCameraComponent* camera = nullptr;

public:
	// Sets default values for this pawn's properties
	APJ_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
