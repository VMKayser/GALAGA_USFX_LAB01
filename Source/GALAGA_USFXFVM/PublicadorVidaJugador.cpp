// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicadorVidaJugador.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Kismet/GameplayStatics.h"



APublicadorVidaJugador::APublicadorVidaJugador()
{
    PrimaryActorTick.bCanEverTick = true;
    // Set default life value
    Subscriptores = TArray<AActor*>();

}
void APublicadorVidaJugador::Tick(float DeltaTime)
{
	// Call the base class
	Super::Tick(DeltaTime);
    AGALAGA_USFXFVMPawn* Pawn = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Pawn)
    {
        // Obtener la vida del pawn
        
        float VidaJugador1 = Pawn->GetVidaJugador();
        SetVidaJugador(VidaJugador1);
        // Actualizar la vida del jugador en el publicador de vida
        NotificarCambioDeVida();
    }
}

void APublicadorVidaJugador::SetVidaJugador(float NewLife)
{
    VidaJugador = NewLife;
}

float APublicadorVidaJugador::GetVidaJugador() const
{
    return VidaJugador;
}

void APublicadorVidaJugador::NotificarCambioDeVida()
{
    // Notify subscribers about the change in player's life
    Notificar();
}
