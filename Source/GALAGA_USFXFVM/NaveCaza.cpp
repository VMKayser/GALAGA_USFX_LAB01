// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"
#include "FabricaDeNaves.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ANaveCaza::ANaveCaza() {
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Configurar la malla de la nave caza (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaCaza.NaveEnemigaCaza"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

   
	nombre = "Nave Caza";
    bCanFire = true;
    projectileSpawn = FVector(90.f, 0.f, 0.f); // Puedes ajustar la posición inicial del arma si es necesario
}

void ANaveCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    Disparar();
}
void ANaveCaza::BeginPlay()
{
	Super::BeginPlay();
    mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveCaza::OnProjectileHit); 
}
void ANaveCaza::Disparar()
{
    if (capacidadMunicion > 0 &&bCanFire) {
       
        
			capacidadMunicion--;
            // Obtener la rotación de disparo (hacia adelante a lo largo del eje X)
            const FRotator FireRotation = (-GetActorForwardVector()).Rotation();
            // Obtener la ubicación de disparo (desde la posición del Pawn con un desplazamiento)
            const FVector SpawnLocation = GetActorLocation() - GetActorForwardVector() * projectileSpawn.X;

            UWorld* const World = GetWorld();
            if (World != nullptr)
            {
                // Generar el proyectil
                AGALAGA_USFXFVMProjectile* Projectile = World->SpawnActor<AGALAGA_USFXFVMProjectile>(SpawnLocation, FireRotation);
                // Establecer el temporizador para el próximo disparo
                World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveCaza::ShotTimerExpired, 0.2f);
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
            GetWorld()->GetTimerManager().SetTimer(TimerHandle_Recarga, this, &ANaveCaza::Recargar, 5.0f, false);
        }
     
        
    }

}
void ANaveCaza::Recargar() {
    // Recargar la munición
    capacidadMunicion = 5;
    bIsReloading = false;
    
}

void ANaveCaza::ShotTimerExpired()
{
    bCanFire = true;
}
void ANaveCaza::plusFormacionNave() {
    // Obtener todas las naves caza enemigas en el mapa
    TArray<AActor*> NavesCazaEnemigas;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveCaza::StaticClass(), NavesCazaEnemigas);

    // Excluir la nave actual de la lista de naves caza enemigas
    NavesCazaEnemigas.Remove(this);

    // Obtener el número total de naves caza enemigas en el mapa
    int NumNavesCazaEnemigas = NavesCazaEnemigas.Num();

    // Calcular el bono total basado en el número de naves caza enemigas en el mapa
    plusFormacion = NumNavesCazaEnemigas * 0.2f;

    // Aplicar el bono total a todas las características de la nave actual
    vida += plusFormacion;
    danoProducido += plusFormacion;
    cadenciaDisparo -= plusFormacion/2 ;
    velocidad += plusFormacion;
}






void ANaveCaza::Mover(float DeltaTime) {
    /* Calcula la nueva posición restando la velocidad de la nave
    FVector NewLocation = FVector(GetActorLocation().X - (1.75f * DeltaTime), GetActorLocation().Y, GetActorLocation().Z);

    // Establece la nueva posición
    SetActorLocation(NewLocation);

    // Verifica si la nave ha salido del límite izquierdo
    if (GetActorLocation().X < -1800) {
        // Si sale del límite, reposiciona la nave en el lado derecho
        SetActorLocation(FVector(0.0f, 0.0f, 250.0f));
    }*/
}