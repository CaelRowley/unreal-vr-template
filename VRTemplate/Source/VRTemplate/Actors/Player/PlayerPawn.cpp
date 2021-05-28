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
	
	LeftController2 = GetWorld()->SpawnActor<AControllerInterface>(ControllerInterface);
	if (LeftController2 != nullptr)
	{
		LeftController2->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	//	LeftController2->Initialize(EControllerHand::Left);
		LeftController2->SetOwner(this);
	}
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
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Pressed, this, &APlayerPawn::TriggerLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Released, this, &APlayerPawn::TriggerLeftReleased);

}

