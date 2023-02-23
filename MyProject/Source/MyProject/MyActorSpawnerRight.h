// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <list>

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
//#include "MyBaseActor.h"
#include "MyActorSpawnerRight.generated.h"

class AMyBaseActor;


UCLASS()
class MYPROJECT_API AMyActorSpawnerRight : public ATargetPoint
{
	GENERATED_BODY()
public:
	AMyActorSpawnerRight();
protected:

	virtual void BeginPlay() override;

	
public:
	UPROPERTY(VisibleAnywhere)
		AMyBaseActor* ItemsToSpawn[2];

	// Called every frame
	//virtual void Tick(float DeltaTime) override;
};