// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstadoNaveJugador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstadoNaveJugador : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFXFVM_API IEstadoNaveJugador
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Funciones puras virtuales que los estados deben implementar
	virtual void Disparar() = 0;
	virtual void Activar() = 0;
	virtual void Desactivar() = 0;
	virtual void VolverEstadoBase() = 0;
	virtual void SetNaveJugador(class AGALAGA_USFXFVMPawn* NaveJugador) = 0;

};
