// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_GetNextLocation.h"
#include "PuzzleAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Puzzle/PuzzleNodePoint.h"

UBTTask_GetNextLocation::UBTTask_GetNextLocation()
{
	NodeName = TEXT("Get Next Node");
}

EBTNodeResult::Type UBTTask_GetNextLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	APuzzleNodePoint* NextLocation = Controller->GetNextLocation();
	if (NextLocation)
	{
		UE_LOG(LogTemp, Warning, TEXT("BTTask_GetNextNode: ExecuteTask: Next location: %s"), *NextLocation->GetName());
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), NextLocation);
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
