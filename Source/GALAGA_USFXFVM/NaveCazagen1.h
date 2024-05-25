// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "NaveCazagen1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveCazagen1 : public ANaveCaza
{
	GENERATED_BODY()
public:
	ANaveCazagen1();
	virtual void Tick(float DeltaTime);
protected:
	virtual void BeginPlay() override;
	virtual void Disparar() override;
	virtual void Recargar() override;

};
