// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoN.h"
#include "Components/StaticMeshComponent.h"

AEscudoN::AEscudoN() {
    // Configurar la malla del arma (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
    mallaEscudo->SetStaticMesh(ShipMesh.Object);
    SetTiempo(10.0f);
   
}

void AEscudoN::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
	
}
void AEscudoN::BeginPlay()
{
	Super::BeginPlay();
	TiempoEscudo();
}
void AEscudoN::TiempoEscudo()
{
    // Destruir el escudo después de un tiempo determinado
    FTimerHandle TimerHandle_Destruir;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Destruir, this, &AEscudoN::DestruirEscudo, tiempo, false);
}

void AEscudoN::DestruirEscudo()
{
    // Destruir el escudo
    Destroy();
}
