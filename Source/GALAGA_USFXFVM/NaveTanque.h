// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "CompositeNavesEnemigas.h"
#include "NaveTanque.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveTanque : public ANaveEnemiga, public ICompositeNavesEnemigas
{
	GENERATED_BODY()
private:
	int blindaje;

public:
	ANaveTanque();
	FORCEINLINE int GetBlindaje() const { return blindaje; }
	FORCEINLINE void SetBlindaje(int _blindaje) { blindaje = _blindaje; }
	virtual void Tick(float DeltaTime);
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Mover1(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void BeginPlay() override;
	virtual void MBlindaje();
	FVector PosicionInicial;
	FVector Movimiento;
	float Amplitud;
	float Frecuencia;
	float TiempoAcumulado;

	virtual void SetPadre(TScriptInterface<ICompositeNavesEnemigas> Padre) override;
	virtual TScriptInterface<ICompositeNavesEnemigas> GetPadre() const override;
private:

	TScriptInterface<ICompositeNavesEnemigas> Padre;
	//UFUNCTION()
	//void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};