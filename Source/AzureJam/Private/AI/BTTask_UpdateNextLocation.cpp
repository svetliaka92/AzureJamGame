// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_UpdateNextLocation.h"
#include "PuzzleAIController.h"

UBTTask_UpdateNextLocation::UBTTask_UpdateNextLocation()
{
	NodeName = TEXT("Update controller next location");
}

EBTNodeResult::Type UBTTask_UpdateNextLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (!IsValid(Controller))
	{
		return EBTNodeResult::Failed;
	}

	Controller->UpdateNextLocation();

	return EBTNodeResult::Succeeded;
}
