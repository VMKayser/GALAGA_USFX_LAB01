// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FabricaDeNaves.h"
#include "NaveNodrizaNiv1.h"
#include "FacadeDificultadJuego.h"
#include "PublicadorVidaJugador.h"
#include "GALAGA_USFXFVMGameMode.generated.h"



UCLASS(MinimalAPI)
class AGALAGA_USFXFVMGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFXFVMGameMode();
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	
	virtual void BeginPlay() override;
	UFacadeDificultadJuego* FacadeDificultadJuego;
	//TMap<FString, int32> TiposDeArma;
	//TMap<FString, int32> TiposDeEscudo;
	// Method to initialize the factory of enemy ships
	//void InicializarFabricaDeNaves();
	//void CheckAndBuildNaveNodriza();
	void DificultadJuego();
	
};

