// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Components/StaticMeshComponent.h"
ANaveTanque::ANaveTanque() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaTanque.NaveEnemigaTanque"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	nombre = "Nave Tanque";
    vida += 100;
}
void ANaveTanque::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}

void ANaveTanque::BeginPlay()
{
    Super::BeginPlay();
    mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveTanque::OnProjectileHit);
}


void ANaveTanque::Mover(float DeltaTime) {
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

void ANaveTanque::Disparar() {

}
void ANaveTanque::MBlindaje() {

}
//void ANaveTanque::OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
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