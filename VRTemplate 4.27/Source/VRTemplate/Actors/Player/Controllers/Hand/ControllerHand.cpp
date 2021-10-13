// Fill out your copyright notice in the Description page of Project Settings.

#include "VRTemplate/Actors/Player/PlayerCharacter.h"
#include "VRTemplate/Actors/Player/Controllers/Hand/ControllerHand.h"

#include "Math/Vector.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

// Called when the game starts or when spawned
void AControllerHand::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this, &AControllerHand::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AControllerHand::ActorEndOverlap);
}

// Called every frame
void AControllerHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsClimbing)
	{
		APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetAttachParentActor());		

		PlayerCharacter->AddActorWorldOffset(ClimbingStartLocation - ControllerLocation);
	}
}

// Helpers
bool AControllerHand::CanClimb() const
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);

	for (AActor* OverlappingActor : OverlappingActors) {
		if (OverlappingActor->ActorHasTag(TEXT("Climbable"))) {
			return true;
		}
	}

	return false;
}

// Callbacks
void AControllerHand::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	bool bNewCanClimb = CanClimb();

	if(!bCanClimb && bNewCanClimb) {
		UE_LOG(LogTemp, Warning, TEXT("Can Climb!"));
		APawn* Pawn = Cast<APawn>(GetAttachParentActor());

		if(Pawn != nullptr) {
			APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());
			if(Controller != nullptr) {
				EControllerHand ControllerHand = MotionControllerReference->MotionSource == FName("Left") ? EControllerHand::Left : EControllerHand::Right;
				Controller->PlayHapticEffect(HapticEffect, ControllerHand);
			}
		}
	}

	bCanClimb = bNewCanClimb;
}

void AControllerHand::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	bool bNewCanClimb = CanClimb();

	if(bCanClimb && !bNewCanClimb) {
		UE_LOG(LogTemp, Warning, TEXT("Can't Climb!"));
	}

	bCanClimb = bNewCanClimb;
}

// Action mappings
void AControllerHand::GrabPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::GrabPressed()"));

	if (!bCanClimb) return;

	if (!bIsClimbing)
	{
		bIsClimbing = true;
		
		ClimbingStartLocation = ControllerLocation;

		AControllerHand* OtherControllerHand = Cast<AControllerHand>(OtherController);
		OtherControllerHand->bIsClimbing = false;

		ACharacter* Character = Cast<ACharacter>(GetAttachParentActor());
		if (Character != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("AControllerHand::SetMovementMode(EMovementMode::MOVE_Flying)"));
			Character->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		}
	}
}

void AControllerHand::GrabReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::GrabReleased()"));

	if (bIsClimbing)
	{
		bIsClimbing = false;

		ACharacter* Character = Cast<ACharacter>(GetAttachParentActor());
		if (Character != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("AControllerHand::SetMovementMode(EMovementMode::MOVE_Falling)"));
			Character->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Falling);
		}
	}
}

void AControllerHand::TeleportPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::TeleportPressed()"));
}

void AControllerHand::TeleportReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::TeleportReleased()"));
}

void AControllerHand::TriggerPressed_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::TriggerPressed()"));
}

void AControllerHand::TriggerReleased_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("AControllerHand::TriggerReleased()"));
}
