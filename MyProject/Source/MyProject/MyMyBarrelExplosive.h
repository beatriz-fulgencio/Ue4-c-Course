// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBaseActor.h"
#include "MyMyBarrelExplosive.generated.h"

/**
 * 
 */

class URadialForceComponent;


UCLASS()
class MYPROJECT_API AMyMyBarrelExplosive : public AMyBaseActor
{
	GENERATED_BODY()

public:
	AMyMyBarrelExplosive();

protected:
	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* ForceComp;

	UFUNCTION()
	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:

};
