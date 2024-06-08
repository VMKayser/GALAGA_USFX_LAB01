// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Armas.h"
#include "SubscriptorEvento.h"
#include "EstrategiasArmasJugador.h"
#include "ArmaDN.generated.h"
/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API AArmaDN : public AArmas, public ISubscriptorEvento
{
	GENERATED_BODY()
	
public:
	void CambiarMalla(UStaticMesh* MallaNueva);
	AArmaDN();
	virtual void Tick(float DeltaTime) override;
	virtual void Actualizar(APublicadorEventos* PublicadorEventos) override;
	void SetEstrategia(AActor* EstrategiaActual);
	
	void CambiarEstrategia(int32 NumeroEstrategia);

	class AEstrategiaAtaqueEscudo* EstrategiaEscudo;
	class AEstrategiaAtaqueSierra* EstrategiaSierra;
	class AEstrategiaAtaqueNormal* EstrategiaNormal;
	class AEstrategiaAtaqueExplosivo* EstrategiaExplosivo;
protected:
	virtual void BeginPlay() override;
	void DestruirSubscripcion();

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;
	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
	class APublicadorVidaJugador* PublicadorVidaJugador;
	
	IEstrategiasArmasJugador* Estrategia;

};
