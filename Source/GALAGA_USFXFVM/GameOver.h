#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOver.generated.h"

UCLASS()
class GALAGA_USFXFVM_API UGameOver : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Game Over")
	void VolverAlMenu();

	UFUNCTION(BlueprintCallable, Category = "Game Over")
	void ReiniciarJuego();
};

