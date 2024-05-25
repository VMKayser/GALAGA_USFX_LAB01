// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Armas.h"

#include "ArmaDN.generated.h"
/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API AArmaDN : public AArmas
{
	GENERATED_BODY()
public:
	AArmaDN();
	virtual void Tick(float DeltaTime);
protected:
	virtual void Disparar();
	virtual void Recargar();
	virtual void ShotTimerExpired();
private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;
	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;


};
