// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Puzzle/PuzzleNode.h"
#include "StartTestButton.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerController = Controller;
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (PlayerInputComponent)
	{
		PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &APlayerCharacter::CheckForTarget);

		PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerCharacter::MoveForward);
		PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
		PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &APlayerCharacter::LookUpRate);

		PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerCharacter::MoveRight);
		PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
		PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &APlayerCharacter::LookRightRate);
	}
}

void APlayerCharacter::CheckForTarget()
{
	// raycast to check for puzzle node
	// if object is hit try to cast to puzzle node
	// if success
		// send the hit component to the puzzle node for processing
	UE_LOG(LogTemp, Warning, TEXT("Firing mouse button."));

	FHitResult HitInfo;
	FVector Location;
	FRotator Rotation;

	PlayerController->GetPlayerViewPoint(Location, Rotation);
	FVector End = Location + Rotation.Vector() * TargetRange;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	if (GetWorld()->LineTraceSingleByChannel(HitInfo, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params))
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *HitInfo.GetActor()->GetName());
		APuzzleNode* Node = Cast<APuzzleNode>(HitInfo.GetActor());
		if (Node)
		{
			Node->OnComponentHit(HitInfo.GetComponent());
		}
		else
		{
			AStartTestButton* Button = Cast<AStartTestButton>(HitInfo.GetActor());
			if (Button)
			{
				Button->Interact();
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Could not cast actor."));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Did not hit anything."));
	}
}

void APlayerCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void APlayerCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void APlayerCharacter::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRateUp * GetWorld()->DeltaTimeSeconds);
}

void APlayerCharacter::LookRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * RotationRateRight * GetWorld()->DeltaTimeSeconds);
}
