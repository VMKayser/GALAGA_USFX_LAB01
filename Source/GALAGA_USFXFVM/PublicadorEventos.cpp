// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicadorEventos.h"
#include "SubscriptorEvento.h"


// Sets default values
APublicadorEventos::APublicadorEventos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Subscriptores = TArray<AActor*>();
}

// Called when the game starts or when spawned
void APublicadorEventos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicadorEventos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicadorEventos::Suscribir(AActor* Subscriptor)
{
	Subscriptores.Add(Subscriptor);
}

void APublicadorEventos::Desuscribir(AActor* Subscriptor)
{
	Subscriptores.Remove(Subscriptor);

}

void APublicadorEventos::Notificar()
{
	for (AActor* Subs : Subscriptores)
	{
		ISubscriptorEvento* Subscriptor = Cast<ISubscriptorEvento>(Subs);
		if (Subscriptor)
		{
			Subscriptor->Actualizar(this);
		}
	
	}
}

