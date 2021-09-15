// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_GetNextLocation.generated.h"

/**
 * 
 */
UCLASS()
class AZUREJAM_API UBTTask_GetNextLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTask_GetNextLocation();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
