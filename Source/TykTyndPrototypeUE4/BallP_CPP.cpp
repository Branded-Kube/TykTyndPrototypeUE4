// Fill out your copyright notice in the Description page of Project Settings.


#include "BallP_CPP.h"

// Sets default values
ABallP_CPP::ABallP_CPP()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABallP_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallP_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABallP_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

