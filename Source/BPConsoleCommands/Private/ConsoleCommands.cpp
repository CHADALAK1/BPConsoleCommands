#include "ConsoleCommands.h"

UConsoleCommands::UConsoleCommands()
{
	SetIsReplicatedByDefault(true);

	for (TFieldIterator<UFunction> It(GetClass()); It; ++It)
	{
		// Make sure the function belongs to us instead of UActorComponent.
		// Its functions will show up here since we extended it.
		if (GetClass()->IsChildOf(Cast<UClass>(It.GetStruct())))
		{
			It->FunctionFlags |= FUNC_Exec;
		}
	}
}

