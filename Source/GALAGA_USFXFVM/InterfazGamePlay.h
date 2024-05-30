// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InterfazGamePlay.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GALAGA_USFXFVM_API UInterfazGamePlay : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetVidaJugador(float Vida, float VidaMaxima);
	void SetPoderJugador(float Poder, float PoderMaximo);
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* BarraVida;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* BarraPoder;
	//añade un valor para vida y eso





};
