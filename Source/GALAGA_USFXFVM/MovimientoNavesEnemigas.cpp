// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNavesEnemigas.h"

// Sets default values for this component's properties
UMovimientoNavesEnemigas::UMovimientoNavesEnemigas()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	SigMovimientoX= 0.5f;
	SigMovimientoY = 5.0f;
	bMovimientoDerecha = true;
	bMovimientoArriba = true;
}


// Called when the game starts
void UMovimientoNavesEnemigas::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoNavesEnemigas::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	if (Parent)
	{
		// Encuentra una nueva posición para que vaya el objeto
		auto NENuevaPosicion = Parent->GetActorLocation() + FVector(bMovimientoArriba ?  -SigMovimientoX: 0.0f, // Esto siempre suma 0 a la componente X
			bMovimientoDerecha ? SigMovimientoY : -SigMovimientoY, 0.0f);

		//Actualiza la posición del objeto
		Parent->SetActorLocation(NENuevaPosicion);
		//FVector Movimiento = FVector(bMovimientoArriba ? MovimientoSig : -MovimientoSig,
			//bMovimientoArriba ? MovimientoSig : -MovimientoSig, 0.0f);
		if (bMovimientoArriba && GetOwner()->GetActorLocation().X <= 700.0f)
		{
			bMovimientoArriba = false;
	
		}
		else if (!bMovimientoArriba && GetOwner()->GetActorLocation().X >= 1900.0f)
		{
			bMovimientoArriba = true;
		}
		if (bMovimientoDerecha && GetOwner()->GetActorLocation().Y >= 1800.0f)
		{
			bMovimientoDerecha = false;
		
		}
		else if (!bMovimientoDerecha && GetOwner()->GetActorLocation().Y <= -1800.0f)
		{
			bMovimientoDerecha = true;
		}
		//Parent->SetActorLocation(Movimiento);
	}
}

