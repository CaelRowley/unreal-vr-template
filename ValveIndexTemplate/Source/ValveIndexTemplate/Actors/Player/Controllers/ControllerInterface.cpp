// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Axis mappings
void AControllerInterface::ThumbstickX(float axisValue, APawn* pawn, FVector direction)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("ThumbstickX(%f, %s, %s)"), axisValue, *FString(pawn->GetName()), *FString(direction.ToString()));
	}
}

void AControllerInterface::ThumbstickY(float axisValue, APawn* pawn, FVector direction)
{
	if (axisValue > 0.1 || axisValue < -0.1) {
		UE_LOG(LogTemp, Warning, TEXT("ThumbstickY(%f, %s, %s)"), axisValue, *FString(pawn->GetName()), *FString(direction.ToString()));
	}
}