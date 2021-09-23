// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MotionControllerComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerInterface.generated.h"

UCLASS()
class VRTEMPLATE_API AControllerInterface : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AControllerInterface();

	void PairControllers(AControllerInterface* Controller);

	UPROPERTY(BlueprintReadOnly)
	AControllerInterface* OtherController;
	UPROPERTY(BlueprintReadWrite)
	bool IsTeleporterActive;
	UPROPERTY(BlueprintReadWrite)
	bool IsValidTeleportDestination;
	UPROPERTY(BlueprintReadWrite)
	FVector TeleporterDestination;
	UPROPERTY(BlueprintReadWrite)
	FRotator InitialControllerRotation;
	UPROPERTY(BlueprintReadWrite)
	FRotator TeleportRotation;
	UPROPERTY(BlueprintReadWrite)
	class UMotionControllerComponent* MotionControllerReference;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ActivateTeleporter();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void DisableTeleporter();

	UFUNCTION(BlueprintPure)
	void GetTeleporterDestination(FVector& Location, FRotator& Rotation);

	// Action mappings
	UFUNCTION(BlueprintNativeEvent)
	void GrabPressed();
	UFUNCTION(BlueprintNativeEvent)
	void GrabReleased();

	UFUNCTION(BlueprintNativeEvent)
	void TeleportPressed();
	UFUNCTION(BlueprintNativeEvent)
	void TeleportReleased();
};