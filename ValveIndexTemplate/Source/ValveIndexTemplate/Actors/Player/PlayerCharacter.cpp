// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"

#include "HeadMountedDisplayTypes.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("GetHMDDeviceName String: %s"), *FString(UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName().ToString()));
	UE_LOG(LogTemp, Warning, TEXT("GetHMDDeviceName Number: %i"), UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName().GetNumber());

	switch (UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName().GetNumber())
	{
		case 0:
			UE_LOG(LogTemp, Warning, TEXT("HMDDevice SteamVR found"));
			UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
			break;

		default:
			UE_LOG(LogTemp, Warning, TEXT("HMDDevice not found, using default"));
			UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
			break;
	}

	// Offsets the players capsule collider
	VRRoot->AddWorldOffset(FVector(0, 0, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

	UE_LOG(LogTemp, Warning, TEXT("Device Setup Complete"));

	LeftController = GetWorld()->SpawnActor<AControllerInterface>(ControllerInterface);
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

	// Axis mappings
	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickX"), this, &APlayerCharacter::LeftThumbstickX);
	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickY"), this, &APlayerCharacter::LeftThumbstickY);
}
