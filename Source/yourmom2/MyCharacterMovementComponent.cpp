// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterMovementComponent.h"

CollidingMovement::CollidingMovement()
{

}
void CollidingMovement::BeginPlay() override
{
	SetMovementMode(MOVE_Flying);
}