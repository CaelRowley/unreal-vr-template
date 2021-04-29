// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MotionControllerComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerInterface.generated.h"

UCLASS()
class VALVEINDEXTEMPLATE_API AControllerInterface : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControllerInterface();

	UPROPERTY(VisibleAnywhere)
	class UMotionControllerComponent* MotionController;

	virtual void Initialize(EControllerHand TrackingSource);


	// Action mappings
	virtual void TriggerPressed();
	virtual void TriggerReleased();
	virtual void GrabPressed();
	virtual void GrabReleased();
	virtual void TrackpadPressed();
	virtual void TrackpadReleased();

	// Axis mappings
	virtual void ThumbstickX(float axisValue, APawn* pawn, FVector direction);
	virtual void ThumbstickY(float axisValue, APawn* pawn, FVector direction);
	virtual void Squeeze(float axisValue);
	virtual void TriggerAxis(float axisValue);
};
