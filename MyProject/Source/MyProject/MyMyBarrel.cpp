// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMyBarrel.h"


AMyMyBarrel::AMyMyBarrel()
{
	PrimaryActorTick.bCanEverTick = true;


	ExplosiveStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("ExplosiveStaticMesh");
	ExplosiveStaticMesh->SetupAttachment(RootComponent);

	ExplosiveStaticMesh->SetSimulatePhysics(true);

	//ExplosiveStaticMesh->OnComponentHit.AddDynamic(this, &AMyMyBarrel::OnCompHit);
	ExplosiveStaticMesh->SetCollisionObjectType(ECC_PhysicsBody);
}


