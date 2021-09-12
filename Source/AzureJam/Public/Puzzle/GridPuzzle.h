#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleNode.h"
#include "GridPuzzle.generated.h"



UCLASS()
class AZUREJAM_API AGridPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestStartDelegate);
	FTestStartDelegate& TestStartDelegate();

	AGridPuzzle();

	FVector GetNextNodePointLocation(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex);
	APuzzleNode* GetNextNode(const int32 InCoordX, const int32 InCoordY, const int32 InNodePointIndex) const;
	int32 GetNextNodePointIndex(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex);

	bool HasVisitedNode(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex);
	void OnNodePointVisit(int32 CurrentX, int32 CurrentY, int32 CurrentIndex);

	bool IsEndNode(int32 CurrentX, int32 CurrentY);

	APuzzleNode* GetStartNode();

	FTestStartDelegate OnTestStart;

	void StartTest();
	void CompletePuzzle();
	void FailPuzzle();
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SetNodeGrid(TArray<APuzzleNode*> InNodes);

	UPROPERTY(EditAnywhere)
	TArray<APuzzleNode*> Nodes;

	UPROPERTY(EditAnywhere)
	APuzzleNode* StartNode;

	UPROPERTY(EditAnywhere)
	APuzzleNode* EndNode;

	UPROPERTY(EditAnywhere)
	class AStartTestButton* StartButton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 GridSizeX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 GridSizeY;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DistanceBetweenNodes;

	UFUNCTION(BlueprintCallable)
	void TestNodeDirection();
	
private:
	APuzzleNode* GetNodeAtCoordinate(int32 InCoordX, int32 InCoordY) const;

	TArray<TArray<APuzzleNode*>> NodeGrid;

	TMap<FVector2D, int32> DirToIndexLookup;

	int32 GetNodePointIndexFromDirection(FVector2D Dir);

	
};
