// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAtaqueSierra.h"
#include "ArmaDN.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaAtaqueSierra::AEstrategiaAtaqueSierra()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    //inicia un delta time
}

// Called when the game starts or when spawned
void AEstrategiaAtaqueSierra::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AEstrategiaAtaqueSierra::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (bIsRotating)
    {
        if (Arma1)
        {
            AGALAGA_USFXFVMPawn* NaveJugador = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(this, 0)); (UGameplayStatics::GetPlayerPawn(this, 0));
            
            if (NaveJugador)
            {
                
                // Hacer que el arma gire alrededor de la nave jugador
                FRotator Rotacion = Arma1->GetActorRotation();
                Rotacion.Yaw += 0.1f * 100 * DeltaTime; // Ajustar la velocidad de rotación
                Arma1->SetActorRotation(Rotacion);

                FVector PosicionNave = NaveJugador->GetActorLocation();
                FVector PosicionArma = PosicionNave + FVector(100, 0, 0); // Ajustar la distancia de la nave
                Arma1->SetActorLocation(PosicionArma);
            }
        }
    }
}

void AEstrategiaAtaqueSierra::MoverArma(AArmaDN* Arma, float DeltaTime)
{
}

void AEstrategiaAtaqueSierra::Disparar(AArmaDN* Arma)
{
    if (Arma)
    {
        Arma1 = Arma;    
    
            
        bIsRotating = true; // Activar la rotación
        PrimaryActorTick.bCanEverTick = true; // Activar el tick
    
    }
}
