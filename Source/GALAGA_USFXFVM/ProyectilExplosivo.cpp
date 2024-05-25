// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilExplosivo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NaveCaza.h"
AProyectilExplosivo::AProyectilExplosivo()
{
    //inicializar tick
    PrimaryActorTick.bCanEverTick = true;
    // Habilitar gravedad para el proyectil
    if (ProjectileMovement)
    {

        ProjectileMovement->InitialSpeed = 100.f;
        ProjectileMovement->MaxSpeed = 300.f;
        InitialLifeSpan = 10.0f;
		DanioCausado = DanioPredeterminado*2;
    }

}
void AProyectilExplosivo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    float DistanceTraveled = FVector::Distance(FVector(0, 0, 0), GetActorLocation());

    // Si la distancia recorrida es mayor que 300.0f, invertir la velocidad para hacer que el proyectil vuelva
    if (DistanceTraveled > 1000.0f)
    {
        TArray<AActor*> NavesCazaEnemigas;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveCaza::StaticClass(), NavesCazaEnemigas);

        for (AActor* ANaveCaza : NavesCazaEnemigas)
        {
            if (ANaveCaza)
            {
                ANaveCaza->Destroy();
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Naves destruidos por explosion"));
            }
        }


    }
}

void AProyectilExplosivo::Explotar()
{
       
}
