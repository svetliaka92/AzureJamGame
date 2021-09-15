#include "Puzzle/GridPuzzle.h"
#include "Puzzle/PuzzleNodePoint.h"
#include "Puzzle/EDirection.h"
#include "StartTestButton.h"

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

void AGridPuzzle::BeginPlay()
{
	Super::BeginPlay();

	if (Nodes.Num() > 0)
	{
		SetNodeGrid(Nodes);
	}
}

void AGridPuzzle::SetNodeGrid(TArray<APuzzleNode*> InNodes)
{
	if (InNodes.Num() <= 0)
	{
		return;
	}

	// reorder the InNodex array into a 2D array
	for (int32 i = 0; i < GridSizeX; ++i)
	{
		NodeGrid.Add(TArray<APuzzleNode*>());
		for (int32 j = 0; j < GridSizeY; ++j)
		{
			NodeGrid[i].Add(InNodes[j + i * GridSizeY]);
			NodeGrid[i][j]->SetCoordinates(i, j);
			NodeGrid[i][j]->SetActorLocation(FVector(i * DistanceBetweenNodes, j * DistanceBetweenNodes, 0));
		}
	}

	TestNodeDirection();
}

APuzzleNode* AGridPuzzle::GetStartNode()
{
	return StartNode;
}

void AGridPuzzle::StartTest()
{
	// lock nodes
	// lock test button
	UE_LOG(LogTemp, Warning, TEXT("GridPuzzle.cpp GetNextNode: Starting test"));
	for (APuzzleNode* Node : Nodes)
	{
		Node->LockRedirectors(true);
	}

	if (StartButton)
	{
		StartButton->LockButton(true);
	}

	if (OnTestStart.IsBound())
	{
		OnTestStart.Broadcast();
	}
}

void AGridPuzzle::CompletePuzzle()
{
	// keep puzzle blocked
}

void AGridPuzzle::FailPuzzle()
{
	// unlock nodes
	// unlock test button
	for (APuzzleNode* Node : Nodes)
	{
		Node->LockRedirectors(false);
		Node->ClearVisited();
	}

	if (StartButton)
	{
		StartButton->LockButton(false);
	}
}

bool AGridPuzzle::IsEndNode(int32 CurrentX, int32 CurrentY)
{
	APuzzleNode* Current = GetNodeAtCoordinate(CurrentX, CurrentY);
	if (IsValid(Current))
	{
		if (Current->GetCoordinates() == EndNode->GetCoordinates())
		{
			return true;
		}
	}

	return false;
}

bool AGridPuzzle::HasVisitedNode(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex)
{
	APuzzleNode* Current = GetNodeAtCoordinate(CurrentX, CurrentY);
	if (IsValid(Current))
	{
		APuzzleNodePoint* NodePoint = Current->GetPointAtIndex(CurrentPointIndex);
		if (NodePoint)
		{
			return NodePoint->bVisited;
		}
	}

	return false;
}

void AGridPuzzle::OnNodePointVisit(int32 CurrentX, int32 CurrentY, int32 CurrentIndex)
{
	APuzzleNode* Current = GetNodeAtCoordinate(CurrentX, CurrentY);
	if (IsValid(Current))
	{
		APuzzleNodePoint* NodePoint = Current->GetPointAtIndex(CurrentIndex);
		if (NodePoint)
		{
			NodePoint->bVisited = true;
		}
	}
}

int32 AGridPuzzle::GetNextNodePointIndex(int32 CurrentX, int32 CurrentY, int32 CurrentPointIndex)
{
	APuzzleNode* Current = GetNodeAtCoordinate(CurrentX, CurrentY);
	APuzzleNode* Next = GetNextNode(CurrentX, CurrentY, CurrentPointIndex);

	if (Current && Next)
	{
		FVector2D Dir = FVector2D(Next->GetCoordinates().X - Current->GetCoordinates().X,
								  Next->GetCoordinates().Y - Current->GetCoordinates().Y);

		return GetNodePointIndexFromDirection(Dir);
	}

	return -1;
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
			BottomDir = NodePoint->GetActorForwardVector();
			break;
		case EDirection::Right:
			BottomDir = NodePoint->GetActorRightVector();
			break;
		case EDirection::Back:
			BottomDir = -NodePoint->GetActorForwardVector();
			break;
		case EDirection::Left:
			BottomDir = -NodePoint->GetActorRightVector();
			break;
	}

	BottomDir.X = FMath::RoundToInt(BottomDir.X);
	BottomDir.Y = FMath::RoundToInt(BottomDir.Y);

	FVector TopDir = FVector();
	if (Node->bHasTopCollider)
	{
		switch (TopPointDir)
		{
			case EDirection::Zero:
				TopDir = FVector::ZeroVector;
				break;
			case EDirection::Forward:
				TopDir = NodePoint->GetActorForwardVector();
				break;
			case EDirection::Right:
				TopDir = NodePoint->GetActorRightVector();
				break;
			case EDirection::Back:
				TopDir = -NodePoint->GetActorForwardVector();
				break;
			case EDirection::Left:
				TopDir = -NodePoint->GetActorRightVector();
				break;
		}
	}

	TopDir.X = FMath::RoundToInt(TopDir.X);
	TopDir.Y = FMath::RoundToInt(TopDir.Y);
	
	FVector FullDir = BottomDir;
	if (Node->bHasTopCollider)
	{
		FullDir = BottomDir + TopDir;
	}
	FullDir.X = FMath::Clamp(FullDir.X, -1.0f, 1.0f);
	FullDir.Y = FMath::Clamp(FullDir.Y, -1.0f, 1.0f);

	FVector NextNodeCoords = FVector(FullDir.X + Node->GetCoordinates().X,
									 FullDir.Y + Node->GetCoordinates().Y,
									 0.0f);

	NextNode = GetNodeAtCoordinate(NextNodeCoords.X, NextNodeCoords.Y);

	if (Node)
	{
		UE_LOG(LogTemp, Warning, TEXT("GridPuzzle.cpp GetNextNode: Node: %s"), *Node->GetName());
		FString NextNodeDir = StaticEnum<EDirection>()->GetValueAsString(Node->GetBottomDirectionAtIndex(InNodePointIndex));
		UE_LOG(LogTemp, Warning, TEXT("GridPuzzle.cpp GetNextNode: Direction to next node: %s, vector of direction: %s"), *NextNodeDir, *FullDir.ToCompactString());
	}

	if (NextNode)
	{
		UE_LOG(LogTemp, Warning, TEXT("GridPuzzle.cpp GetNextNode: Next node: %s"), *NextNode->GetName());
	}
	
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
	FVector Dir = GetNextNodePointLocation(0, 2, 0);
	UE_LOG(LogTemp, Warning, TEXT("GridPuzzle.cpp GetNextNode: Next node location: %s"), *Dir.ToCompactString());
}
