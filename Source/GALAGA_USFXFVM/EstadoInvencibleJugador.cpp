// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoInvencibleJugador.h"
#include "GALAGA_USFXFVMPawn.h"
#include "TimerManager.h"
#include "NaveEnemiga.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AEstadoInvencibleJugador::AEstadoInvencibleJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoInvencibleJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoInvencibleJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoInvencibleJugador::Activar()
{
	
	if (NaveJugador)
	{
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/TwinStick/Meshes/NaveEnemigaCaza.NaveEnemigaCaza"));
		NaveJugador->CambiarMalla(NuevaMalla); 
	
	
		// Hacer la nave invencible
		NaveJugador->SetActorEnableCollision(false);

		// Aumentar la velocidad
		NaveJugador->MoveSpeed *= 2.0f;

		// Configurar un temporizador para destruir naves enemigas cercanas periódicamente
		GetWorld()->GetTimerManager().SetTimer(TiempoInvencible, this, &AEstadoInvencibleJugador::VolverEstadoBase, 5.0f, true);
	}
}

void AEstadoInvencibleJugador::Desactivar()
{
	if (NaveJugador)
	{
		// Hacer la nave tangible nuevamente
		NaveJugador->SetActorEnableCollision(true);

		// Restaurar la velocidad original
		NaveJugador->MoveSpeed /= 2.0f;

	

		

	}
}

void AEstadoInvencibleJugador::SetNaveJugador(AGALAGA_USFXFVMPawn* _NaveJugador)
{
	NaveJugador = Cast<AGALAGA_USFXFVMPawn>(_NaveJugador);


}

void AEstadoInvencibleJugador::Disparar()
{
	//no dispara posible implementacion en un futuro de un disparo que incremente la est
	if (NaveJugador)
	{
		TArray<AActor*> EnemigosCercanos;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemiga::StaticClass(), EnemigosCercanos);

		for (AActor* Enemigo : EnemigosCercanos)
		{
			if (Enemigo->GetDistanceTo(NaveJugador) <= 300.0f)
			{
				Enemigo->Destroy();
			}
		}
	}

}

void AEstadoInvencibleJugador::VolverEstadoBase()
{
	if (NaveJugador)
	{
		NaveJugador->SetEstadoActual(NaveJugador->GetEstadoBase());
		GetWorld()->GetTimerManager().ClearTimer(TiempoInvencible);
	}
}
