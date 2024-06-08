// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Components/StaticMeshComponent.h"
ANaveTanque::ANaveTanque() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/NaveEnemigaTanque.NaveEnemigaTanque"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	nombre = "Nave Tanque";
    vida += 100;

    Amplitud = 1000.0f; // La distancia total que recorrerá la nave (de 900 a -900)
    Frecuencia = 0.5f; // Ajusta esta frecuencia para cambiar la velocidad del movimiento
    TiempoAcumulado = 0.0f;
}
void ANaveTanque::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

void ANaveTanque::BeginPlay()
{
    Super::BeginPlay();
    mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveTanque::OnProjectileHit);
	PosicionInicial = GetActorLocation();
    Movimiento = PosicionInicial;
}

void ANaveTanque::Mover(float DeltaTime) {
    TiempoAcumulado += DeltaTime;

    // Calcula la nueva posición usando una función de onda triangular
    Movimiento = PosicionInicial;
    float TriangularWave = FMath::Abs(FMath::Fmod(TiempoAcumulado * Frecuencia, 2.0f) - 1.0f);
    Movimiento.X -= Amplitud * TriangularWave * 2.0f;

    SetActorLocation(Movimiento);
}

void ANaveTanque::Mover1(float DeltaTime)
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

void ANaveTanque::Disparar() {

}


void ANaveTanque::SetPadre(TScriptInterface<ICompositeNavesEnemigas> NuevoPadre)
{
    Padre = NuevoPadre;
}

TScriptInterface<ICompositeNavesEnemigas> ANaveTanque::GetPadre() const
{
    return Padre;
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