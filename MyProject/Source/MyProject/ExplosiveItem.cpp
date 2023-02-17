// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveItem.h"
#include <PhysicsEngine/RadialForceComponent.h>

// Sets default values
AExplosiveItem::AExplosiveItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ExplosiveStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("ExplosiveStaticMesh");
	ExplosiveStaticMesh->SetupAttachment(RootComponent);

	ForceComp = CreateDefaultSubobject<URadialForceComponent>("ForceComp");
	ForceComp->SetupAttachment(ExplosiveStaticMesh);
;}

// Called when the game starts or when spawned
void AExplosiveItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExplosiveItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

