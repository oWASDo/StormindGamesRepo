// Fill out your copyright notice in the Description page of Project Settings.


#include "UselessActor.h"

// Sets default values
AUselessActor::AUselessActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUselessActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUselessActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AUselessActor::DoStuffs_Implementation()
{
	return true;
}

