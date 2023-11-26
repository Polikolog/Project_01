// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PROJECT_01_API AMyPawn : public APawn
{
	GENERATED_BODY()

	// UPROPERTY(EditAnywhere, Category="Camera", meta=(AllowPrivateAccess = "true"))
	// UCameraComponent* Camera = nullptr;
	//
	// UPROPERTY(VisibleAnywhere, Category="Camera",meta=(AllowPrivateAccess = "true"))
	// class USpringArmComponent* SpringArm = nullptr;
	//
	// UPROPERTY(EditAnywhere, Category="Mesh", meta=(AllowPrivateAccess = "true"))
	// class UStaticMeshComponent* PawnMesh = nullptr;

	UPROPERTY(EditAnywhere, Category="Movement", meta=(AllowPrivateAccess = "true"))
	class UFloatingPawnMovement* PawnMovement = nullptr;

	UPROPERTY(EditAnywhere, Category="Collision", meta=(AllowPrivateAccess = "true"))
	bool nowCollision = false;
	
	UPROPERTY(EditAnywhere, Getter=GetForwardSpeed, Category="Speed", meta=(AllowPrivateAccess = "true"))
	float forward_speed = 100.f;

	UPROPERTY(EditAnywhere, Getter=GetRightSpeed, Category="Speed", meta=(AllowPrivateAccess = "true"))
	float right_speed = 10.f;
	
public:
	// Sets default values for this pawn's properties
	AMyPawn();

	UFUNCTION(BlueprintCallable)
	void SetForwardSpeed(float value = 0.f) {forward_speed = value;}

	UFUNCTION(BlueprintCallable)
	float GetForwardSpeed() const {return forward_speed;}
	
	UFUNCTION(BlueprintCallable)
	float GetRightSpeed() const {return right_speed;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	void MoveForward(float value);
	void MoveRight(float value);
};
