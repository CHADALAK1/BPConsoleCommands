#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConsoleCommands.generated.h"


UCLASS( Abstract, Blueprintable, BlueprintType )
class BPCONSOLECOMMANDS_API UConsoleCommands : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UConsoleCommands();

		
};
