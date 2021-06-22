// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MotionControllerComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActivateTeleporterDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisableTeleportDelegate);

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
	bool isTeleporterActive;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FActivateTeleporterDelegate ActivateTeleporterDelegate;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FDisableTeleportDelegate DisableTeleportDelegate;

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
