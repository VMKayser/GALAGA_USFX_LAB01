// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiasArmasJugador.h"
#include "EstrategiaAtaqueEscudo.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstrategiaAtaqueEscudo : public AActor, public IEstrategiasArmasJugador
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AEstrategiaAtaqueEscudo();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
 
    virtual void Tick(float DeltaTime) override;

    
    void Disparar(class AArmaDN* Arma);

    void MoverArma(class AArmaDN* Arma, float DeltaTime);


private:
    FVector PosicionInicial;
    bool bRegresando;
    void ShotTimerExpired();
    bool bCanFire;
    FTimerHandle TimerHandle_ShotTimerExpired;
};
