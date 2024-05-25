#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FacadeDificultadJuego.h"  // Incluye para el uso de FValoresNaveEnemiga
#include "InstanciaJuegoNivel.generated.h"

UCLASS()
class GALAGA_USFXFVM_API UInstanciaJuegoNivel : public UGameInstance
{
    GENERATED_BODY()
public:
    UInstanciaJuegoNivel();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Configuracion del Juego")
    int DificultadJuego;
	int NumeroNivel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Configuracion del Juego")
    FValoresNaveEnemiga ValoresNaveEnemiga;  // Añade esta propiedad
};
