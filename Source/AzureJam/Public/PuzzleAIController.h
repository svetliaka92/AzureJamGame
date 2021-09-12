// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Puzzle/GridPuzzle.h"
#include "PuzzleAIController.generated.h"

/**
 * 
 */
UCLASS()
class AZUREJAM_API APuzzleAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetPuzzle(AGridPuzzle* InPuzzle);

	void 

private:
	AGridPuzzle* Puzzle;
};
