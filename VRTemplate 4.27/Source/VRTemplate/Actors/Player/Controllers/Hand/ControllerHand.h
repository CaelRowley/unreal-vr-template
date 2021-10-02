// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"
#include "ControllerHand.generated.h"

/**
 * 
 */
UCLASS()
class VRTEMPLATE_API AControllerHand : public AControllerInterface
{
	GENERATED_BODY()

public: 
	// Action mappings
	void GrabPressed_Implementation() override;
	void GrabReleased_Implementation() override;

	void TeleportPressed_Implementation() override;
	void TeleportReleased_Implementation() override;

	void TriggerPressed_Implementation() override;
	void TriggerReleased_Implementation() override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Callbacks
	UFUNCTION()
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	// Helpers
	bool CanClimb() const;

	//  State
	bool bCanClimb = false;
};

