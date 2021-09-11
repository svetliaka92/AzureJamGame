#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "NodeRedirector.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AZUREJAM_API UNodeRedirector : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNodeRedirector();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBoxComponent* Collider;
};
