#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConsoleCommandsManager.generated.h"

class UConsoleCommands;

UCLASS( Within = PlayerController, BlueprintType )
class BPCONSOLECOMMANDS_API UConsoleCommandsManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UConsoleCommandsManager();
	
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual bool ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor) override;

	UPROPERTY(EditDefaultsOnly, Category = "ConsoleCommandManager")
	TArray<TSubclassOf<UConsoleCommands>> ConsoleCommandsClasses;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	UPROPERTY(Transient, Replicated)
	TArray<UConsoleCommands*> ConsoleCommandsObjects;

		
};
