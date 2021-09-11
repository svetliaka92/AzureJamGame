#include "Puzzle/GridPuzzle.h"
#include "Puzzle/PuzzleNodePoint.h"
#include "Puzzle/EDirection.h"

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

FVector AGridPuzzle::GetNextNodePointLocation(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex)
{
	FVector NextLocation = FVector(100.f, 100.f, 100.f);

	APuzzleNode* Current = GetNodeAtCoordinate(CurrentX, CurrentY);
	APuzzleNode* Next = GetNextNode(CurrentX, CurrentY, CurrentPointIndex);
	if (IsValid(Current) && IsValid(Next))
	{
		FVector2D Dir = FVector2D(Next->GetCoordinates().X - Current->GetCoordinates().X,
								  Next->GetCoordinates().Y - Current->GetCoordinates().Y);

		int32 NextPointIndex = GetNodePointIndexFromDirection(Dir);
		APuzzleNodePoint* NextPoint = Next->GetPointAtIndex(NextPointIndex);
		if (IsValid(NextPoint))
		{
			NextLocation = NextPoint->GetActorLocation();
		}
	}

	return NextLocation;
}

APuzzleNode* AGridPuzzle::GetNextNode(const int32 InCoordX, const int32 InCoordY, const int32 InNodePointIndex) const
{
	APuzzleNode* NextNode = nullptr;
	APuzzleNode* Node = GetNodeAtCoordinate(InCoordX, InCoordY);

	if (!IsValid(Node) || !Node->bActive)
	{
		return NextNode;
	}

	APuzzleNodePoint* NodePoint = Node->GetPointAtIndex(InNodePointIndex);
	if (!IsValid(NodePoint))
	{
		return NextNode;
	}

	// get redirector directions from node point
	EDirection BottomPointDir = Node->GetBottomDirectionAtIndex(InNodePointIndex);
	EDirection TopPointDir = Node->GetTopDirectionAtIndex(InNodePointIndex);

	FVector BottomDir = FVector();
	switch (BottomPointDir)
	{
		case EDirection::Zero:
			BottomDir = FVector::ZeroVector;
			break;
		case EDirection::Forward:
			BottomDir = Node->GetActorForwardVector();
			break;
		case EDirection::Right:
			BottomDir = Node->GetActorRightVector();
			break;
		case EDirection::Back:
			BottomDir = -Node->GetActorForwardVector();
			break;
		case EDirection::Left:
			BottomDir = -Node->GetActorRightVector();
			break;
	}

	FVector TopDir = FVector();
	if (Node->bHasTopCollider)
	{
		switch (TopPointDir)
		{
			case EDirection::Zero:
				TopDir = FVector::ZeroVector;
				break;
			case EDirection::Forward:
				TopDir = Node->GetActorForwardVector();
				break;
			case EDirection::Right:
				TopDir = Node->GetActorRightVector();
				break;
			case EDirection::Back:
				TopDir = -Node->GetActorForwardVector();
				break;
			case EDirection::Left:
				TopDir = -Node->GetActorRightVector();
				break;
		}
	}
	
	FVector FullDir = BottomDir + TopDir;
	FullDir.X = FMath::Clamp(FullDir.X, -1.0f, 1.0f);
	FullDir.Y = FMath::Clamp(FullDir.Y, -1.0f, 1.0f);

	FVector NextNodeCoords = FVector(FullDir.X + Node->GetCoordinates().X,
									 FullDir.Y + Node->GetCoordinates().Y,
									 0.0f);

	NextNode = GetNodeAtCoordinate(NextNodeCoords.X, NextNodeCoords.Y);

	return NextNode;
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
	FVector Dir = GetNextNodePointLocation(1, 1, 1);
	UE_LOG(LogTemp, Warning, TEXT("Next node location: %s"), *Dir.ToCompactString());
}
