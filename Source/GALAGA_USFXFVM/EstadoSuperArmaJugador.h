// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoNaveJugador.h"
#include "EstadoSuperArmaJugador.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AEstadoSuperArmaJugador : public AActor, public IEstadoNaveJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoSuperArmaJugador();

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
	void ShotTimerExpired();
private:

	class AGALAGA_USFXFVMPawn* NaveJugador;
	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
	float FireRate;
	FVector GunOffset;
	FTimerHandle TiempoSuperArma;
};
