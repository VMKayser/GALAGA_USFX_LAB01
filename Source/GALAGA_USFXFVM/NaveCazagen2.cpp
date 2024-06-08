// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCazagen2.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"




ANaveCazagen2::ANaveCazagen2() {
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Configurar la malla de la nave caza (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaCaza.NaveEnemigaCaza"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
   /* vida = 0;
    velocidad = 0;
    cadenciaDisparo = 4;
    danoProducido = 0;
    capacidadMunicion = 5;
    experiencia = 0;*/
    nombre = "Nave Caza gen2";
    bCanFire = true;
    projectileSpawn = FVector(90.f, 45.f, 0.f); // Puedes ajustar la posición inicial del arma si es necesario
}

void ANaveCazagen2::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
   /* Disparar();*/

}

void ANaveCazagen2::Disparar()
{
    if (capacidadMunicion > 0 && bCanFire) {


        capacidadMunicion--;
        // Obtener la rotación de disparo (hacia adelante a lo largo del eje X)
        const FRotator FireRotation = (-GetActorForwardVector()).Rotation();
        // Obtener la ubicación de disparo (desde la posición del Pawn con un desplazamiento)
        const FVector SpawnLocation = GetActorLocation() - GetActorForwardVector() * projectileSpawn.X ;
        const FVector SpawnLocation2 = GetActorLocation() - GetActorForwardVector() * projectileSpawn.X + GetActorRightVector() * projectileSpawn.Y;
        const FVector SpawnLocation3 = GetActorLocation() - GetActorForwardVector() * projectileSpawn.X - GetActorRightVector() * projectileSpawn.Y;
        UWorld* const World = GetWorld();
        if (World != nullptr)
        {
            // Generar el proyectil
            AGALAGA_USFXFVMProjectile* Projectile = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);
            AGALAGA_USFXFVMProjectile* Projectile2 = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation2, FireRotation);
            AGALAGA_USFXFVMProjectile* Projectile3 = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation3, FireRotation);
            // Establecer el temporizador para el próximo disparo
            World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveCazagen2::ShotTimerExpired, 0.2f);
            // Evitar disparar repetidamente
            bCanFire = false;
        }

    }
    else if (capacidadMunicion <= 0)
    {
        if (!bIsReloading)
        {
            // Si no se está recargando, comenzar el proceso de recarga
            bIsReloading = true;
            FTimerHandle TimerHandle_Recarga;
            GetWorld()->GetTimerManager().SetTimer(TimerHandle_Recarga, this, &ANaveCazagen2::Recargar, 5.0f, false);
        }


    }

}
void ANaveCazagen2::Recargar() {
    // Recargar la munición
    capacidadMunicion = 5;
    bIsReloading = false;

}