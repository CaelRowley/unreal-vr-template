// Fill out your copyright notice in the Description page of Project Settings.


#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Action mappings
void AControllerInterface::GrabPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("GrabPressed()"));
	//UE_LOG(LogTemp, Warning, TEXT("%s->GrabPressed()"), *FString(MotionController2->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::GrabReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("GrabReleased()"));
	//UE_LOG(LogTemp, Warning, TEXT("%s->GrabReleased()"), *FString(MotionController2->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}
