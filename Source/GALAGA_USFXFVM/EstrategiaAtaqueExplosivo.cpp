#include "EstrategiaAtaqueExplosivo.h"
#include "ArmaDN.h"
#include "NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_USFXFVMPawn.h"

// Sets default values
AEstrategiaAtaqueExplosivo::AEstrategiaAtaqueExplosivo()
{
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstrategiaAtaqueExplosivo::BeginPlay()
{
    Super::BeginPlay();
   
}

// Called every frame
void AEstrategiaAtaqueExplosivo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEstrategiaAtaqueExplosivo::Disparar(AArmaDN* Arma)
{
    if (Arma)
    {
        // Ataque Explosivo
        TArray<AActor*> EnemigosCercanos;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemiga::StaticClass(), EnemigosCercanos);

        for (AActor* Enemigo : EnemigosCercanos)
        {
            if (Enemigo->GetDistanceTo(Arma) <= 50.0f)
            {
                Enemigo->Destroy();
            }
        }

        // Cambio de malla
      
        UStaticMesh* NuevaMalla1 = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
        Arma->CambiarMalla(NuevaMalla1);
    }
}


void AEstrategiaAtaqueExplosivo::MoverArma(AArmaDN* Arma, float DeltaTime)
{
    if (Arma)
    {
        AGALAGA_USFXFVMPawn* Jugador = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
        FVector PosicionActual = Arma->GetActorLocation();

        if (Jugador)
        {
            //regresamos la escalainicial de ser necesario
            Arma->SetActorScale3D(FVector(1.0f,1.0f,1.0f));
            FVector PosicionJugador = Jugador->GetActorLocation();
            PosicionInicial = FVector(PosicionJugador.X, PosicionJugador.Y + 210.f, PosicionJugador.Z);

            FVector PosicionFinal = FVector(1800.f, PosicionInicial.Y, PosicionInicial.Z); // Posición final en X

            float Velocidad = 2000.f; // Velocidad de movimiento en unidades por segundo

            // Movimiento hacia adelante en el eje X
            if (PosicionActual.X < PosicionFinal.X && !bRegresando)
            {
                FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.f, 0.f);
                Arma->SetActorLocation(NuevaPosicion);

                // Si el arma ha llegado a la posición final en X, comenzar a regresar
                if (NuevaPosicion.X >= PosicionFinal.X)
                {
                    bRegresando = true;
                }
            }
            else if (bRegresando)
            {
                // Movimiento de regreso en el eje X e Y para volver al lado del jugador
                FVector DireccionRegreso = (PosicionInicial - PosicionActual).GetSafeNormal();
                FVector NuevaPosicion = PosicionActual + DireccionRegreso * Velocidad * DeltaTime;

                // Ajuste en el eje Z
                NuevaPosicion.Z = PosicionInicial.Z;

                Arma->SetActorLocation(NuevaPosicion);

                // Si el arma ha regresado a la posición inicial (ajustada), detener el movimiento
                if (FVector::DistSquared(NuevaPosicion, PosicionInicial) <= FMath::Square(Velocidad * DeltaTime))
                {
                    Arma->SetActorLocation(PosicionInicial);
                    bRegresando = false;
                }
            }
        }
    }
}

