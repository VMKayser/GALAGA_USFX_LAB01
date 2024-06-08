// Fill out your copyright notice in the Description page of Project Settings.

#include "EstrategiaAtaqueEscudo.h"
#include "GALAGA_USFXFVMPawn.h"
#include "ArmaDN.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMesh.h"

#include "GALAGA_USFXFVMProjectile.h"

// Sets default values
AEstrategiaAtaqueEscudo::AEstrategiaAtaqueEscudo()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    bRegresando = false;
    bCanFire = true;
}

// Called when the game starts or when spawned
void AEstrategiaAtaqueEscudo::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AEstrategiaAtaqueEscudo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEstrategiaAtaqueEscudo::Disparar(AArmaDN* Arma)
{
    if (Arma)
    {
        if (bCanFire)
        {
            FVector SpawnLocation = Arma->GetActorLocation();
            FRotator FireRotation = Arma->GetActorRotation();

            GetWorld()->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(100.0f, 70.0f, 0.0f), FireRotation);
            GetWorld()->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation + FVector(100.0f, -70.0f, 0.0f), FireRotation);

            GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstrategiaAtaqueEscudo::ShotTimerExpired, 1.0f);

            // Evitar disparar repetidamente
            bCanFire = false;
            //Cambio de malla
            UStaticMesh* NuevaMalla1 = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
            Arma->CambiarMalla(NuevaMalla1);
  
             //// Cambiar la escala de la malla
            FVector NuevaEscala = FVector(Arma->GetActorScale().X, 3.0f, 3.0f); // Escala en Y y Z
            Arma->SetActorScale3D(NuevaEscala);
        }
    }
}

void AEstrategiaAtaqueEscudo::ShotTimerExpired()
{
    bCanFire = true;
}

void AEstrategiaAtaqueEscudo::MoverArma(AArmaDN* Arma, float DeltaTime)
{
    if (Arma)
    {
        AGALAGA_USFXFVMPawn* Jugador = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
        if (Jugador)
        {
            FVector PosicionJugador = Jugador->GetActorLocation();
            FVector PosicionActual = Arma->GetActorLocation();
            FVector PosicionObjetivo = FVector(PosicionJugador.X + 150.f, PosicionJugador.Y, PosicionJugador.Z);

            FVector NuevaPosicion = FMath::VInterpTo(Arma->GetActorLocation(), PosicionObjetivo, DeltaTime, 2.0f);
            Arma->SetActorLocation(NuevaPosicion);

        }
    }
}