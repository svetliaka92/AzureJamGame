// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MarkNodeVisited.generated.h"

/**
 * 
 */
UCLASS()
class AZUREJAM_API UBTTask_MarkNodeVisited : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_MarkNodeVisited();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
