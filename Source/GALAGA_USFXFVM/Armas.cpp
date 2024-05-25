// Fill out your copyright notice in the Description page of Project Settings.


#include "Armas.h"

// Sets default values
AArmas::AArmas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT(" StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    // Crea la malla de nave enemiga
    mallaArma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    mallaArma->SetStaticMesh(ShipMesh.Object);
    mallaArma->SetupAttachment(RootComponent);
    RootComponent = mallaArma;
  

}

// Called when the game starts or when spawned
void AArmas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

