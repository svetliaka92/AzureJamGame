// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_UpdateIsTesting.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PuzzleAIController.h"

UBTService_UpdateIsTesting::UBTService_UpdateIsTesting()
{
	NodeName = "Update IsTesting";
}

void UBTService_UpdateIsTesting::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	if (OwnerComp.GetAIOwner() == nullptr)
		return;

	APuzzleAIController* Controller = Cast<APuzzleAIController>(OwnerComp.GetAIOwner());
	if (IsValid(Controller))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), Controller->IsTesting());
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}
