// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"

#include "PlayerCharacter.generated.h"

UCLASS()
class VRTEMPLATE_API APlayerCharacter : public ACharacter
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

	UPROPERTY(BlueprintReadOnly)
	class UCameraComponent* Camera;
	UPROPERTY(BlueprintReadOnly)
	class USceneComponent* VRROrigin;
	UPROPERTY(BlueprintReadWrite)
	float ScaledCapsuleHalfHeight;

	UPROPERTY(BlueprintReadWrite)
	AControllerInterface* LeftController;
	UPROPERTY(BlueprintReadWrite)
	AControllerInterface* RightController;

	// Action mappings
	inline void GrabLeftPressed() { LeftController->GrabPressed(); }
	inline void GrabLeftReleased() { LeftController->GrabReleased(); }
	inline void GrabRightPressed() { RightController->GrabPressed(); }
	inline void GrabRightReleased() { RightController->GrabReleased(); }

	inline void TeleportLeftPressed() { LeftController->TeleportPressed(); }
	inline void TeleportLeftReleased() { LeftController->TeleportReleased(); }
	inline void TeleportRightPressed() { RightController->TeleportPressed(); }
	inline void TeleportRightReleased() { RightController->TeleportReleased(); }

	inline void TriggerLeftPressed() { LeftController->TriggerPressed(); }
	inline void TriggerLeftReleased() { LeftController->TriggerReleased(); }
	inline void TriggerRightPressed() { RightController->TriggerPressed(); }
	inline void TriggerRightReleased() { RightController->TriggerReleased(); }
};
