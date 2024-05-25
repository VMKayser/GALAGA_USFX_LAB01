// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodrizaDirector.h"
#include "NaveNodriza.h"

// Sets default values
ANaveNodrizaDirector::ANaveNodrizaDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveNodrizaDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodrizaDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveNodrizaDirector::SetBuilderNaveNodriza(AActor* Builder)
{
	BuilderNaveNodriza = Cast<IBuilderNaveNodriza>(Builder);
	if (!BuilderNaveNodriza)
	{
		UE_LOG(LogTemp, Error, TEXT("BuilderNaveNodriza is NULL"));
		return;
	}
}


void ANaveNodrizaDirector::ConstruirNaveNodriza(const TMap<FString, int32>& TiposDeArma, const TMap<FString, int32>& TiposDeEscudo, FVector NNSpawnLocation)
{
	if (!BuilderNaveNodriza)
	{
		UE_LOG(LogTemp, Error, TEXT("BuilderNaveNodriza is NULL"));
		return;
	}

	BuilderNaveNodriza->SetSpawnLocation(NNSpawnLocation);
	// Construir el arma y el escudo con los tipos especificados
	BuilderNaveNodriza->ConstruirArma(TiposDeArma,NNSpawnLocation);
	BuilderNaveNodriza->ConstruirEscudo(TiposDeEscudo,NNSpawnLocation);
	UE_LOG(LogTemp, Log, TEXT("Arma agregada a la nave nodriza"));

}



ANaveNodriza* ANaveNodrizaDirector::GetNaveNodriza()
{
	if (!BuilderNaveNodriza)
	{
		UE_LOG(LogTemp, Error, TEXT("BuilderNaveNodriza is NULL"));
		return nullptr;
	}
	return BuilderNaveNodriza->GetNaveNodriza();
}
