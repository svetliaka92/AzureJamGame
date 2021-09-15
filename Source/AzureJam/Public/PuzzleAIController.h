// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Puzzle/GridPuzzle.h"
#include "Puzzle/PuzzleNode.h"
#include "PuzzleOrb.h"
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

	UFUNCTION()
	void TestPuzzleWithOrb();

	void VisitNode();
	bool IsNodeVisited();
	bool IsEndNode();
	bool IsTesting();
	void UpdateNextLocation();
	APuzzleNodePoint* GetNextLocation();
	bool HasNextNode();

	void CompletePuzzle();
	void FailPuzzle();

protected:
	virtual void BeginPlay() override;

private:
	bool bTesting;

	AGridPuzzle* Puzzle;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

	APuzzleOrb* Orb;

	APuzzleNode* CurrentNode;
	int32 CurrentNodePointIndex;

	APuzzleNode* NextNode;
	int32 NextNodePointIndex;
};
