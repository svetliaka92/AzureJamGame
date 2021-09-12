// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Puzzle/PuzzleNode.h"
#include "Puzzle/PuzzleNodePoint.h"

void APuzzleAIController::BeginPlay()
{
	Super::BeginPlay();

	Orb = Cast<APuzzleOrb>(GetPawn());
	if (AIBehavior && Orb)
	{
		RunBehaviorTree(AIBehavior);
		SetPuzzle(Orb->Puzzle);
	}
}

void APuzzleAIController::SetPuzzle(AGridPuzzle* InPuzzle)
{
	Puzzle = InPuzzle;
	if (Puzzle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Puzzle set!"));
		// subscribe to the start puzzle event
		Puzzle->OnTestStart.AddDynamic(this, &APuzzleAIController::TestPuzzleWithOrb);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Puzzle not set!"));
	}
}

void APuzzleAIController::CompletePuzzle()
{
	bTesting = false;
	UE_LOG(LogTemp, Warning, TEXT("Puzzle done!"));
}

void APuzzleAIController::FailPuzzle()
{
	bTesting = false;
	UE_LOG(LogTemp, Warning, TEXT("Puzzle failed!"));
}

void APuzzleAIController::TestPuzzleWithOrb()
{
	UE_LOG(LogTemp, Warning, TEXT("Puzzle starting!"));
	if (IsValid(Orb))
	{
		CurrentNode = Puzzle->GetStartNode();
		CurrentNodePointIndex = 0;

		int32 X = CurrentNode->GetCoordinates().X;
		int32 Y = CurrentNode->GetCoordinates().Y;
		int32 Index = CurrentNodePointIndex;

		Puzzle->OnNodePointVisit(X, Y, Index);

		if (CurrentNode)
		{
			UE_LOG(LogTemp, Warning, TEXT("Current node is set."));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Current node is NOT set."));
		}

		bTesting = true;

		//GetBlackboardComponent()->SetValueAsBool("IsTestingPuzzle", true);
	}
}

bool APuzzleAIController::IsTesting()
{
	return bTesting;
}

bool APuzzleAIController::HasNextNode()
{
	return IsValid(CurrentNode);
}

void APuzzleAIController::UpdateNextLocation()
{
	if (!IsValid(CurrentNode))
	{
		UE_LOG(LogTemp, Warning, TEXT("UpdateNextLocation: The current node is not valid"));
		return;
	}

	int32 X = CurrentNode->GetCoordinates().X;
	int32 Y = CurrentNode->GetCoordinates().Y;
	int32 Index = CurrentNodePointIndex;

	CurrentNode = Puzzle->GetNextNode(X, Y, Index);
	CurrentNodePointIndex = Puzzle->GetNextNodePointIndex(X, Y, Index);
}

APuzzleNodePoint* APuzzleAIController::GetNextLocation()
{
	APuzzleNodePoint* NextLocation = nullptr;
	if (!IsValid(CurrentNode))
	{
		UE_LOG(LogTemp, Warning, TEXT("GetNextNodePointIndex: The current node is not valid"));
		return NextLocation;
	}

	int32 X = CurrentNode->GetCoordinates().X;
	int32 Y = CurrentNode->GetCoordinates().Y;
	int32 Index = CurrentNodePointIndex;

	NextLocation = CurrentNode->GetPointAtIndex(Index);

	return NextLocation;
}

void APuzzleAIController::VisitNode()
{
	// tell puzzle to mark node point as visited
	Puzzle->OnNodePointVisit(CurrentNode->GetCoordinates().X, CurrentNode->GetCoordinates().Y, CurrentNodePointIndex);
}

bool APuzzleAIController::IsNodeVisited()
{
	return Puzzle->HasVisitedNode(CurrentNode->GetCoordinates().X, CurrentNode->GetCoordinates().Y, CurrentNodePointIndex);
}

bool APuzzleAIController::IsEndNode()
{
	// check if the current node is the end node
	return Puzzle->IsEndNode(CurrentNode->GetCoordinates().X, CurrentNode->GetCoordinates().Y);
}
