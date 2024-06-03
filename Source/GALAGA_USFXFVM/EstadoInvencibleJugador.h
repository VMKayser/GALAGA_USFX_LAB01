// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoNaveJugador.h"
#include "EstadoInvencibleJugador.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstadoInvencibleJugador : public AActor, public IEstadoNaveJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoInvencibleJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Funciones puras virtuales que los estados deben implementar
	virtual void Activar() override;
	virtual void Desactivar() override;
	virtual void VolverEstadoBase() override;
	virtual void SetNaveJugador(class AGALAGA_USFXFVMPawn* _NaveJugador) override;
	virtual void Disparar() override;
private:
	FTimerHandle TiempoInvencible;
	class AGALAGA_USFXFVMPawn* NaveJugador;	
	

};
