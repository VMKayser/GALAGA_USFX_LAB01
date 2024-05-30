// FabricaDeNaves.cpp
#include "FabricaDeNaves.h"
#include "NaveCaza.h"
#include "NaveNodriza.h"
#include "NaveTanque.h"
#include "NaveTransporte.h"
#include "NaveKamikaze.h"
#include "NaveCazagen1.h"
#include "NaveCazagen2.h"
#include "InstanciaJuegoNivel.h"
#include "Kismet/GameplayStatics.h"
#include "PantallaFinDeJuego.h"

AFabricaDeNaves::AFabricaDeNaves()
{
    PrimaryActorTick.bCanEverTick = true;

}

void AFabricaDeNaves::BeginPlay()
{
    Super::BeginPlay();
}

void AFabricaDeNaves::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
void AFabricaDeNaves::GenerarNavesEnemigas(int32 CantidadNaves, int32 NumeroFilas, FVector NNSpawnLocation)
{
   
    FVector UbicacionInicial = FVector(600.0f, -550.0f, 0.0f+NNSpawnLocation.Z);
    FVector UbicacionFinal = UbicacionInicial;
	int32 NumeroColumnas = CantidadNaves / NumeroFilas;       
    for (int32 i = 0; i < CantidadNaves; i++)
    {
        GenerarNaveEnemiga(UbicacionFinal);
        UbicacionFinal.Y += 300.0f;

		if ((i+1)% NumeroColumnas == 0)
		{
            UbicacionFinal.X += 300.0f;
            UbicacionFinal.Y = UbicacionInicial.Y;
		}
        
       
    }
	//llamar al metodo plusFormacionNave luego de generar las naves
  
}



ANaveEnemiga* AFabricaDeNaves::GenerarNaveEnemiga(const FVector& UbicacionInicial)
{
    UInstanciaJuegoNivel* InstanciaJuego = Cast<UInstanciaJuegoNivel>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!InstanciaJuego)
    {
        return nullptr;
    }

    const FValoresNaveEnemiga& ValoresNaveEnemiga = InstanciaJuego->ValoresNaveEnemiga;
    UWorld* const World = GetWorld();
    if (!World)
    {

        return nullptr;
    }

    // Aquí puedes generar aleatoriamente el tipo de nave enemiga
    int TipoNave = FMath::RandRange(1, 5);

    ANaveEnemiga* NuevaNave = nullptr;

    switch (TipoNave)
    {
    case 1:
        NuevaNave = World->SpawnActor<ANaveCazagen1>(UbicacionInicial, FRotator::ZeroRotator);
		
        break;
    
    case 2:
        NuevaNave = World->SpawnActor<ANaveTanque>(UbicacionInicial, FRotator::ZeroRotator);
        break;
    case 3:
        NuevaNave = World->SpawnActor<ANaveTransporte>(UbicacionInicial, FRotator::ZeroRotator);
        break;
    case 4:
        NuevaNave = World->SpawnActor<ANaveKamikaze>(UbicacionInicial, FRotator::ZeroRotator);
        break;
    case 5:
        NuevaNave=World->SpawnActor<ANaveCazagen2>(UbicacionInicial, FRotator::ZeroRotator);
        break;
    default:
        break;
    }
    NuevaNave->SetVida(ValoresNaveEnemiga.VidaEnemigo);
	NuevaNave->SetVelocidad(ValoresNaveEnemiga.Velocidad);
	NuevaNave->SetDanoProducido(ValoresNaveEnemiga.Dano);
	NuevaNave->SetCadenciaDisparo(ValoresNaveEnemiga.CadenciaDisparo);
	NuevaNave->SetCapacidadMunicion(ValoresNaveEnemiga.CapacidadMunicion);
	NuevaNave->SetExperiencia(ValoresNaveEnemiga.Experiencia);
	NuevaNave->SetPosicion(UbicacionInicial);


    return NuevaNave;
}
