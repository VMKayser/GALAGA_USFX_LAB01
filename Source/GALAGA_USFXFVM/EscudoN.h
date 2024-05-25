// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escudos.h"
#include "EscudoN.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API AEscudoN : public AEscudos
{
	GENERATED_BODY()
public:
	AEscudoN();
	virtual void Tick(float DeltaTime);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
protected:
	virtual void TiempoEscudo();
	virtual void DestruirEscudo();
private:
	FTimerHandle TimerHandle_ShotTimerExpired;
};
