#include "GameOver.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

void UGameOver::VolverAlMenu()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true;
		FInputModeUIOnly InputMode;
		PlayerController->SetInputMode(InputMode);
	}

	UGameplayStatics::OpenLevel(this, FName("/Game/UI/MenuInicio"));
}

void UGameOver::ReiniciarJuego()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = false;
		FInputModeGameOnly InputMode;
		PlayerController->SetInputMode(InputMode);
	}

	UGameplayStatics::OpenLevel(this, FName("/Game/TwinStickCPP/Maps/TwinStickExampleMap"));
}
