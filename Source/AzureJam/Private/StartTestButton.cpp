// Fill out your copyright notice in the Description page of Project Settings.


#include "StartTestButton.h"
#include "Puzzle/GridPuzzle.h"

AStartTestButton::AStartTestButton()
{
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Node Mesh"));
	Mesh->SetupAttachment(RootComp);

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Bottom collider"));
	Collider->SetupAttachment(RootComp);
}

void AStartTestButton::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStartTestButton::Interact()
{
	if (!bInteractable)
	{
		return;
	}

	// do animation
	// at end of animation call on interaction done
	// on interaction done tell puzzle to start test
	if (Puzzle)
	{
		Puzzle->StartTest();
	}
}

void AStartTestButton::LockButton(bool bFlag)
{
	bInteractable = !bFlag;
}
