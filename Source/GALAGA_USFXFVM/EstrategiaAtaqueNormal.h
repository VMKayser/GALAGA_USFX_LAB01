// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiasArmasJugador.h"
#include "EstrategiaAtaqueNormal.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstrategiaAtaqueNormal : public AActor, public IEstrategiasArmasJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaAtaqueNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool bCanFire = true;
	void ShotTimerExpired();
	FTimerHandle TimerHandle_ShotTimerExpired;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar(class AArmaDN* Arma) override;
	virtual void MoverArma(class AArmaDN* Arma, float DeltaTime) override;

};
