// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstrategiasArmasJugador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategiasArmasJugador : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFXFVM_API IEstrategiasArmasJugador
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Disparar(class AArmaDN* Arma) = 0;
	virtual void MoverArma(class AArmaDN* Arma, float DeltaTime) = 0;

};
