// Copyright Epic Games, Inc. All Rights Reserved.
#include "GALAGA_USFXFVMGameMode.h"
#include "GALAGA_USFXFVMPawn.h"
#include "NaveEnemiga.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "MenuWidget.h"
#include "NaveNodrizaDirector.h"
#include "InstanciaJuegoNivel.h"
#include "PublicadorVidaJugador.h"
#include "PantallaFinDeJuego.h"
#include "GameFramework/PlayerController.h"




AGALAGA_USFXFVMGameMode::AGALAGA_USFXFVMGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFXFVMPawn::StaticClass();

	// Creamos un nuevo objeto de AFabricaDeNaves y lo asignamos a la variable FabricaDeNaves
	

	FacadeDificultadJuego = CreateDefaultSubobject<UFacadeDificultadJuego>(TEXT("FacadeDificultadJuego"));
	
}
void AGALAGA_USFXFVMGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGALAGA_USFXFVMGameMode::BeginPlay()
{
	Super::BeginPlay();
	DificultadJuego();
	APublicadorVidaJugador* pub = nullptr;

	pub = GetWorld()->SpawnActor<APublicadorVidaJugador>(FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	APantallaFinDeJuego* pant = nullptr;
	pant = GetWorld()->SpawnActor<APantallaFinDeJuego>(FVector(10.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	
}



void AGALAGA_USFXFVMGameMode::DificultadJuego()
{
	UInstanciaJuegoNivel* InstanciaJuegoNivel = Cast<UInstanciaJuegoNivel>(GetWorld()->GetGameInstance());
	if (InstanciaJuegoNivel && FacadeDificultadJuego)
	{
		FacadeDificultadJuego->SetDificultad(InstanciaJuegoNivel->DificultadJuego);
		
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Dificultad Jueasdfasfdasfgo"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("No se pudo obtener la instancia del juego"));
	}
}





