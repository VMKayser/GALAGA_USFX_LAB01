// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoSuperArmaJugador.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "TimerManager.h"

// Sets default values
AEstadoSuperArmaJugador::AEstadoSuperArmaJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
}

// Called when the game starts or when spawned
void AEstadoSuperArmaJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoSuperArmaJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoSuperArmaJugador::Activar()
{
	if(NaveJugador)
	{
		GetWorld()->GetTimerManager().SetTimer(TiempoSuperArma, this, &AEstadoSuperArmaJugador::VolverEstadoBase, 5.0f, false);
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/TwinStick/Meshes/NaveEnemigaKamikaze.NaveEnemigaKamikaze"));
		NaveJugador->CambiarMalla(NuevaMalla);
		NaveJugador->MoveSpeed *= 1.5f;

	}
	
}

void AEstadoSuperArmaJugador::Desactivar()
{
	if (NaveJugador)
	{
		
		NaveJugador->MoveSpeed /= 1.5f;

	}
}

void AEstadoSuperArmaJugador::SetNaveJugador(AGALAGA_USFXFVMPawn* _NaveJugador)
{
	NaveJugador = Cast<AGALAGA_USFXFVMPawn>(_NaveJugador);
	
	
}

void AEstadoSuperArmaJugador::Disparar()
{
	if (bCanFire && NaveJugador)
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			const FRotator FireRotation = NaveJugador->GetActorRotation();
			const FVector SpawnLocation = NaveJugador->GetActorLocation() + FireRotation.RotateVector(GunOffset);
			World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);
			World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(0.0f,30.0f,0.0f), FireRotation+FRotator(0.0f,10.0f,0.0f) );
			World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(0.0f, -30.0f, 0.0f), FireRotation + FRotator(0.0f, -10.0f, 0.0f));
			World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(0.0f, 60.0f, 0.0f), FireRotation + FRotator(0.0f, 20.0f, 0.0f));
			World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(0.0f, -60.0f, 0.0f), FireRotation + FRotator(0.0f, -20.0f, 0.0f));


			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstadoSuperArmaJugador::ShotTimerExpired, FireRate);
		}
	}
}

void AEstadoSuperArmaJugador::ShotTimerExpired()
{
	bCanFire = true;
}

void AEstadoSuperArmaJugador::VolverEstadoBase()
{
	if (NaveJugador)
	{
		NaveJugador->SetEstadoActual(NaveJugador->GetEstadoBase());
		GetWorld()->GetTimerManager().ClearTimer(TiempoSuperArma);
	}
}