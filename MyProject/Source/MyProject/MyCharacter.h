// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//includes

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"


//forward declarations
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()


protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Movement Functions
	void MoveForward(float value);
	void MoveRight(float value);

	//Fire Particles
	void PrimaryAttack();

	UPROPERTY(VisibleAnywhere)
		bool isJumping;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool Spawned;

	UFUNCTION()
	void TriggerAttack();


	FTimerHandle TriggerAttackTimerHandle;

	void CheckSpawn();

	//checks is the player is jumping
	void CheckJump();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

};
