// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ValveIndexTemplate/Actors/Player/Controllers/ControllerInterface.h"
#include "ControllerHand.generated.h"

/**
 * 
 */
UCLASS()
class VALVEINDEXTEMPLATE_API AControllerHand : public AControllerInterface
{
	GENERATED_BODY()

public:
	void ThumbstickX(float axisValue, APawn* pawn, FVector direction) override;
	void ThumbstickY(float axisValue, APawn* pawn, FVector direction) override;
};
