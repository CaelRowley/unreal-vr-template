// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerHand.h"

// Sets default values
//AControllerHand::AControllerHand()
//{
//	MotionController->SetShowDeviceModel(true);
//}

void AControllerHand::Initialize(EControllerHand TrackingSource)
{
	Super::Initialize(TrackingSource);

	if (MotionController->GetTrackingSource() == EControllerHand::Left) {
		//MotionController->SetRelativeScale3D(FVector(1.0, -1.0, 1.0));
		UE_LOG(LogTemp, Warning, TEXT("SetRelativeScale3D: LEFT"));
	}

	if (MotionController->GetTrackingSource() == EControllerHand::Right) {
		UE_LOG(LogTemp, Warning, TEXT("SetRelativeScale3D: RIGHT"));
	}
}

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
