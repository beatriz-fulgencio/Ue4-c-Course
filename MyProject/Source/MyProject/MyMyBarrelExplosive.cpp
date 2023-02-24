// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMyBarrelExplosive.h"
#include <PhysicsEngine/RadialForceComponent.h>
#include "Kismet/GameplayStatics.h"



AMyMyBarrelExplosive::AMyMyBarrelExplosive()
{
	PrimaryActorTick.bCanEverTick = true;


	ExplosiveStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("ExplosiveStaticMesh");
	ExplosiveStaticMesh->SetupAttachment(RootComponent);


	ExplosiveStaticMesh->SetSimulatePhysics(true);
	//ExplosiveStaticMesh->OnComponentHit.AddDynamic(this, &AMyMyBarrelExplosive::OnCompHit);
	ExplosiveStaticMesh->SetCollisionObjectType(ECC_PhysicsBody);

}

// void AMyMyBarrelExplosive::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
// {
// 	this->Destroy(true);
// }
