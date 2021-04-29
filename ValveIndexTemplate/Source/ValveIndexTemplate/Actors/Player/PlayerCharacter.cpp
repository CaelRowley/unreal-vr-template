// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"

#include "HeadMountedDisplayTypes.h"
#include "InputCoreTypes.h"

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

	// Offsets the players capsule collider to get correct camera height
	VRRoot->AddWorldOffset(FVector(0, 0, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

	LeftController = GetWorld()->SpawnActor<AControllerInterface>(ControllerInterface);
	if (LeftController != nullptr)
	{
		LeftController->AttachToComponent(VRRoot, FAttachmentTransformRules::KeepRelativeTransform);
		LeftController->Initialize(EControllerHand::Left);
		LeftController->SetOwner(this);
	}

	RightController = GetWorld()->SpawnActor<AControllerInterface>(ControllerInterface);
	if (RightController != nullptr)
	{
		RightController->AttachToComponent(VRRoot, FAttachmentTransformRules::KeepRelativeTransform);
		RightController->Initialize(EControllerHand::Right);
		RightController->SetOwner(this);
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Adjust for camera offset relative to character location
	FVector NewCameraOffset = Camera->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	AddActorWorldOffset(NewCameraOffset);
	VRRoot->AddWorldOffset(-NewCameraOffset);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Action mappings
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Pressed, this, &APlayerCharacter::TriggerLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerLeft"), IE_Released, this, &APlayerCharacter::TriggerLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Pressed, this, &APlayerCharacter::TriggerRightPressed);
	PlayerInputComponent->BindAction(TEXT("TriggerRight"), IE_Released, this, &APlayerCharacter::TriggerRightReleased);
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Pressed, this, &APlayerCharacter::GrabLeftPressed);
	PlayerInputComponent->BindAction(TEXT("GrabLeft"), IE_Released, this, &APlayerCharacter::GrabLeftReleased);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Pressed, this, &APlayerCharacter::GrabRightPressed);
	PlayerInputComponent->BindAction(TEXT("GrabRight"), IE_Released, this, &APlayerCharacter::GrabRightReleased);
	PlayerInputComponent->BindAction(TEXT("TrackpadLeft"), IE_Pressed, this, &APlayerCharacter::TrackpadLeftPressed);
	PlayerInputComponent->BindAction(TEXT("TrackpadLeft"), IE_Released, this, &APlayerCharacter::TrackpadLeftReleased);
	PlayerInputComponent->BindAction(TEXT("TrackpadRight"), IE_Pressed, this, &APlayerCharacter::TrackpadRightPressed);
	PlayerInputComponent->BindAction(TEXT("TrackpadRight"), IE_Released, this, &APlayerCharacter::TrackpadRightReleased);

	// Axis mappings
	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickX"), this, &APlayerCharacter::LeftThumbstickX);
	PlayerInputComponent->BindAxis(TEXT("LeftThumbstickY"), this, &APlayerCharacter::LeftThumbstickY);
	PlayerInputComponent->BindAxis(TEXT("RightThumbstickX"), this, &APlayerCharacter::RightThumbstickX);
	PlayerInputComponent->BindAxis(TEXT("RightThumbstickY"), this, &APlayerCharacter::RightThumbstickY);
	PlayerInputComponent->BindAxis(TEXT("SqueezeLeft"), this, &APlayerCharacter::SqueezeLeft);
	PlayerInputComponent->BindAxis(TEXT("SqueezeRight"), this, &APlayerCharacter::SqueezeRight);
	PlayerInputComponent->BindAxis(TEXT("TriggerLeftAxis"), this, &APlayerCharacter::TriggerLeftAxis);
	PlayerInputComponent->BindAxis(TEXT("TriggerRightAxis"), this, &APlayerCharacter::TriggerRightAxis);
}
