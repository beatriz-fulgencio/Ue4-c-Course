// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBaseActor.h"
#include "MyMyBarrel.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyMyBarrel : public AMyBaseActor
{
	GENERATED_BODY()
	
public:
	AMyMyBarrel();

protected:
// 	UFUNCTION()
// 	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
