// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "NaveCazagen2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveCazagen2 : public ANaveCaza
{
	GENERATED_BODY()
public:
	ANaveCazagen2();
	virtual void Tick(float DeltaTime);
	virtual void Recargar() override;
	virtual void Disparar() override;
	
};
