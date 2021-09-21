#pragma once

#include "CoreMinimal.h"
#include "EDirection.generated.h"

UENUM()
enum class EDirection : uint8
{
	Zero,
	Forward,
	Right,
	Back,
	Left,
	Random,
};
