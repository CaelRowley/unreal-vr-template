// Fill out your copyright notice in the Description page of Project Settings.

#include "VRTemplate/Actors/Player/PlayerCharacter.h"

#include "Components/CapsuleComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VRROrigin"));
	VRROrigin->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRROrigin);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	ScaledCapsuleHalfHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	VRROrigin->AddWorldOffset(FVector(0, 0, -ScaledCapsuleHalfHeight));
	
	LeftController->PairControllers(RightController);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewCameraOffset = Camera->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	AddActorWorldOffset(NewCameraOffset);
	VRROrigin->AddWorldOffset(-NewCameraOffset);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Action mappings
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Pressed, this, &APlayerCharacter::GrabLeftPressed);
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Released, this, &APlayerCharacter::GrabLeftReleased);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Pressed, this, &APlayerCharacter::GrabRightPressed);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Released, this, &APlayerCharacter::GrabRightReleased);

	PlayerInputComponent->BindAction(TEXT("TeleportLeft"), IE_Pressed, this, &APlayerCharacter::TeleportLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TeleportLeft"), IE_Released, this, &APlayerCharacter::TeleportLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TeleportRight"), IE_Pressed, this, &APlayerCharacter::TeleportRightPressed);
	PlayerInputComponent->BindAction(TEXT("TeleportRight"), IE_Released, this, &APlayerCharacter::TeleportRightReleased);

	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Pressed, this, &APlayerCharacter::TriggerLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Released, this, &APlayerCharacter::TriggerLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Pressed, this, &APlayerCharacter::TriggerRightPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Released, this, &APlayerCharacter::TriggerRightReleased);
}

