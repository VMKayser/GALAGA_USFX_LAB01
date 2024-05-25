// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Armas.generated.h"

UCLASS(abstract)
class GALAGA_USFXFVM_API AArmas : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Arma, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaArma;
protected:
	float velocidad;//velocidad de disparo
	int municion;//cantidad de municion
	FVector direccion;//direccion del proyectil en el espacio

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetMunicion() const { return municion; }
	FORCEINLINE FVector GetDireccion() const { return direccion; }
	
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetMunicion(int _municion) { municion = _municion; }
	FORCEINLINE void SetDireccion(FVector _direccion) {direccion = _direccion; }

public:	
	// Sets default values for this actor's properties
	AArmas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void Disparar() PURE_VIRTUAL(AArma::Disparar, );
	void Recargar() PURE_VIRTUAL(AArma::Recargar, );
	void ShotTimerExpired() PURE_VIRTUAL(AArma::ShotTimerExpired, ); 
};
