// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_MarkNodeVisited.h"
#include "PuzzleAIController.h"

UBTTask_MarkNodeVisited::UBTTask_MarkNodeVisited()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_MarkNodeVisited::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	// get blackboard key for current node
	// tell the AI controller to tell the puzzle to mark the puzzle node point as visited

	return EBTNodeResult::Succeeded;
}
