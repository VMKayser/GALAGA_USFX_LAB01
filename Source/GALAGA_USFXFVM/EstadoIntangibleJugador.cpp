// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoIntangibleJugador.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Engine/StaticMesh.h"
#include "TimerManager.h"

// Sets default values
AEstadoIntangibleJugador::AEstadoIntangibleJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoIntangibleJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoIntangibleJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoIntangibleJugador::Activar()
{
	if (NaveJugador)
	{
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/TwinStick/Meshes/NaveEnemigaTransporte.NaveEnemigaTransporte"));
		NaveJugador->CambiarMalla(NuevaMalla);
		// Hacer la nave intangible
		NaveJugador->SetActorEnableCollision(false);
		

		// Configurar un temporizador para volver al estado base después de 5 segundos
		GetWorld()->GetTimerManager().SetTimer(TiempoIntangible, this, &AEstadoIntangibleJugador::VolverEstadoBase, 5.0f, false);
		
	}
}

void AEstadoIntangibleJugador::Desactivar()
{
	if (NaveJugador)
	{
		// Hacer la nave tangible nuevamente
		NaveJugador->SetActorEnableCollision(true);
		
		
	
	}
}

void AEstadoIntangibleJugador::SetNaveJugador(AGALAGA_USFXFVMPawn* _NaveJugador)
{
	NaveJugador = Cast<AGALAGA_USFXFVMPawn>(_NaveJugador);

	
}

void AEstadoIntangibleJugador::Disparar()
{
	//no hay disparo posible forma de ampliacion en un futuro disparo de expansion 
}
void AEstadoIntangibleJugador::VolverEstadoBase()
{
	if (NaveJugador)
	{
		NaveJugador->SetEstadoActual(NaveJugador->GetEstadoBase());
		GetWorld()->GetTimerManager().ClearTimer(TiempoIntangible);
	}
}

