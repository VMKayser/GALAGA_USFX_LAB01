// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "Components/StaticMeshComponent.h"



ANaveNodriza::ANaveNodriza() {
	PrimaryActorTick.bCanEverTick = true;
        // Inicializa mallaNaveNodriza
        mallaNaveNodriza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

        // Configura la malla del componente
        static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
        if (ShipMesh.Succeeded())
        {
            mallaNaveNodriza->SetStaticMesh(ShipMesh.Object);
        }
        else
        {
            // Manejo de error si la carga de la malla falla
            UE_LOG(LogTemp, Error, TEXT("Failed to find static mesh for mallaNaveNodriza in ANaveNodriza constructor"));
        }
       
}
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();

}
void ANaveNodriza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveNodriza::Mover(float DeltaTime) {
    // Calcula la nueva posición restando la velocidad de la nave
    FVector NewLocation = FVector(GetActorLocation().X - (1.75f * DeltaTime), GetActorLocation().Y, GetActorLocation().Z);

    // Verifica si la nave ha salido del límite izquierdo
    if (GetActorLocation().X < -1800) {
        // Si sale del límite, reposiciona la nave en el lado derecho
        NewLocation = FVector(0.0f, 0.0f, 250.0f);
    }

    // Establece la nueva posición
    SetActorLocation(NewLocation);

    // Sincronizar el movimiento de las armas con el de la nave nodriza
    for (AArmas* Arma : armas)
    {
        if (Arma)
        {
            FVector NuevaPosicionArma = FVector(Arma->GetActorLocation().X - (1.75f * DeltaTime), Arma->GetActorLocation().Y, Arma->GetActorLocation().Z);
            // Obtenemos la posición relativa del arma con respecto a la nave nodriza
         
            // Establecemos la nueva posición del arma
            Arma->SetActorLocation(NuevaPosicionArma);
		
        }
    }
    /*
    for (AEscudos* Escudo : escudos)
    {
        if (Escudo)
        {
            FVector NuevaPosicionEscudo = FVector(Escudo->GetActorLocation().X - (1.75f * DeltaTime), Escudo->GetActorLocation().Y, Escudo->GetActorLocation().Z);
            // Obtenemos la posición relativa del arma con respecto a la nave nodriza

            // Establecemos la nueva posición del arma
            Escudo->SetActorLocation(NuevaPosicionEscudo);

        }
    }*/
}







void ANaveNodriza::SetEscudos(const TArray<AEscudos*>& NewEscudos)
{
    escudos = NewEscudos;
}

void ANaveNodriza::SetArmas(const TArray<AArmas*>& NewArmas)
{
    armas = NewArmas;
}
void ANaveNodriza::CaracteristicasNaveNodriza()
{
    
}
