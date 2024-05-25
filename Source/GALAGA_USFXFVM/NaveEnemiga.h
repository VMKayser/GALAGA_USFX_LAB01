// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovimientoNavesEnemigas.h"
#include "SistemaPuntuacionComponente.h"
#include "NaveEnemiga.generated.h"



UCLASS(abstract)
class GALAGA_USFXFVM_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;
protected:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	float velocidad; // Velocidad de la nave enemiga

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	float danoProducido; // Potencia de cada proyectil que dispara la nave

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	float cadenciaDisparo; // Tiempo que debe transcurrir entre cada disparo

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	int capacidadMunicion; // Numero de disparos que puede realizar antes de recargar

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	float experiencia; // Cantidad de puntos que se obtienen al destruir la nave

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	float vida; // Vida de la nave enemiga
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	FString nombre; // Nombre de la nave enemiga

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	FVector posicion; // Posición actual de la nave enemiga

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
	FVector projectileSpawn; // Dirección en la que dispara la nave
	float DanioRecibido;
	/* Flag to control firing  */
	uint32 bCanFire : 1;
	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetCadenciaDisparo() const { return cadenciaDisparo; }
	FORCEINLINE int GetCapacidadMunicion() const { return capacidadMunicion; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetDanioRecibido() const { return DanioRecibido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }


	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetCadenciaDisparo(float _cadenciaDisparo) { cadenciaDisparo = _cadenciaDisparo; }
	FORCEINLINE void SetCapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetDanioRecibido(float _DanioRecibido) { DanioRecibido = _DanioRecibido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
	UMovimientoNavesEnemigas* MovimientoNavesEnemigas;


protected:
	void Mover() PURE_VIRTUAL(ANave_Enemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANave_Enemiga::Disparar, );
	void ShotTimerExpired() PURE_VIRTUAL(ANave_Enemiga::ShotTimerExpired, );
	UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	static USistemaPuntuacionComponente* SharedSistemaPuntuacionComponente;
};
