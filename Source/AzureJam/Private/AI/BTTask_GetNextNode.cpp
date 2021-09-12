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

	Controller->UpdateNextLocation();
	APuzzleNodePoint* NextLocation = Controller->GetNextLocation();
	if (NextLocation)
	{
		UE_LOG(LogTemp, Warning, TEXT("Next location: %s"), *NextLocation->GetName());
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), NextLocation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Next location is not valid"));
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
	

	return EBTNodeResult::Succeeded;
}
