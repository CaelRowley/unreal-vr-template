// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	MotionController->SetShowDeviceModel(true);
	SetRootComponent(MotionController);
}

void AControllerInterface::Initialize(EControllerHand TrackingSource)
{
	MotionController->SetTrackingSource(TrackingSource);
}

// Action mappings
void AControllerInterface::TriggerPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->TriggerPressed()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::TriggerReleased()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->TriggerReleased()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::GrabPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->GrabPressed()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::GrabReleased()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->GrabReleased()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::TrackpadPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->TrackpadPressed()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::TrackpadReleased()
{
	UE_LOG(LogTemp, Warning, TEXT("%s->TrackpadReleased()"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

// Axis mappings
void AControllerInterface::ThumbstickX(float axisValue, APawn* pawn, FVector direction)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("%s->ThumbstickX(%f, %s, %s)"),
			   *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"),
			   axisValue,
			   *FString(pawn->GetName()),
			   *FString(direction.ToString()));
	}
}

void AControllerInterface::ThumbstickY(float axisValue, APawn* pawn, FVector direction)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("%s->ThumbstickY(%f, %s, %s)"),
			   *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"),
			   axisValue,
			   *FString(pawn->GetName()),
			   *FString(direction.ToString()));
	}
}

void AControllerInterface::Squeeze(float axisValue)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("%s->Squeeze(%f)"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"), axisValue);
	}
}

void AControllerInterface::TriggerAxis(float axisValue)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("%s->TriggerAxis(%f)"), *FString(MotionController->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"), axisValue);
	}
}
