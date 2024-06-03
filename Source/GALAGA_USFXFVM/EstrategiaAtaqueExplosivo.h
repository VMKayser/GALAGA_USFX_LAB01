// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiasArmasJugador.h"
#include "EstrategiaAtaqueExplosivo.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstrategiaAtaqueExplosivo: public AActor, public IEstrategiasArmasJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaAtaqueExplosivo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AArmaDN* Arma1;
	bool bRegresando = false;
	FVector PosicionInicial;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar(class AArmaDN* Arma) override;
	virtual void MoverArma(class AArmaDN* Arma, float DeltaTime) override;
	

};
