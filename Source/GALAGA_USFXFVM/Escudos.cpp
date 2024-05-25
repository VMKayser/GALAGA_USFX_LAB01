// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudos.h"

// Sets default values
AEscudos::AEscudos()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));
    // Crea la malla de nave enemiga
    mallaEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    mallaEscudo->SetStaticMesh(ShipMesh.Object);
    mallaEscudo->SetupAttachment(RootComponent);
    RootComponent = mallaEscudo;


}

// Called when the game starts or when spawned
void AEscudos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

