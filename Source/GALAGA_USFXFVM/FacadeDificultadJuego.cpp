#include "FacadeDificultadJuego.h"
#include "NaveEnemiga.h"
#include "SistemaPuntuacionComponente.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "GALAGA_USFXFVMPawn.h"
#include "NaveNodrizaDirector.h"
#include "NaveNodrizaNiv1.h"
#include "InstanciaJuegoNivel.h"  // Incluye para acceder a UInstanciaJuegoNivel

UFacadeDificultadJuego::UFacadeDificultadJuego()
{
    FabricaDeNaves = CreateDefaultSubobject<AFabricaDeNaves>(TEXT("FabricaDeNaves"));
}

void UFacadeDificultadJuego::SetDificultad(int dificultadNivel)
{
    SetValoresJugador(dificultadNivel);
    FValoresNaveEnemiga ValoresNaveEnemiga;
    SetValoresEnemigos(dificultadNivel, ValoresNaveEnemiga);

    // Obtener la instancia de juego
    if (UInstanciaJuegoNivel* InstanciaJuego = Cast<UInstanciaJuegoNivel>(UGameplayStatics::GetGameInstance(GetWorld())))
    {
        InstanciaJuego->ValoresNaveEnemiga = ValoresNaveEnemiga;
    }

    SetValoresNivel(dificultadNivel, ValoresNaveEnemiga);
}

void UFacadeDificultadJuego::SetValoresJugador(int dificultadNivel)
{
    switch (dificultadNivel)
    {
    case 1:
        AGALAGA_USFXFVMProjectile::DanioPredeterminado = 10.0f;
        AGALAGA_USFXFVMPawn::VidaJugadorPredeterminada = 200.0f;
        break;
    case 2:
        AGALAGA_USFXFVMProjectile::DanioPredeterminado = 5.0f;
        AGALAGA_USFXFVMPawn::VidaJugadorPredeterminada = 200.0f;
        break;
    case 3:
        AGALAGA_USFXFVMProjectile::DanioPredeterminado = 15.0f;
        AGALAGA_USFXFVMPawn::VidaJugadorPredeterminada = 300.0f;
        break;
    default:
        AGALAGA_USFXFVMProjectile::DanioPredeterminado = 20.0f;
        AGALAGA_USFXFVMPawn::VidaJugadorPredeterminada = 400.0f;
        break;
    }
}

void UFacadeDificultadJuego::SetValoresEnemigos(int DificultadNivel, FValoresNaveEnemiga& ValoresNaveEnemiga)
{
    switch (DificultadNivel)
    {
    case 1:
        ValoresNaveEnemiga.VidaEnemigo = 100.0f;
        ValoresNaveEnemiga.Velocidad = 1000.0f;
        ValoresNaveEnemiga.Dano = 10.0f;
        ValoresNaveEnemiga.CadenciaDisparo = 1.0f;
        ValoresNaveEnemiga.CapacidadMunicion = 20;
        ValoresNaveEnemiga.Experiencia = 50.0f;
        break;
    case 2:
        ValoresNaveEnemiga.VidaEnemigo = 150.0f;
        ValoresNaveEnemiga.Velocidad = 1500.0f;
        ValoresNaveEnemiga.Dano = 20.0f;
        ValoresNaveEnemiga.CadenciaDisparo = 0.8f;
        ValoresNaveEnemiga.CapacidadMunicion = 15;
        ValoresNaveEnemiga.Experiencia = 75.0f;
        break;
    case 3:
        ValoresNaveEnemiga.VidaEnemigo = 200.0f;
        ValoresNaveEnemiga.Velocidad = 2000.0f;
        ValoresNaveEnemiga.Dano = 30.0f;
        ValoresNaveEnemiga.CadenciaDisparo = 0.6f;
        ValoresNaveEnemiga.CapacidadMunicion = 20;
        ValoresNaveEnemiga.Experiencia = 100.0f;
        break;
 
    }

}

