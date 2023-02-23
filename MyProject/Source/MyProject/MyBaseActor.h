// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBaseActor.generated.h"


class UStaticMeshComponent;


UCLASS()
class MYPROJECT_API AMyBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ExplosiveStaticMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
