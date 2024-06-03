// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiasArmasJugador.h"
#include "EstrategiaAtaqueSierra.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstrategiaAtaqueSierra : public AActor, public IEstrategiasArmasJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaAtaqueSierra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool bIsRotating;
	AArmaDN* Arma1;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar(class AArmaDN* Arma) override;	
	virtual void MoverArma(class AArmaDN* Arma, float DeltaTime) override;
};
