// Fill out your copyright notice in the Description page of Project Settings.

#include "EstrategiaAtaqueNormal.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "ArmaDN.h"
#include "Galaga_USFXFVMProjectile.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaAtaqueNormal::AEstrategiaAtaqueNormal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstrategiaAtaqueNormal::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEstrategiaAtaqueNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaAtaqueNormal::Disparar(AArmaDN* Arma)
{
	if (Arma && bCanFire)
	{
		GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando"));
		// Obtener la rotación de disparo (hacia adelante a lo largo del eje X)
		const FRotator FireRotation = Arma->GetActorForwardVector().Rotation();
		// Obtener la ubicación de disparo (desde la posición del Pawn con un desplazamiento)
		const FVector SpawnLocation = Arma->GetActorLocation() + FVector(100.0f,0.0f,0.0f);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// Generar el proyectil
			AGALAGA_USFXFVMProjectile* Projectile = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);

			// Establecer el temporizador para el próximo disparo
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstrategiaAtaqueNormal::ShotTimerExpired, 0.5f);

			// Evitar disparar repetidamente
			bCanFire = false;
		}
        // Cambio de malla

        UStaticMesh* NuevaMalla1 = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
        Arma->CambiarMalla(NuevaMalla1);
	}
}

void AEstrategiaAtaqueNormal::ShotTimerExpired()
{
	bCanFire = true;
}

void AEstrategiaAtaqueNormal::MoverArma(AArmaDN* Arma, float DeltaTime)
{
    if (Arma)
    {
        AGALAGA_USFXFVMPawn* Jugador = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
        FVector PosicionActual = Arma->GetActorLocation();

        if (Jugador)
        {
            //regresamos la escalainicial de ser necesario
            Arma->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
            FVector PosicionJugador = Jugador->GetActorLocation()+FVector(0.0f,210.0f,0.0f);
            

     
            float Velocidad = 2000.f; // Velocidad de movimiento en unidades por segundo

          
           
                // Movimiento de regreso en el eje X e Y para volver al lado del jugador
                FVector DireccionRegreso = (PosicionJugador - PosicionActual).GetSafeNormal();
                FVector NuevaPosicion = PosicionActual + DireccionRegreso * Velocidad * DeltaTime;

                Arma->SetActorLocation(NuevaPosicion);

                // Si el arma ha regresado a la posición inicial (ajustada), detener el movimiento
                if (FVector::DistSquared(NuevaPosicion, PosicionJugador) <= FMath::Square(Velocidad * DeltaTime))
                {
                    Arma->SetActorLocation(PosicionJugador);
                   
                }
            
        }
    }
}
