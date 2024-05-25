// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTanque.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveTanque : public ANaveEnemiga
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
	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void MBlindaje();

	//UFUNCTION()
	//void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};