// Fill out your copyright notice in the Description page of Project Settings.
#include "NaveEnemiga.h"
#include "GALAGA_USFXFVMProjectile.h"

// Sets default values
USistemaPuntuacionComponente* ANaveEnemiga::SharedSistemaPuntuacionComponente = nullptr;
ANaveEnemiga::ANaveEnemiga()
{
    
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    // Crea la malla de nave enemiga
    mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    mallaNaveEnemiga->SetupAttachment(RootComponent);
    RootComponent = mallaNaveEnemiga;
    // Crea el movimiento de las naves enemigas
    MovimientoNavesEnemigas = CreateDefaultSubobject<UMovimientoNavesEnemigas>(TEXT("MovimientoNavesEnemigas"));
	// Crea el componente de puntuación
	
    if (!SharedSistemaPuntuacionComponente)
    {
        SharedSistemaPuntuacionComponente = CreateDefaultSubobject<USistemaPuntuacionComponente>(TEXT("SistemaPuntuacionComponente"));
        UE_LOG(LogTemp, Warning, TEXT("USistemaPuntuacionComponente instance created."));
    }
    // Assign the shared instance to this enemy ship's component


	nombre = "Nave Enemiga";

}
// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ANaveEnemiga::OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

    // Verificar si el otro actor es un proyectil
    if (OtherActor && OtherActor->IsA(AGALAGA_USFXFVMProjectile::StaticClass()))
    {
        AGALAGA_USFXFVMProjectile* Projectile = Cast<AGALAGA_USFXFVMProjectile>(OtherActor);
        if (Projectile)
        {
            DanioRecibido = Projectile->GetDanioCausado();
        }
        vida -= DanioRecibido;
        if (vida <= 0)
        {
            Destroy();
            if (SharedSistemaPuntuacionComponente)
            {
                SharedSistemaPuntuacionComponente->SumarPuntaje(10.0f, nombre);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("SistemaPuntuacionComponente is null!"));
            }
        }
    }

}