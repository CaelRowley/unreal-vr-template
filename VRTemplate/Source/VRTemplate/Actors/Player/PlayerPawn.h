// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class VRTEMPLATE_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(BlueprintReadWrite)
	AControllerInterface* LeftController;
	UPROPERTY(BlueprintReadWrite)
	AControllerInterface* RightController;

	// Action mappings
	inline void GrabLeftPressed() { LeftController->GrabPressed(); }
	inline void GrabLeftReleased() { LeftController->GrabReleased(); }

	inline void GrabRightPressed() { RightController->GrabPressed(); }
	inline void GrabRightReleased() { RightController->GrabReleased(); }
};
