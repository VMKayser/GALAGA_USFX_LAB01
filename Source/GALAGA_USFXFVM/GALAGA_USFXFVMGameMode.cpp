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
#include "ArmaDN.h"
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
	//APublicadorVidaJugador* pub;

	//pub = GetWorld()->SpawnActor<APublicadorVidaJugador>(APublicadorVidaJugador::StaticClass());
	APantallaFinDeJuego* pant = nullptr;
	pant = GetWorld()->SpawnActor<APantallaFinDeJuego>(FVector(10.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	//en funcion a la posicion de la nave jugador crear dos arma DN a su lado izquierdo y derecho
	//AGALAGA_USFXFVMPawn* PlayerPawn = Cast<AGALAGA_USFXFVMPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	//if (!PlayerPawn)
	//{
	//	return;
	//}
	//// Obtener la ubicación y rotación del pawn
	//FVector PawnLocation = PlayerPawn->GetActorLocation();
	//FRotator PawnRotation = PlayerPawn->GetActorRotation();
	//// Crear el arma DN a la izquierda del pawn
	//AArmaDN* ArmaIzquierda = GetWorld()->SpawnActor<AArmaDN>(PawnLocation - FVector(0, 100, 0), PawnRotation);
	//// Crear el arma DN a la derecha del pawn
	//if (ArmaIzquierda)
	//{
	//	// Asociar el arma DN a la nave jugador
	//	ArmaIzquierda->AttachToActor(PlayerPawn, FAttachmentTransformRules::SnapToTargetIncludingScale);
	//}
	//AArmaDN* ArmaDerecha = GetWorld()->SpawnActor<AArmaDN>(PawnLocation + FVector(0, 100, 0), PawnRotation);
	//if (ArmaDerecha)
	//{
	//	// Asociar el arma DN a la nave jugador
	//	ArmaDerecha->AttachToActor(PlayerPawn, FAttachmentTransformRules::SnapToTargetIncludingScale);
	//}


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





