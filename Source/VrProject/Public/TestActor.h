// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class VRPROJECT_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float velocity_;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		static float DelayOfSound(const float Distance);

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		void SetMyVelocity(const float VElocity);

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		float Delay(const float Distance) const;


};
