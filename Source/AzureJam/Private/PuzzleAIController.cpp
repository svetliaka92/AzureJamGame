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

		GetBlackboardComponent()->SetValueAsVector("StartLocation", Orb->GetActorLocation());
	}
}

void APuzzleAIController::SetPuzzle(AGridPuzzle* InPuzzle)
{
	Puzzle = InPuzzle;
	if (Puzzle)
	{
		UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp SetPuzzle: Puzzle set!"));
		// subscribe to the start puzzle event
		Puzzle->OnTestStart.AddDynamic(this, &APuzzleAIController::TestPuzzleWithOrb);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp SetPuzzle: Puzzle not set!"));
	}
}

void APuzzleAIController::CompletePuzzle()
{
	bTesting = false;
	GetBlackboardComponent()->ClearValue("IsTestingPuzzle");
	UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp CompletePuzzle: Puzzle done!"));

	if (Puzzle)
	{
		Puzzle->CompletePuzzle();
	}
}

void APuzzleAIController::FailPuzzle()
{
	bTesting = false;
	GetBlackboardComponent()->ClearValue("IsTestingPuzzle");
	UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp FailPuzzle: Puzzle failed!"));

	if (Puzzle)
	{
		Puzzle->FailPuzzle();
	}
}

void APuzzleAIController::TestPuzzleWithOrb()
{
	UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp TestPuzzleWithOrb: Puzzle starting!"));
	if (IsValid(Orb))
	{
		CurrentNode = Puzzle->GetStartNode();
		CurrentNodePointIndex = 0;

		int32 X = CurrentNode->GetCoordinates().X;
		int32 Y = CurrentNode->GetCoordinates().Y;
		int32 Index = CurrentNodePointIndex;

		if (CurrentNode)
		{
			UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp TestPuzzleWithOrb: Current node is set, node: %s"), *CurrentNode->GetName());
			bTesting = true;
			GetBlackboardComponent()->SetValueAsBool("IsTestingPuzzle", bTesting);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp TestPuzzleWithOrb: Current node is NOT set."));
			GetBlackboardComponent()->ClearValue("IsTestingPuzzle");
		}

		

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
		UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp UpdateNextLocation: The current node is not valid"));
		return;
	}

	int32 X = CurrentNode->GetCoordinates().X;
	int32 Y = CurrentNode->GetCoordinates().Y;
	int32 Index = CurrentNodePointIndex;

	CurrentNode = Puzzle->GetNextNode(X, Y, Index);
	CurrentNodePointIndex = Puzzle->GetNextNodePointIndex(X, Y, Index);

	if (CurrentNode)
	{
		UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp UpdateNextLocation: Current node is set, node: %s"), *CurrentNode->GetName());
	}
}

APuzzleNodePoint* APuzzleAIController::GetNextLocation()
{
	APuzzleNodePoint* NextLocation = nullptr;
	if (!IsValid(CurrentNode))
	{
		UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp GetNextLocation: The current node is not valid"));
		return NextLocation;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp GetNextLocation: Current node is set, node: %s"), *CurrentNode->GetName());

	int32 Index = CurrentNodePointIndex;

	NextLocation = CurrentNode->GetPointAtIndex(Index);

	return NextLocation;
}

APuzzleNode* APuzzleAIController::GetNextNode()
{
	return CurrentNode;
}

void APuzzleAIController::VisitNode()
{
	// tell puzzle to mark node point as visited
	Puzzle->OnNodePointVisit(CurrentNode->GetCoordinates().X, CurrentNode->GetCoordinates().Y, CurrentNodePointIndex);
	UE_LOG(LogTemp, Warning, TEXT("PuzzleAIController.cpp VisitNode: Marking current node as visited, node: %s"), *CurrentNode->GetName());
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
