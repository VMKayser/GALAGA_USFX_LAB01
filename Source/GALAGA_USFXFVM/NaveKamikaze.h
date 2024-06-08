// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "SubscriptorEvento.h"
#include "CompositeNavesEnemigas.h"
#include "NaveKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveKamikaze : public ANaveEnemiga, public ISubscriptorEvento, public ICompositeNavesEnemigas
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "Persecucion")
	int tpersecucion;
public:
	ANaveKamikaze();
	FORCEINLINE int GetTPersecucion() const { return tpersecucion; }
	FORCEINLINE void SetTPersecucion(int _tpersecucion) { tpersecucion = _tpersecucion; }
	virtual void Tick(float DeltaTime);
protected:
	virtual void BeginPlay() override;
	virtual void Explotar();
	virtual void Actualizar(APublicadorEventos* PublicadorEventos) override;
	void DestruirSubscripcion();
	class APublicadorVidaJugador* PublicadorVidaJugador;
	bool band;
	virtual void Mover(float DeltaTime) override;
	virtual void Mover1(float DeltaTime) override;
	virtual void Disparar() override;

	virtual void SetPadre(TScriptInterface<ICompositeNavesEnemigas> Padre) override;
	virtual TScriptInterface<ICompositeNavesEnemigas> GetPadre() const override;

private:
	FVector PosicionInicial;
	FVector Movimiento;
	float Amplitud;
	float Frecuencia;
	float TiempoAcumulado;
	TScriptInterface<ICompositeNavesEnemigas> Padre;
	/*UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);*/

};