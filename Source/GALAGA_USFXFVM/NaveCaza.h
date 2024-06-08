// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "CompositeNavesEnemigas.h"
#include "NaveCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API ANaveCaza : public ANaveEnemiga, public ICompositeNavesEnemigas
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
	virtual void Mover(float DeltaTime) override;
	virtual void Mover1(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void BeginPlay() override;
	virtual void ShotTimerExpired();
	virtual void Recargar();

	virtual void SetPadre(TScriptInterface<ICompositeNavesEnemigas> Padre) override;
	virtual TScriptInterface<ICompositeNavesEnemigas> GetPadre() const override;

private:
	FVector Movimiento;
	FVector PosicionInicial;
	float Amplitud;
	float Frecuencia;
	float TiempoAcumulado;

	TScriptInterface<ICompositeNavesEnemigas> Padre;
	

};
