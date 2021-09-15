// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Puzzle/GridPuzzle.h"
#include "PuzzleOrb.generated.h"

UCLASS()
class AZUREJAM_API APuzzleOrb : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APuzzleOrb();

	UPROPERTY(EditAnywhere)
	AGridPuzzle* Puzzle;
};
