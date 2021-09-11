#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "PuzzleNodePoint.h"
#include "NodeRedirector.h"
#include "EDirection.h"
#include "PuzzleNode.generated.h"

UCLASS()
class AZUREJAM_API APuzzleNode : public AActor
{
	GENERATED_BODY()
	
public:	
	APuzzleNode();

	UPROPERTY(EditAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BottomCollider;

	UPROPERTY(EditAnywhere)
	UBoxComponent* TopCollider;

	UPROPERTY(EditAnywhere)
	bool bHasTopCollider;

	UPROPERTY(EditAnywhere)
	TArray<EDirection> BottomDirections;

	UPROPERTY(EditAnywhere)
	TArray<EDirection> TopDirections;

	void SetCoordinates(int32 InCoordX, int32 InCoordY);
	FVector2D GetCoordinates() { return FVector2D(CoordX, CoordY); }

	void OnComponentHit(UPrimitiveComponent* HitComponent);

	APuzzleNodePoint* GetPointAtIndex(int32 Index);

	EDirection GetBottomDirectionAtIndex(int32 Index);
	EDirection GetTopDirectionAtIndex(int32 Index);

	void RotateBottomDirections();
	void RotateTopDirections();

	bool bActive = true;
	bool bInteractable = true;

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void OnCompClicked(UPrimitiveComponent* Comp);

	UFUNCTION(BlueprintCallable)
	void SetPoints(TArray<APuzzleNodePoint*> InPoints);

	int32 CoordX = 0;
	int32 CoordY = 0;

private:
	// array of points
	UPROPERTY()
	TArray<APuzzleNodePoint*> Points;
};
