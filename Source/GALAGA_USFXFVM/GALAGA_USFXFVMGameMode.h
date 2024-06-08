// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FabricaDeNaves.h"
#include "NaveNodrizaNiv1.h"
#include "FacadeDificultadJuego.h"
#include "PublicadorVidaJugador.h"
#include "CompositeNavesEnemigasClase.h"
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
	AFabricaDeNaves* FabricaDeNaves;
	AFacadeDificultadJuego* FacadeDificultadJuego;
	ACompositeNavesEnemigasClase* CompositeNaves;
	ACompositeNavesEnemigasClase* CompositeNaves2;
	ACompositeNavesEnemigasClase* CompositeNaves3;
	ACompositeNavesEnemigasClase* CompositePadre;
	ACompositeNavesEnemigasClase* CompositePadre2;
	//TMap<FString, int32> TiposDeArma;
	//TMap<FString, int32> TiposDeEscudo;
	// Method to initialize the factory of enemy ships
	//void InicializarFabricaDeNaves();
	//void CheckAndBuildNaveNodriza();
	void DificultadJuego();
	
};

