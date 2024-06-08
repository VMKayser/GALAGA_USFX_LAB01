// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CompositeNavesEnemigas.h"
#include "CompositeNavesEnemigasClase.generated.h"

UCLASS()
class GALAGA_USFXFVM_API ACompositeNavesEnemigasClase : public AActor, public ICompositeNavesEnemigas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACompositeNavesEnemigasClase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) override;
	virtual void Mover1(float DeltaTime) override;
	virtual void Disparar() override;

	virtual void SetPadre(TScriptInterface<ICompositeNavesEnemigas> Padre) override;
	virtual TScriptInterface<ICompositeNavesEnemigas> GetPadre() const override;

	void AgregarNave(TScriptInterface<ICompositeNavesEnemigas> Nave);
	void EliminarNave(TScriptInterface<ICompositeNavesEnemigas> Nave);

private:
	TArray<TScriptInterface<ICompositeNavesEnemigas>> Naves;
	TScriptInterface<ICompositeNavesEnemigas> Padre;

};
