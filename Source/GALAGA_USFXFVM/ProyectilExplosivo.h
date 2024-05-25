// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "ProyectilExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API AProyectilExplosivo : public AGALAGA_USFXFVMProjectile
{
	GENERATED_BODY()
	

public:
	// Constructor
	AProyectilExplosivo();
	virtual void Tick(float DeltaTime) override;
protected:
	void Explotar();

};
