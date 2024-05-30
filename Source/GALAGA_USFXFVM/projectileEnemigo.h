// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "projectileEnemigo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API AprojectileEnemigo : public AGALAGA_USFXFVMProjectile
{
	GENERATED_BODY()

public:
	// Constructor
	AprojectileEnemigo();
	virtual void Tick(float DeltaTime) override;
protected:
	//define el collision component



};
