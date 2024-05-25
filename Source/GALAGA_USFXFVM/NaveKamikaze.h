// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveKamikaze : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int tpersecucion;
public:
	ANaveKamikaze();
	FORCEINLINE int GetTPersecucion() const { return tpersecucion; }
	FORCEINLINE void SetTPersecucion(int _tpersecucion) { tpersecucion = _tpersecucion; }
	virtual void Tick(float DeltaTime);
protected:
	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Explotar();
	/*UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);*/

};