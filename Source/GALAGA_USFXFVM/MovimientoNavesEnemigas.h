// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovimientoNavesEnemigas.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFXFVM_API UMovimientoNavesEnemigas : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovimientoNavesEnemigas();
	UPROPERTY(EditAnywhere)
	float SigMovimientoX;
	float SigMovimientoY;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	bool bMovimientoDerecha;
	bool bMovimientoArriba;
		
};
