// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_GetNextNode.h"
#include "PuzzleAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Puzzle/PuzzleNodePoint.h"

UBTTask_GetNextNode::UBTTask_GetNextNode()
{
	NodeName = TEXT("Get Next Node");
}

EBTNodeResult::Type UBTTask_GetNextNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	APuzzleNode* NextNode = Controller->GetNextNode();
	if (NextNode)
	{
		UE_LOG(LogTemp, Warning, TEXT("BTTask_GetNextNode: ExecuteTask: Next location: %s"), *NextNode->GetName());
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), NextNode);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("BTTask_GetNextNode: ExecuteTask: Next location is not valid"));
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
		return EBTNodeResult::Failed;
	}
	

	return EBTNodeResult::Succeeded;
}
