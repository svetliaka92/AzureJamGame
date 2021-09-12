// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_UpdateVisited.h"
#include "PuzzleAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_UpdateVisited::UBTTask_UpdateVisited()
{
	NodeName = TEXT("Update IsNodeVisited");
}

EBTNodeResult::Type UBTTask_UpdateVisited::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), Controller->IsNodeVisited());

	return EBTNodeResult::Succeeded;
}
