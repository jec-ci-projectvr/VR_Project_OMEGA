// Fill out your copyright notice in the Description page of Project Settings.


#include "VrClassBase.h"

// Sets default values
AVrClassBase::AVrClassBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVrClassBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVrClassBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

