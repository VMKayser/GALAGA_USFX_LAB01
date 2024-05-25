// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FacadeDificultadJuego.h"
#include "MenuGamemode.generated.h"

/**
 * 
 */


UCLASS(MinimalAPI)
class AMenuGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMenuGamemode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UUserWidget> MainMenuWidgetClass;
protected:
    virtual void BeginPlay() override;



};