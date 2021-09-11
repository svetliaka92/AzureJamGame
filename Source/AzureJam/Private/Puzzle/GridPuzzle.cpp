#include "Puzzle/GridPuzzle.h"
#include "Puzzle/PuzzleNodePoint.h"

AGridPuzzle::AGridPuzzle()
{
	PrimaryActorTick.bCanEverTick = true;

	DirToIndexLookup.Add(FVector2D(1, 1), 0);
	DirToIndexLookup.Add(FVector2D(1, 0), 0);
	DirToIndexLookup.Add(FVector2D(1, -1), 0);
	DirToIndexLookup.Add(FVector2D(0, -1), 1);
	DirToIndexLookup.Add(FVector2D(-1, -1), 2);
	DirToIndexLookup.Add(FVector2D(-1, 0), 2);
	DirToIndexLookup.Add(FVector2D(-1, 1), 2);
	DirToIndexLookup.Add(FVector2D(0, 1), 3);
}

void AGridPuzzle::SetNodeGrid(TArray<APuzzleNode*> InNodes)
{
	// reorder the InNodex array into a 2D array
	for (int32 i = 0; i < GridSizeX; ++i)
	{
		NodeGrid.Add(TArray<APuzzleNode*>());
		for (int32 j = 0; j < GridSizeY; ++j)
		{
			NodeGrid[i].Add(InNodes[j + i * GridSizeY]);
			NodeGrid[i][j]->SetCoordinates(i, j);
		}
	}

	TestNodeDirection();
}

APuzzleNode* AGridPuzzle::GetNextNode(const int32 InCoordX, const int32 InCoordY, const int32 InNodePointIndex) const
{
	APuzzleNode* Node = GetNodeAtCoordinate(InCoordX, InCoordY);

	if (IsValid(Node))
	{
		APuzzleNodePoint* NodePoint = Node->GetPointAtIndex(InNodePointIndex);
		if (IsValid(NodePoint))
		{
			// get redirector directions from node point
			// 
		}
	}

	return nullptr;
}

APuzzleNode* AGridPuzzle::GetNodeAtCoordinate(int32 InCoordX, int32 InCoordY) const
{
	if (InCoordX < 0 || InCoordX >= GridSizeX)
	{
		return nullptr;
	}

	if (InCoordY < 0 || InCoordY >= GridSizeY)
	{
		return nullptr;
	}

	if (IsValid(NodeGrid[InCoordX][InCoordY])
		&& NodeGrid[InCoordX][InCoordY]->bActive)
	{
		return NodeGrid[InCoordX][InCoordY];
	}

	return nullptr;
}

int32 AGridPuzzle::GetNodePointIndexFromDirection(FVector2D Dir)
{
	if (DirToIndexLookup.Contains(Dir))
	{
		return DirToIndexLookup[Dir];
	}

	return -1;
}

void AGridPuzzle::TestNodeDirection()
{
	APuzzleNode* Node = GetNodeAtCoordinate(1, 1);

	APuzzleNode* O1 = GetNodeAtCoordinate(0, 0);
	APuzzleNode* O2 = GetNodeAtCoordinate(0, 1);
	APuzzleNode* O3 = GetNodeAtCoordinate(0, 2);
	APuzzleNode* O4 = GetNodeAtCoordinate(1, 2);
	APuzzleNode* O5 = GetNodeAtCoordinate(2, 2);
	APuzzleNode* O6 = GetNodeAtCoordinate(2, 1);
	APuzzleNode* O7 = GetNodeAtCoordinate(2, 0);
	APuzzleNode* O8 = GetNodeAtCoordinate(1, 0);

	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O1->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O2->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O3->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O4->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O5->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O6->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O7->GetCoordinates() - Node->GetCoordinates())));
	UE_LOG(LogTemp, Warning, TEXT("Chosen index: %i"), (GetNodePointIndexFromDirection(O8->GetCoordinates() - Node->GetCoordinates())));
}
