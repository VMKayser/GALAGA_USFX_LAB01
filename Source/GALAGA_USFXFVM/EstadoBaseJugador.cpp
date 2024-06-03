// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoBaseJugador.h"
#include "GALAGA_USFXFVMPawn.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "TimerManager.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AEstadoBaseJugador::AEstadoBaseJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;

}

// Called when the game starts or when spawned
void AEstadoBaseJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoBaseJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoBaseJugador::Activar()
{
	if (NaveJugador)
	{
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
		NaveJugador->CambiarMalla(NuevaMalla);
	}
}
	


void AEstadoBaseJugador::Desactivar()
{
}

void AEstadoBaseJugador::SetNaveJugador(AGALAGA_USFXFVMPawn* _NaveJugador)
{
	NaveJugador= Cast<AGALAGA_USFXFVMPawn>(_NaveJugador);
	
}

void AEstadoBaseJugador::Disparar()
{
	// If it's ok to fire again
	if (bCanFire && NaveJugador)
	{
		// If we are pressing fire stick in a direction

		
			UWorld* const World = GetWorld();
			if (World)
			{
				const FRotator FireRotation = NaveJugador->GetActorRotation();
				const FVector SpawnLocation = NaveJugador->GetActorLocation() + FireRotation.RotateVector(GunOffset)+FVector(100.0f,0.0f,0.0f);


				// spawn the projectile
				World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);


				bCanFire = false;
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstadoBaseJugador::ShotTimerExpired, FireRate);

				// try and play the sound if specified
				/*if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}*/

			}
		

	}
}

void AEstadoBaseJugador::ShotTimerExpired()
{
	bCanFire = true;
}
void AEstadoBaseJugador::VolverEstadoBase()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("yaestas en base"));
}