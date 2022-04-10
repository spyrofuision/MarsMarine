// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Alien.h"

// Sets default values
AC_Alien::AC_Alien()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Alien::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Alien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Alien::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

