#pragma once

#include "CoreMinimal.h"
#include "PublicadorEventos.h"
#include "PublicadorVidaJugador.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFXFVM_API APublicadorVidaJugador : public APublicadorEventos
{
    GENERATED_BODY()

public:
    virtual void Tick(float DeltaTime) override;
    // Sets default values for this actor's properties
    APublicadorVidaJugador();

    // Set the player's life
    void SetVidaJugador(float NewLife);

    // Get the player's life
    float GetVidaJugador() const;

    // Notify subscribers about a change in the player's life
    void NotificarCambioDeVida();

protected:
    // Player's life variable
    UPROPERTY(VisibleAnywhere, Category = "Vida")
    float VidaJugador;
};
