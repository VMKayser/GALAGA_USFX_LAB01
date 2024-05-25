// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveTransporte : public ANaveEnemiga
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
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Explotar();
	//UFUNCTION()
	//void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};