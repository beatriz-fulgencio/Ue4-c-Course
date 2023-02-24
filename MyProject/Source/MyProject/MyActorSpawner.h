// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "MyBaseActor.h"
#include <Components/TextRenderComponent.h>

#include "MyActorSpawner.generated.h"

UCLASS()
class MYPROJECT_API AMyActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorSpawner();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

	//Called when actor stops playing
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Spawn Actor of the specified class
	UFUNCTION(BlueprintCallable)
	bool SpawnActor(TSubclassOf<AMyBaseActor> ActorClassToSpawn);

	//will schedule the actor spawn
	void ScheduleActorSpawn();

	UFUNCTION(BlueprintCallable)
	void UpdateTimer();
private:
	UFUNCTION()
		void SpawnActorReScheduled();

protected:
	//BOx to spawn actors
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* SpawnBox;

	//Actor class to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMyBaseActor> ActorClassToSpawn1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMyBaseActor> ActorClassToSpawn2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldSpawn = true;

	//Time Parameters -----

	//Average time between spawns
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AvgSpawnTime = 5.f;

	//Rando, offset of spawn time
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomSpawnTimeOffset = 1.f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float timeRemaning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextRenderComponent* textTimer;

	//Helper for timing
	FTimerHandle SpawnTimerHandle;

	UFUNCTION()
	void DestroyTheRest();
};
