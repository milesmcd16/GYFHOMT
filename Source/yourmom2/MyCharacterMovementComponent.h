// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class YOURMOM2_API CollidingMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	CollidingMovement();

	
protected:
	virtual void BeginPlay() override;
};
