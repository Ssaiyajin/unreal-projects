// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);

	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{


		if (ShouldPlatformReturn())
		{
			FVector MoveDirection = PlatformVelocity.GetSafeNormal();
			StartLocation = StartLocation + MoveDirection * MovedDistance;
			SetActorLocation(StartLocation);
			PlatformVelocity = -PlatformVelocity;
			
		}
		else
		{
		// Get current Location
		FVector CurrentLocation = GetActorLocation();
		// Add Vector to the Location
		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
		// Set the Location
		SetActorLocation(CurrentLocation);
		}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	FRotator CurrentRotation = GetActorRotation();
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingPlatform::ShouldPlatformReturn() const
{
	// Check how far we've moved

	return GetDistanceMoved() > MovedDistance;
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}