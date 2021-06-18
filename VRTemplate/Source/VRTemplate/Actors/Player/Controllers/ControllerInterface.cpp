// Fill out your copyright notice in the Description page of Project Settings.


#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AControllerInterface::PairControllers(AControllerInterface* Controller)
{
	OtherController = Cast<AControllerInterface>(Controller);
	OtherController->OtherController = this;
}

// Action mappings
void AControllerInterface::GrabPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("GrabPressed()"));
}

void AControllerInterface::GrabReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("GrabReleased()"));
}

void AControllerInterface::TeleportPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("TeleportPressed()"));
}

void AControllerInterface::TeleportReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("TeleportReleased()"));
}
