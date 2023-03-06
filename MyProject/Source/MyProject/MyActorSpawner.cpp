 // Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorSpawner.h"

#include <stdexcept>

#include "Kismet/GameplayStatics.h"

 // Sets default values
AMyActorSpawner::AMyActorSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup members
	SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnBox"));
	textTimer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextTimer"));

	timer = 120;

}


// Called when the game starts or when spawned
void AMyActorSpawner::BeginPlay()
{
	Super::BeginPlay();

	//Schedule first Spawn
	if (ShouldSpawn)
	{
		ScheduleActorSpawn();
	}
}

void AMyActorSpawner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//remove all timers 
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


bool AMyActorSpawner::SpawnActor(TSubclassOf<AMyBaseActor> ActorClassToSpawn)
{
	bool Spawned = false;
	if (ActorClassToSpawn)
	{
		//calculate the extends of the box
		FBoxSphereBounds BoxBounds = SpawnBox->CalcBounds(GetActorTransform());

		//Compute Randowm position within the box bounds
		FVector SpawnLocation = BoxBounds.Origin;
		SpawnLocation.X += -BoxBounds.BoxExtent.X + (2 * BoxBounds.BoxExtent.X * FMath::FRand());
		SpawnLocation.Y += -BoxBounds.BoxExtent.Y + (2 * BoxBounds.BoxExtent.Y * FMath::FRand());
		SpawnLocation.Z += -BoxBounds.BoxExtent.Z + (2 * BoxBounds.BoxExtent.Z * FMath::FRand());

		//Spawn the Actor
		Spawned = GetWorld()->SpawnActor(ActorClassToSpawn, &SpawnLocation) != nullptr;

	}
	return Spawned;
}

void AMyActorSpawner::ScheduleActorSpawn()
{
	//1. Compute time offset to spawn
	float DeltaToNextSpawn = AvgSpawnTime + (-RandomSpawnTimeOffset + 2 * RandomSpawnTimeOffset * FMath::FRand());

	//2. Schedule Spawning
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AMyActorSpawner::SpawnActorReScheduled, DeltaToNextSpawn, false);
}

void AMyActorSpawner::UpdateTimer()
{
	 float timePassed = UGameplayStatics::GetTimeSeconds(this);

	  timeRemaning = timer - timePassed;

	 float time = timeRemaning / 60;
	 int min = static_cast<int>(time);
	 int sec = static_cast<int>(0.5 + (time - min) * 60);

	 textTimer->SetText(FString::FromInt(min) + ":" + FString::FromInt(sec));


	if(timeRemaning <= 0)
	{
		ShouldSpawn = false;
		DestroyTheRest();
	}
	 
}

void AMyActorSpawner::SpawnActorReScheduled()
{
	int choice = FMath::RandRange(0, 1);

	switch (choice)
	{
	case 0:
		SpawnActor(ActorClassToSpawn1);
	case 1:
		SpawnActor(ActorClassToSpawn2);
	}
	//Spawn and Reschedule
	if (ShouldSpawn)
	{
		ScheduleActorSpawn();
	}
}

void AMyActorSpawner::DestroyTheRest()
{
	ShouldSpawn = false;
	TArray<AActor*> BarrelsLefting;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ActorClassToSpawn1,BarrelsLefting);

	for (AActor* barrel : BarrelsLefting)
	{
		barrel->Destroy();
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ActorClassToSpawn2, BarrelsLefting);

	for (AActor* barrel : BarrelsLefting)
	{
		barrel->Destroy();
	}

	textTimer->SetText("Seu tempo acabou!");
}

// Called every frame
void AMyActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateTimer();

}

