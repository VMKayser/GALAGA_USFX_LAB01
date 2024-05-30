// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveKamikaze.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "PublicadorVidaJugador.h"
#include "GALAGA_USFXFVMPawn.h"
#include "Kismet/GameplayStatics.h"
ANaveKamikaze::ANaveKamikaze() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaKamikaze.NaveEnemigaKamikaze"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    band = false;
}
void ANaveKamikaze::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    tpersecucion = 1000.0f;
    if (band)
    {
        Explotar();
    }
}

void ANaveKamikaze::BeginPlay()
{
    Super::BeginPlay();
    mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveKamikaze::OnProjectileHit);
    PublicadorVidaJugador = Cast<APublicadorVidaJugador>(UGameplayStatics::GetActorOfClass(GetWorld(), APublicadorVidaJugador::StaticClass()));
    if (PublicadorVidaJugador)
    {
        PublicadorVidaJugador->Suscribir(this);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("El publicador de vida del jugador no existe"));
    }
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
    AGALAGA_USFXFVMPawn* PlayerPawn = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (PlayerPawn)
    {
        // Calcular la dirección hacia el jugador
        FVector Direction = PlayerPawn->GetActorLocation() - GetActorLocation();
        Direction.Normalize();

        // Mover la nave kamikaze hacia el jugador
        SetActorLocation(GetActorLocation() + Direction * tpersecucion * GetWorld()->GetDeltaSeconds());
    }
}


void ANaveKamikaze::Actualizar(APublicadorEventos* PublicadorEventos)
{
    APublicadorVidaJugador* PublicadorVida = Cast<APublicadorVidaJugador>(PublicadorEventos);
    if (PublicadorVida)
    {
        float VidaJugador = PublicadorVida->GetVidaJugador();
        if (VidaJugador == 50.0f)
        {
            // Obtener la referencia al jugador
            band = true;
            DestruirSubscripcion();
        }
    }
}


void ANaveKamikaze::DestruirSubscripcion()
{
    if (PublicadorVidaJugador)
    {
        PublicadorVidaJugador->Desuscribir(this);
    }
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