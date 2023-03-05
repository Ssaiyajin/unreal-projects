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
}

// Called every frame
void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move Platform FOrwards
		//Get Current Location
	FVector CurrentLocation = GetActorLocation();
		//Add vector to that location
	CurrentLocation.X = CurrentLocation.X + 1 ;
		// set the location
	SetActorLocation(CurrentLocation);
	//Send platform back if gone too far
		// Check how far we've moved
		// Reverse direction of motion if gone too far

}

