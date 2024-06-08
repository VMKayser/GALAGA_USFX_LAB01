// Fill out your copyright notice in the Description page of Project Settings.


#include "CompositeNavesEnemigasClase.h"

// Sets default values
ACompositeNavesEnemigasClase::ACompositeNavesEnemigasClase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACompositeNavesEnemigasClase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACompositeNavesEnemigasClase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACompositeNavesEnemigasClase::Mover(float DeltaTime)
{
  for (auto& Nave : Naves)
{
    if (Nave)
    {
        Nave->Mover(DeltaTime);
    }
}
}

void ACompositeNavesEnemigasClase::Mover1(float DeltaTime)
{
    for (auto& Nave : Naves)
    {
        if (Nave)
        {
            Nave->Mover1(DeltaTime);
        }
    }
}

void ACompositeNavesEnemigasClase::Disparar()
{
    for (auto& Nave : Naves)
    {
        if (Nave)
        {
            Nave->Disparar();
        }
    }
}

void ACompositeNavesEnemigasClase::SetPadre(TScriptInterface<ICompositeNavesEnemigas> NuevoPadre)
{
    Padre = NuevoPadre;
}

TScriptInterface<ICompositeNavesEnemigas> ACompositeNavesEnemigasClase::GetPadre() const
{
    return Padre;
}

void ACompositeNavesEnemigasClase::AgregarNave(TScriptInterface<ICompositeNavesEnemigas> Nave)
{
    Naves.Add(Nave);
    Nave->SetPadre(this);
}

void ACompositeNavesEnemigasClase::EliminarNave(TScriptInterface<ICompositeNavesEnemigas> Nave)
{
    Naves.Remove(Nave);
    Nave->SetPadre(nullptr);
}