void UFacadeDificultadJuego::SetValoresNivel(int dificultadNivel, const FValoresNaveEnemiga& ValoresNaveEnemiga)
{
    switch (dificultadNivel)
    {
    case 1:
        NumeroNaves = 5;
        NumeroFilas = 5;
        USistemaPuntuacionComponente::MultiplicadorPuntaje = 1.0f;
        break;
    UInstanciaJuegoNivel* InstanciaJuegoNivel = Cast<UInstanciaJuegoNivel>(GetWorld()->GetGameInstance());
    if (InstanciaJuegoNivel)
    {
        CrearNivel(InstanciaJuegoNivel->NumeroNivel); 

        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Dificultad Jueasdfasfdasfgo"));
    }
  
    
}
void UFacadeDificultadJuego::CrearNivel(int NumeroDelNivel)
{
    case 2:
        NumeroNaves = 10;
        NumeroFilas = 5;
        USistemaPuntuacionComponente::MultiplicadorPuntaje = 3.0f;
        break;
    case 3:
        NumeroNaves = 16;
        NumeroFilas = 2;
        USistemaPuntuacionComponente::MultiplicadorPuntaje = 4.0f;
        break;
    default:
        NumeroNaves = 10;
        NumeroFilas = 2;
        USistemaPuntuacionComponente::MultiplicadorPuntaje = 0.5f;
        break;
    }
    FVector NNSpawnLocation(0.0f, 0.0f, 250.0f);
    ANaveNodrizaNiv1* BuilderNaveNodriza;
    ANaveNodrizaDirector* DirectorNaveNodriza;
    TMap<FString, int32> TiposDeArma;
    TMap<FString, int32> TiposDeEscudo;
    switch (NumeroDelNivel)
    {
    case 1:
        // Nivel 1: 1 ronda y 1 nave nodriza
        if (FabricaDeNaves)
        {
            FabricaDeNaves->GenerarNavesEnemigas(NumeroNaves, NumeroFilas,  NNSpawnLocation);
        }

        BuilderNaveNodriza = GetWorld()->SpawnActor<ANaveNodrizaNiv1>();
        DirectorNaveNodriza = GetWorld()->SpawnActor<ANaveNodrizaDirector>();
        DirectorNaveNodriza->SetBuilderNaveNodriza(BuilderNaveNodriza);
        TiposDeArma.Add(TEXT("ArmaDNComponent"), 5);
        TiposDeEscudo.Add(TEXT("EscudoNComponent"), 5);
        DirectorNaveNodriza->ConstruirNaveNodriza(TiposDeArma, TiposDeEscudo, NNSpawnLocation);
        break;

    case 2:
        // Nivel 2: 3 rondas
        for (int32 Ronda = 0; Ronda < 2; ++Ronda)
        {
            NNSpawnLocation += FVector(0.0f, 0.0f, 100.0f);
            if (FabricaDeNaves)
            {
                FabricaDeNaves->GenerarNavesEnemigas(NumeroNaves, NumeroFilas, NNSpawnLocation);
            }
        }

      
        break;
    case 3:
        for (int32 Ronda = 0; Ronda < 3; ++Ronda)
        {
            NNSpawnLocation += FVector(0.0f, 0.0f, 100.0f);
            if (FabricaDeNaves)
            {
                FabricaDeNaves->GenerarNavesEnemigas(NumeroNaves, NumeroFilas, NNSpawnLocation);
            }
        }
        for (int32 NaveNodrizaIndex = 0; NaveNodrizaIndex < 2; ++NaveNodrizaIndex)
        {
            FVector Offset(200.0f, 500.0f, 0.0f);
            BuilderNaveNodriza = GetWorld()->SpawnActor<ANaveNodrizaNiv1>();
            DirectorNaveNodriza = GetWorld()->SpawnActor<ANaveNodrizaDirector>();
            DirectorNaveNodriza->SetBuilderNaveNodriza(BuilderNaveNodriza);
            TiposDeArma.Add(TEXT("ArmaDNComponent"), 2);
            TiposDeEscudo.Add(TEXT("EscudoNComponent"), 2);
            DirectorNaveNodriza->ConstruirNaveNodriza(TiposDeArma, TiposDeEscudo, NNSpawnLocation + Offset);
        }
        break;


    default:
        // Configuración de nivel por defecto
        if (FabricaDeNaves)
        {
            FabricaDeNaves->GenerarNavesEnemigas(NumeroNaves, NumeroFilas, NNSpawnLocation);
        }
        break;
    }
}
