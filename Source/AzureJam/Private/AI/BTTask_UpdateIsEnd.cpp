// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_UpdateIsEnd.h"
#include "PuzzleAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_UpdateIsEnd::UBTTask_UpdateIsEnd()
{
	NodeName = TEXT("Update IsEndNode");
}

EBTNodeResult::Type UBTTask_UpdateIsEnd::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), Controller->IsEndNode());

	return EBTNodeResult::Succeeded;
}
