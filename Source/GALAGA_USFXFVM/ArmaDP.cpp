// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaDP.h"
#include "Components/StaticMeshComponent.h"
#include "ProyectilParabolico.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AArmaDP::AArmaDP() {
	// Configurar la malla del arma (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaArma->SetStaticMesh(ShipMesh.Object);

	// Configurar la velocidad y la munición
	SetVelocidad(0.2f); // Ajusta la velocidad según tus necesidades
	// Usamos un valor especial para representar munición infinita
	SetDireccion(FVector(90.f, 0.f, 0.f)); // Puedes ajustar la posición inicial del arma si es necesario
	SetMunicion(30);

	bCanFire = true;

}

void AArmaDP::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Disparar();
	// Llamar al método Disparar() en cada tick para disparar continuamente
}

void AArmaDP::Disparar()
{
	if (municion > 0) {// Si es posible disparar de nuevo
		if (bCanFire)
		{
			municion--;
			// Obtener la rotación de disparo (hacia adelante a lo largo del eje X)
			const FRotator FireRotation = (-GetActorForwardVector()).Rotation();
			// Obtener la ubicación de disparo (desde la posición del Pawn con un desplazamiento)
			const FVector SpawnLocation = GetActorLocation() - GetActorForwardVector() * direccion.X;

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// Generar el proyectil
				AProyectilParabolico* Projectile = World->SpawnActor<AProyectilParabolico>(SpawnLocation, FireRotation);

				if (Projectile != nullptr)
				{
					// Configurar el proyectil (velocidad, tiempo de vida, etc.) si es necesario
				}

				// Establecer el temporizador para el próximo disparo
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AArmaDP::ShotTimerExpired, 5.0f);

				// Evitar disparar repetidamente
				bCanFire = false;
			}
		}
	}
	else {
		// Si no hay munición, recargar
		FTimerHandle TimerHandle_Recarga;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Recarga, this, &AArmaDP::Recargar, 2.0f, false);
	}
}

void AArmaDP::ShotTimerExpired()
{
	bCanFire = true;
}

void AArmaDP::Recargar() {
	// Recargar la munición
	municion = 30;
}
