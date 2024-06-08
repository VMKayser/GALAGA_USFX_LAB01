// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "CompositeNavesEnemigas.h"
#include "NaveTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveTransporte : public ANaveEnemiga, public ICompositeNavesEnemigas
{
	GENERATED_BODY()
private:
	int capacidad;
public:
	ANaveTransporte();
	FORCEINLINE int GetCapacidad() const { return capacidad; }
	FORCEINLINE void SetCapacidad(int _capacidad) { capacidad = _capacidad; }
	virtual void Tick(float DeltaTime);
protected:
	virtual void BeginPlay() override;

	virtual void Explotar();

	virtual void Mover(float DeltaTime) override;
	virtual void Mover1(float DeltaTime) override;
	virtual void Disparar() override;
	//UFUNCTION()
	//void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	FVector Movimiento;
	FVector PosicionInicial;
	float Amplitud;
	float Frecuencia;
	float TiempoAcumulado;
	virtual void SetPadre(TScriptInterface<ICompositeNavesEnemigas> Padre) override;
	virtual TScriptInterface<ICompositeNavesEnemigas> GetPadre() const override;
private:
	TScriptInterface<ICompositeNavesEnemigas> Padre;
};