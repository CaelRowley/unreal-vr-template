// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MotionControllerComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerInterface.generated.h"

UCLASS()
class VRTEMPLATE_API AControllerInterface : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AControllerInterface();

	// Action mappings
	virtual void TriggerPressed();
	virtual void TriggerReleased();

};
