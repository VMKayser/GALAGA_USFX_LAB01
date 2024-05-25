// ProyectilParabolico.cpp

#include "ProyectilParabolico.h"
#include "GameFramework/ProjectileMovementComponent.h"

AProyectilParabolico::AProyectilParabolico()
{
    //inicializar tick
    PrimaryActorTick.bCanEverTick = true;
    // Habilitar gravedad para el proyectil
    if (ProjectileMovement)
    {
       
        ProjectileMovement->InitialSpeed = 300.f;
        ProjectileMovement->MaxSpeed = 500.f;
        InitialLifeSpan = 10.0f;
    }
	DanioCausado += 3;
  
}
void AProyectilParabolico::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Calcular la distancia recorrida
    float DistanceTraveled = FVector::Distance(FVector(0,0,0), GetActorLocation());

    // Si la distancia recorrida es mayor que 300.0f, invertir la velocidad para hacer que el proyectil vuelva
    if (DistanceTraveled > 1000.0f)
    {
        // Invertir la velocidad multiplicando por -1
        ProjectileMovement->Velocity *= -1;
    }
}