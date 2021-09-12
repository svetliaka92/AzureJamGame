// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_CompletePuzzle.h"
#include "PuzzleAIController.h"

UBTTask_CompletePuzzle::UBTTask_CompletePuzzle()
{
	NodeName = TEXT("Complete puzzle");
}

EBTNodeResult::Type UBTTask_CompletePuzzle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	// get blackboard key for current node
	// tell the AI controller to tell the puzzle to mark the puzzle node point as visited
	Controller->CompletePuzzle();

	return EBTNodeResult::Succeeded;
}
