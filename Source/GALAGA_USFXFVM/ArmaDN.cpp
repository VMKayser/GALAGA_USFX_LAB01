#include "ArmaDN.h"
#include "Components/StaticMeshComponent.h"
#include "GALAGA_USFXFVMProjectile.h"
#include"ProyectilExplosivo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AArmaDN::AArmaDN() {
    // Configurar la malla del arma (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    mallaArma->SetStaticMesh(ShipMesh.Object);

    // Configurar la velocidad y la munición
    SetVelocidad(0.2f); // Ajusta la velocidad según tus necesidades
    // Usamos un valor especial para representar munición infinita
	SetDireccion(FVector(90.f, 0.f, 0.f)); // Puedes ajustar la posición inicial del arma si es necesario
	SetMunicion(3);

	bCanFire = true;
	
}

void AArmaDN::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
	Disparar();
    // Llamar al método Disparar() en cada tick para disparar continuamente
    
}

void AArmaDN::Disparar()
{
	
	if (municion> 0) {// Si es posible disparar de nuevo
		if (bCanFire)
		{
			municion--;
			// Obtener la rotación de disparo (hacia adelante a lo largo del eje X)
			const FRotator FireRotation = ( - GetActorForwardVector()).Rotation();
			// Obtener la ubicación de disparo (desde la posición del Pawn con un desplazamiento)
			const FVector SpawnLocation = GetActorLocation() - GetActorForwardVector() * direccion.X;

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// Generar el proyectil
				AGALAGA_USFXFVMProjectile* Projectile = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);

				if (Projectile != nullptr)
				{
					// Configurar el proyectil (velocidad, tiempo de vida, etc.) si es necesario
				}

				// Establecer el temporizador para el próximo disparo
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AArmaDN::ShotTimerExpired, velocidad);


				// Evitar disparar repetidamente
				bCanFire = false;
			}
		}
	}
	else {
		// Si no hay munición, recargar
		FTimerHandle TimerHandle_Recarga;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Recarga, this, &AArmaDN::Recargar, 5.0f, false);
	}
	
}


void AArmaDN::ShotTimerExpired()
{
	bCanFire = true;
}

void AArmaDN::Recargar() {
	// Recargar la munición
	municion = 3;

}