// Fill out your copyright notice in the Description page of Project Settings.

#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AControllerInterface::PairControllers(AControllerInterface *Controller)
{
	OtherController = Cast<AControllerInterface>(Controller);
	OtherController->OtherController = this;
}

void AControllerInterface::GetTeleporterDestination(FVector &Location, FRotator &Rotation)
{
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(Rotation, Location);
	Rotation = FRotator(0, 0, 0);
	Location = UKismetMathLibrary::Subtract_VectorVector(TeleporterDestination, UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(Location.X, Location.Y, 0), Rotation));
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