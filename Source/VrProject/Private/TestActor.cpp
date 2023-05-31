// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

auto ATestActor::DelayOfSound(const float Distance) -> float
{
	static const float SoundVelocity = 340.29f;
	return Distance / SoundVelocity;
}

auto ATestActor::SetMyVelocity(const float Velocity) -> void
{
	velocity_ = Velocity;
}

auto ATestActor::Delay(const float Distance) const -> float
{
	if (velocity_ <= 0.0f) {
		return 0.0f;
	}
	else {
		return Distance / velocity_;
	}
}
