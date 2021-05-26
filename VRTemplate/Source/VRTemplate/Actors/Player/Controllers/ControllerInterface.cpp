// Fill out your copyright notice in the Description page of Project Settings.


#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"

// Sets default values
AControllerInterface::AControllerInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControllerInterface::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControllerInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

