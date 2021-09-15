#include "Puzzle/PuzzleNode.h"

APuzzleNode::APuzzleNode()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Node Mesh"));
	Mesh->SetupAttachment(Root);

	BottomCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Bottom collider"));
	BottomCollider->SetupAttachment(Root);

	TopCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Top collider"));
	TopCollider->SetupAttachment(Root);

	BottomMonitor1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Monitor 1"));
	BottomMonitor1->SetupAttachment(Root);

	BottomMonitor2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Monitor 2"));
	BottomMonitor2->SetupAttachment(Root);

	BottomMonitor3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Monitor 3"));
	BottomMonitor3->SetupAttachment(Root);

	BottomMonitor4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Monitor 4"));
	BottomMonitor4->SetupAttachment(Root);

	TopMonitor1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Monitor 1"));
	TopMonitor1->SetupAttachment(Root);

	TopMonitor2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Monitor 2"));
	TopMonitor2->SetupAttachment(Root);

	TopMonitor3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Monitor 3"));
	TopMonitor3->SetupAttachment(Root);

	TopMonitor4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Monitor 4"));
	TopMonitor4->SetupAttachment(Root);
}

void APuzzleNode::BeginPlay()
{
	Super::BeginPlay();

	if (!bHasTopCollider)
	{
		TopCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		// set the screen material of the top monitors to Off
	}

	if (!bActive)
	{
		Mesh->SetVisibility(false);
		Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		BottomCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		TopCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void APuzzleNode::SetPoints(TArray<APuzzleNodePoint*> InPoints)
{
	Points = InPoints;
}

void APuzzleNode::SetCoordinates(int32 InCoordX, int32 InCoordY)
{
	CoordX = InCoordX;
	CoordY = InCoordY;
}

APuzzleNodePoint* APuzzleNode::GetPointAtIndex(int32 Index)
{
	if (Index >= 0 && Index < Points.Num())
	{
		return Points[Index];
	}

	return nullptr;
}

EDirection APuzzleNode::GetBottomDirectionAtIndex(int32 Index)
{
	if (Index >= 0 && Index < BottomDirections.Num())
	{
		return BottomDirections[Index];
	}

	return EDirection::Zero;
}

EDirection APuzzleNode::GetTopDirectionAtIndex(int32 Index)
{
	if (Index >= 0 && Index < TopDirections.Num())
	{
		return TopDirections[Index];
	}

	return EDirection::Zero;
}

void APuzzleNode::OnCompClicked(UPrimitiveComponent* Comp)
{
	OnComponentHit(Comp);
}

void APuzzleNode::LockRedirectors(bool bFlag)
{
	bInteractable = !bFlag;
}

void APuzzleNode::OnComponentHit(UPrimitiveComponent* HitComponent)
{
	if (!bInteractable)
	{
		return;
	}

	if (!IsValid(HitComponent))
	{
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Hit component: %s"), *HitComponent->GetName());

	if (HitComponent == BottomCollider)
	{
		RotateBottomDirections();
	}
	else if (HitComponent == TopCollider)
	{
		RotateTopDirections();
	}
}

void APuzzleNode::RotateBottomDirections()
{
	UE_LOG(LogTemp, Warning, TEXT("Bottom rotation."));
	//return;
	EDirection Temp = BottomDirections[BottomDirections.Num() - 1];
	for (int32 i = BottomDirections.Num() - 1; i > 0; --i)
	{
		BottomDirections[i] = BottomDirections[i - 1];
	}

	BottomDirections[0] = Temp;
}

void APuzzleNode::RotateTopDirections()
{
	UE_LOG(LogTemp, Warning, TEXT("Top rotation."));
	//return;
	EDirection Temp = TopDirections[TopDirections.Num() - 1];
	for (int32 i = TopDirections.Num() - 1; i > 0; --i)
	{
		TopDirections[i] = TopDirections[i - 1];
	}

	TopDirections[0] = Temp;
}

void APuzzleNode::ClearVisited()
{
	for (APuzzleNodePoint* Point : Points)
	{
		Point->bVisited = false;
	}
}
