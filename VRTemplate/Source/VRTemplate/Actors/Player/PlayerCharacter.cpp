// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Camera/CameraComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickX"), this, &APlayerCharacter::LeftThumbstickX);
	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickY"), this, &APlayerCharacter::LeftThumbstickY);
}

void APlayerCharacter::LeftThumbstickX(float axisValue)
{
	this->AddMovementInput(axisValue * Camera->GetRightVector());
}

void APlayerCharacter::LeftThumbstickY(float axisValue)
{
	this->AddMovementInput(axisValue * Camera->GetForwardVector());
}
