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



AArmaDN::AArmaDN() {
    // Configurar la malla del arma (asegúrate de que ShipMesh tenga asignado el mesh correcto en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaArma->SetStaticMesh(ShipMesh.Object);
    // Configurar la velocidad y la munición
    SetVelocidad(0.2f); // Ajusta la velocidad según tus necesidades
    // Usamos un valor especial para representar munición infinita
	SetDireccion(FVector(90.f, 0.f, 0.f)); // Puedes ajustar la posición inicial del arma si es necesario
	SetMunicion(100);

	bCanFire = true;
	


	
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

	
	
}

void AArmaDN::Disparar()
{
	
}


void AArmaDN::ShotTimerExpired()
{
	bCanFire = true;
}

void AArmaDN::Recargar() {
	// Recargar la munición
	municion = 100;

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

		//if (VidaJugador == 60.0f) {
		//	// Cambiar a una estrategia más agresiva
		//	SetEstrategia(GetWorld()->SpawnActor<AEstrategiaSuicida>(AEstrategiaSuicida::StaticClass()));
		//	EjecutarEstrategia();
		//}
		//else if (VidaJugador == 70.0f) {
		//	// Cambiar a una estrategia defensiva
		//	SetEstrategia(GetWorld()->SpawnActor<AEstrategiaEscudo>(AEstrategiaEscudo::StaticClass()));
		//	EjecutarEstrategia();
		//}
		//else if (VidaJugador==80.0f)
		//{
		//	SetEstrategia(GetWorld()->SpawnActor<AEstrategiaJutsuMulticlones>(AEstrategiaJutsuMulticlones::StaticClass()));
		//	EjecutarEstrategia();
		//	// Mantener la estrategia actual
	//	//}
	//}
	

}

void AArmaDN::SetEstrategia(AActor* EstrategiaActual)
{
	Estrategia = Cast<IEstrategiasArmasJugador>(EstrategiaActual);
	if (!Estrategia)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("La estrategia no es válida"));
	}

}

void AArmaDN::EjecutarEstrategia()
{
	if (Estrategia) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Ejecutando Estrategia"));
		Estrategia->Disparar(this);
		

	}
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
		SetEstrategia(GetWorld()->SpawnActor<AEstrategiaAtaqueEscudo>(AEstrategiaAtaqueEscudo::StaticClass()));
		break;
	case 2:
		SetEstrategia(GetWorld()->SpawnActor<AEstrategiaAtaqueExplosivo>(AEstrategiaAtaqueExplosivo::StaticClass()));
		break;
	case 3:
		SetEstrategia(GetWorld()->SpawnActor<AEstrategiaAtaqueNormal>(AEstrategiaAtaqueNormal::StaticClass()));
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Número de estrategia no válido"));
		return;
	}

}
