// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_FailPuzzle.h"
#include "PuzzleAIController.h"

UBTTask_FailPuzzle::UBTTask_FailPuzzle()
{
	NodeName = TEXT("Fail puzzle");
}

EBTNodeResult::Type UBTTask_FailPuzzle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	Controller->FailPuzzle();

	return EBTNodeResult::Succeeded;
}
