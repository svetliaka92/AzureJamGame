#include "Puzzle/NodeRedirector.h"

UNodeRedirector::UNodeRedirector()
{
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
}
