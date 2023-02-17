// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosiveItem.generated.h"

class UStaticMeshComponent;
class URadialForceComponent;

UCLASS()
class MYPROJECT_API AExplosiveItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveItem();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ExplosiveStaticMesh;


	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* ForceComp;



	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
