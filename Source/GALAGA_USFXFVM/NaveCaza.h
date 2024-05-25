// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	//quiero que plusformacion se vea en el editor de unreal
	UPROPERTY(EditAnywhere, Category = "plusFormacion")
	float plusFormacion;
	bool bIsReloading;
public:
	ANaveCaza();
	FORCEINLINE int GetPlusFormacion() const { return plusFormacion; }
	FORCEINLINE void SetPlusFormacion(int _plusFormacion) { plusFormacion = _plusFormacion; }
	virtual void Tick(float DeltaTime);
	virtual void plusFormacionNave();

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void ShotTimerExpired();
	virtual void Recargar();
	

};
