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

    Amplitud = 1000.0f; // La distancia total que recorrerá la nave (de 900 a -900)
    Frecuencia = 0.5f; // Ajusta esta frecuencia para cambiar la velocidad del movimiento
    TiempoAcumulado = 0.0f;
}
void ANaveKamikaze::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
   
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
	PosicionInicial = GetActorLocation();
    Movimiento = PosicionInicial;
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
        if (VidaJugador == 40.0f)
        {
            // Obtener la referencia al jugador
            band = true;
            
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


void ANaveKamikaze::Mover(float DeltaTime) {
    TiempoAcumulado += DeltaTime;

    // Calcula la nueva posición usando una función de onda triangular
    Movimiento = PosicionInicial;
    float TriangularWave = FMath::Abs(FMath::Fmod(TiempoAcumulado * Frecuencia, 2.0f) - 1.0f);
    Movimiento.X -= Amplitud * TriangularWave * 2.0f;

    SetActorLocation(Movimiento);
}

void ANaveKamikaze::Mover1(float DeltaTime)
{
    // Radio de la circunferencia alrededor de la nave
    float Radio = 300.0f;

    // Incrementa el ángulo con el tiempo
    static float Angulo = 0.0f;
    Angulo += DeltaTime * 0.5f; // Ajustar la velocidad de rotación cambiando este valor

    // Calcula la nueva posición del arma
    FVector NuevaPosicion = Movimiento + FVector(FMath::Cos(Angulo) * Radio, FMath::Sin(Angulo) * Radio, 0.0f);

    // Establece la nueva posición del arma
    SetActorLocation(NuevaPosicion);
}


void ANaveKamikaze::Disparar() {

}


void ANaveKamikaze::SetPadre(TScriptInterface<ICompositeNavesEnemigas> NuevoPadre)
{
    Padre = NuevoPadre;
}

TScriptInterface<ICompositeNavesEnemigas> ANaveKamikaze::GetPadre() const
{
    return Padre;
}



/* Calcula la nueva posición restando la velocidad de la nave
FVector NewLocation = FVector(GetActorLocation().X - (1.75f * DeltaTime), GetActorLocation().Y, GetActorLocation().Z);

// Establece la nueva posición
SetActorLocation(NewLocation);

// Verifica si la nave ha salido del límite izquierdo
if (GetActorLocation().X < -1800) {
    // Si sale del límite, reposiciona la nave en el lado derecho
    SetActorLocation(FVector(0.0f, 0.0f, 250.0f));
}*/


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