// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include <GameFramework/Character.h>

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//makes the camera always be able to see the player
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent); //root component = the first component in the hierarchy of the components (in this case the capsule component )

	//sets camera
    CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	//rotate character towards the movement direction
	GetCharacterMovement()->bOrientRotationToMovement = true;

	bUseControllerRotationYaw = false;

	//sets the initial value to jump to false
	isJumping = false;

	//sets the initial value of spawned to false
	Spawned = false;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(isJumping)
	{
		Jump();
	}

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind character movement
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward); //TBaseDelegate -> passing a function
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);

	//bind camera movement
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput); //yaw-> horizontalRotation / pitch -> verticalRotation
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	//bind to fire particles
	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &AMyCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("PrimaryAttack", IE_Released, this, &AMyCharacter::PrimaryAttack);


	//bind to pressed and released of jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::CheckJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::CheckJump);

}



//Control the characters movements in forward vector
void AMyCharacter::MoveForward(float value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;

	AddMovementInput(ControlRot.Vector(), value);
}

//Control the characters movements in sideways vector
void AMyCharacter::MoveRight(float value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	/*
	 * X = Forward (Red)
	 * Y = Right(Green)
	 * Z = Up (Blue)
	 */
	FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);

	AddMovementInput(RightVector, value);
}


//shoot particles
void AMyCharacter::PrimaryAttack()
{
	CheckSpawn();

	if (Spawned) {

		GetWorld()->GetTimerManager().SetTimer(TriggerAttackTimerHandle, this, &AMyCharacter::TriggerAttack, .2f, false); // delays the spawn so that the animation can play
	}
}


void AMyCharacter::TriggerAttack()

{
		FVector handLocation = GetMesh()->GetSocketLocation("Muzzle_01");

		//determine the spawn location as the character's hand
		FTransform SpawnTM = FTransform(GetControlRotation(), handLocation);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		//spawn
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
}

void AMyCharacter::CheckSpawn()
{
	if(Spawned)
	{
		Spawned = false;
	} else
	{
		Spawned = true;
	}
}

void AMyCharacter::CheckJump()
{
	if(isJumping)
	{
		isJumping = false;
	} else
	{
		isJumping = true;
	}
}
