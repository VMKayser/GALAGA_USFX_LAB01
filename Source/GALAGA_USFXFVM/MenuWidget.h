// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FacadeDificultadJuego.h"
#include "FabricaDeNaves.h"
#include "NaveNodrizaNiv1.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFXFVM_API UMenuWidget : public UUserWidget
{
    GENERATED_BODY()
public:
	UMenuWidget(const FObjectInitializer& ObjectInitializer);
protected:

    AFacadeDificultadJuego* FacadeDificultadJuego;
    AFabricaDeNaves* FabricaDeNaves;
    ANaveNodrizaNiv1* NaveNodriza;
public:
    UFUNCTION(BlueprintCallable, Category = "Menu")
    void IniciarJuego();

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void SalirJuego();

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void CambiarDificultad();
	UFUNCTION(BlueprintCallable, Category = "Menu")
    void ElegirNivel();
    int dificultadNivel;
	int numeroNivel;
};


  