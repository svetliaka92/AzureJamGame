// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_UpdateIsEnd.generated.h"

/**
 * 
 */
UCLASS()
class AZUREJAM_API UBTTask_UpdateIsEnd : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTask_UpdateIsEnd();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
