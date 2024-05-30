// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PublicadorEventos.generated.h"

UCLASS()
class GALAGA_USFXFVM_API APublicadorEventos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicadorEventos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Eventos")
	TArray<AActor*> Subscriptores = TArray<AActor*>();
	class ISubscriptorEvento* ISubscriptorEventos;
	
	public:
		void Suscribir(AActor* Subscriptor);
		void Desuscribir(AActor* Subscriptor);
		void Notificar();


};
