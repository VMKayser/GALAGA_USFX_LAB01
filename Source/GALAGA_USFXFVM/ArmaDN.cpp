#include "ArmaDN.h"
#include "Components/StaticMeshComponent.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "ProyectilExplosivo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PublicadorVidaJugador.h"
#include "Engine/StaticMesh.h"
#include "EstrategiaAtaqueExplosivo.h"
#include "EstrategiaAtaqueEscudo.h"	
#include "EstrategiaAtaqueNormal.h"
#include "EstrategiaAtaqueSierra.h"



AArmaDN::AArmaDN() {
    // Configurar la malla del arma (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaArma->SetStaticMesh(ShipMesh.Object);
}

void AArmaDN::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
	
	if (Estrategia)
		{
		Estrategia->MoverArma(this, DeltaTime);
		Estrategia->Disparar(this);
	}
    // Llamar al método Disparar() en cada tick para disparar continuamente
    
}

void AArmaDN::BeginPlay()
{
	Super::BeginPlay();
	// Suscribirse al publicador de vida del jugador
	PublicadorVidaJugador = Cast<APublicadorVidaJugador>(UGameplayStatics::GetActorOfClass(GetWorld(), APublicadorVidaJugador::StaticClass()));
	if (PublicadorVidaJugador)
	{
		PublicadorVidaJugador->Suscribir(this);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("El publicador de vida del jugador no existe"));
	}
	EstrategiaEscudo = GetWorld()->SpawnActor<AEstrategiaAtaqueEscudo>(AEstrategiaAtaqueEscudo::StaticClass());
	EstrategiaExplosivo = GetWorld()->SpawnActor<AEstrategiaAtaqueExplosivo>(AEstrategiaAtaqueExplosivo::StaticClass());
	EstrategiaNormal = GetWorld()->SpawnActor<AEstrategiaAtaqueNormal>(AEstrategiaAtaqueNormal::StaticClass());
	EstrategiaSierra = GetWorld()->SpawnActor<AEstrategiaAtaqueSierra>(AEstrategiaAtaqueSierra::StaticClass());
	SetEstrategia(EstrategiaNormal);
}


void AArmaDN::Actualizar(APublicadorEventos* PublicadorEventos)
{
	/*APublicadorVidaJugador* PublicadorVida = Cast<APublicadorVidaJugador>(PublicadorEventos);
	if (PublicadorVida) {
		float VidaJugador = PublicadorVida->GetVidaJugador();

		if (VidaJugador == 60.0f)
		{
			band2 = true;
		}
		else if (VidaJugador == 50.0f)
		{
			band = true;
		}*/
}





void AArmaDN::DestruirSubscripcion()
{
	if (PublicadorVidaJugador)
	{
		PublicadorVidaJugador->Desuscribir(this);
	}
}

void AArmaDN::CambiarMalla(UStaticMesh* MallaNueva)
{
	if (MallaNueva)
	{
		mallaArma->SetStaticMesh(MallaNueva);
		
	}
}


void AArmaDN::CambiarEstrategia(int32 NumeroEstrategia)
{
	switch (NumeroEstrategia)
	{
	case 1:
		SetEstrategia(EstrategiaEscudo);
		break;
	case 2:
		SetEstrategia(EstrategiaExplosivo);
		break;
	case 3:
		SetEstrategia(EstrategiaNormal);
		break;
	case 4:
		SetEstrategia(EstrategiaSierra);
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Número de estrategia no válido"));
		return;
	}

}

void AArmaDN::SetEstrategia(AActor* EstrategiaActual)
{
	Estrategia = Cast<IEstrategiasArmasJugador>(EstrategiaActual);
	if (!Estrategia)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("La estrategia no es válida"));
	}

}






//prueba para varias arams
//void AGALAGA_USFXFVMPawn::CambiarEstrategia4()
//{
//	TArray<AActor*> ArmasJugador;
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArmaDN::StaticClass(), ArmasJugador);
//
//	for (AActor* ArmaActor : ArmasJugador)
//	{
//		AArmaDN* ArmaJugador = Cast<AArmaDN>(ArmaActor);
//		if (ArmaJugador)
//		{
//			ArmaJugador->CambiarEstrategia(4);
//		}
//	}
//}