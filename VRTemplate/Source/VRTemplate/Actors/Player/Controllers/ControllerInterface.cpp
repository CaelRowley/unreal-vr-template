// Fill out your copyright notice in the Description page of Project Settings.


#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//MotionController2 = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController2"));
	//MotionController2->SetShowDeviceModel(true);
	//SetRootComponent(MotionController2);


}

void AControllerInterface::Initialize(EControllerHand TrackingSource)
{
	//MotionController2->SetTrackingSource(TrackingSource);
}

// Action mappings
void AControllerInterface::TriggerPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("TriggerPressed()"));
	//UE_LOG(LogTemp, Warning, TEXT("%s->TriggerPressed()"), *FString(MotionController2->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}

void AControllerInterface::TriggerReleased()
{
	UE_LOG(LogTemp, Warning, TEXT("TriggerPressed()"));
	//UE_LOG(LogTemp, Warning, TEXT("%s->TriggerReleased()"), *FString(MotionController2->GetTrackingSource() == EControllerHand::Right ? "RightController" : "LeftController"));
}
