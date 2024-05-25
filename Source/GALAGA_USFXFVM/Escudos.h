// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escudos.generated.h"

UCLASS(Abstract)
class GALAGA_USFXFVM_API AEscudos : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Escudo, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaEscudo;
protected:
	int vida;
	int tiempo;
public:
	FORCEINLINE int GetVida() const { return vida; }
	FORCEINLINE void SetVida(int _vida) { vida = _vida; }
	FORCEINLINE int GetTiempo() const { return tiempo; }
	FORCEINLINE void SetTiempo(int _tiempo) { tiempo = _tiempo; }

public:	
	// Sets default values for this actor's properties
	AEscudos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void TiempoEscudo() PURE_VIRTUAL(AEscudos::TiempoEscudo, );
	void DestruirEscudo() PURE_VIRTUAL(AEscudos::DestruirEscudo, );
};
