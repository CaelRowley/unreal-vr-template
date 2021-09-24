// Fill out your copyright notice in the Description page of Project Settings.


#include "VRTemplate/Actors/Player/PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
	LeftController->PairControllers(RightController);
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Action mappings
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Pressed, this, &APlayerPawn::GrabLeftPressed);
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Released, this, &APlayerPawn::GrabLeftReleased);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Pressed, this, &APlayerPawn::GrabRightPressed);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Released, this, &APlayerPawn::GrabRightReleased);

	PlayerInputComponent->BindAction(TEXT("TeleportLeft"), IE_Pressed, this, &APlayerPawn::TeleportLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TeleportLeft"), IE_Released, this, &APlayerPawn::TeleportLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TeleportRight"), IE_Pressed, this, &APlayerPawn::TeleportRightPressed);
	PlayerInputComponent->BindAction(TEXT("TeleportRight"), IE_Released, this, &APlayerPawn::TeleportRightReleased);

	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Pressed, this, &APlayerPawn::TriggerLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Released, this, &APlayerPawn::TriggerLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Pressed, this, &APlayerPawn::TriggerRightPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Released, this, &APlayerPawn::TriggerRightReleased);
}

