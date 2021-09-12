// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "StartTestButton.generated.h"

UCLASS()
class AZUREJAM_API AStartTestButton : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* Collider;

	AStartTestButton();

	void LockButton(bool bFlag);

	// interact
	void Interact();

protected:
	virtual void BeginPlay() override;

	bool bInteractable = true;

	UPROPERTY(EditAnywhere)
	class AGridPuzzle* Puzzle;
};
