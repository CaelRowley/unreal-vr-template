// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerHand.h"

void AControllerHand::ThumbstickX(float axisValue, APawn* pawn, FVector direction)
{
	Super::ThumbstickX(axisValue, pawn, direction);

	if (MotionController->GetTrackingSource() == EControllerHand::Left) {
		pawn->AddMovementInput(axisValue * direction);
	}
}

void AControllerHand::ThumbstickY(float axisValue, APawn* pawn, FVector direction)
{
	Super::ThumbstickY(axisValue, pawn, direction);

	if (MotionController->GetTrackingSource() == EControllerHand::Left) {
		pawn->AddMovementInput(axisValue * direction);
	}
}
