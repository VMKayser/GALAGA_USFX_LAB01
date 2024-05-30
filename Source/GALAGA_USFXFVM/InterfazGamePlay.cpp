// Fill out your copyright notice in the Description page of Project Settings.


#include "InterfazGamePlay.h"
#include "Components/ProgressBar.h"

void UInterfazGamePlay::SetVidaJugador(float Vida, float VidaMaxima)
{
	if(BarraVida)
	{
		BarraVida->SetPercent(Vida / VidaMaxima);
	}
}

void UInterfazGamePlay::SetPoderJugador(float Poder, float PoderMaximo)
{
	if(BarraPoder)
	{
		BarraPoder->SetPercent(Poder / PoderMaximo);
	}
}

