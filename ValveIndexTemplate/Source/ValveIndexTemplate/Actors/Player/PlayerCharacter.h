// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ValveIndexTemplate/Actors/Player/Controllers/ControllerInterface.h"

#include "Camera/CameraComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class VALVEINDEXTEMPLATE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* VRRoot;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AControllerInterface> ControllerInterface;
	UPROPERTY(VisibleAnywhere)
	AControllerInterface* LeftController;

	// Axis mappings
	inline void LeftThumbstickX(float throttle) { LeftController->ThumbstickX(throttle, this, Camera->GetRightVector()); }
	inline void LeftThumbstickY(float throttle) { LeftController->ThumbstickY(throttle, this, Camera->GetForwardVector()); }
};
