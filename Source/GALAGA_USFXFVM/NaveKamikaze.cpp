// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveKamikaze.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Components/StaticMeshComponent.h"
ANaveKamikaze::ANaveKamikaze() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaKamikaze.NaveEnemigaKamikaze"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}
void ANaveKamikaze::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}

void ANaveKamikaze::BeginPlay()
{
    Super::BeginPlay();
    mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveKamikaze::OnProjectileHit);
}

void ANaveKamikaze::Mover(float DeltaTime) {
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

void ANaveKamikaze::Disparar() {

}
void ANaveKamikaze::Explotar() {

}
//void ANaveKamikaze::OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
//{
//
//    // Verificar si el otro actor es un proyectil
//    if (OtherActor && OtherActor->IsA(AGALAGA_USFXFVMProjectile::StaticClass()))
//    {
//        AGALAGA_USFXFVMProjectile* Projectile = Cast<AGALAGA_USFXFVMProjectile>(OtherActor);
//        if (Projectile)
//        {
//            DanioRecibido = Projectile->GetDanioCausado();
//        }
//        vida -= DanioRecibido;
//        if (vida <= 0)
//        {
//            Destroy();
//        }
//    }
//
//}