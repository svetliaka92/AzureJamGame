// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_UpdateIsTesting.generated.h"

/**
 * 
 */
UCLASS()
class AZUREJAM_API UBTService_UpdateIsTesting : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTService_UpdateIsTesting();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
