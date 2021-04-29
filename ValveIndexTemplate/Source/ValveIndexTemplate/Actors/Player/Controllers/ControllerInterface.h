// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerInterface.generated.h"

UCLASS()
class VALVEINDEXTEMPLATE_API AControllerInterface : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControllerInterface();

	// Axis mappings
	virtual void ThumbstickX(float axisValue, APawn* pawn, FVector direction);
	virtual void ThumbstickY(float axisValue, APawn* pawn, FVector direction);

};
