// Fill out your copyright notice in the Description page of Project Settings.


#include "MovePlatform.h"

// Sets default values
AMovePlatform::AMovePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovePlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move Platform FOrwards
		//Get Current Location
	FVector CurrentLocation = GetActorLocation();
		//Add vector to that location
	CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime) ;
		// set the location
	SetActorLocation(CurrentLocation);
	//Send platform back if gone too far
		// Check how far we've moved
		float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);
		// Reverse direction of motion if gone too far
		 
		if (DistanceMoved > MovedDistance)
		{

			FVector MoveDirection = PlatformVelocity.GetSafeNormal();
			StartLocation = StartLocation + MoveDirection * MovedDistance;
			SetActorLocation(StartLocation);
			PlatformVelocity = -PlatformVelocity;
		}

}

