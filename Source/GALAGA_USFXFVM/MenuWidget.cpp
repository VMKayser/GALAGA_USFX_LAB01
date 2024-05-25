// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "InstanciaJuegoNivel.h"
#include "Components/Widget.h"
#include "GameFramework/PlayerController.h"

UMenuWidget::UMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FacadeDificultadJuego = CreateDefaultSubobject<UFacadeDificultadJuego>(TEXT("FacadeDificultadJuego"));

}	

void UMenuWidget::IniciarJuego()
{
	UGameplayStatics::OpenLevel(this, FName("/Game/TwinStickCPP/Maps/TwinStickExampleMap"));
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("StartGame"));
	
}

void UMenuWidget::SalirJuego()
{
	UKismetSystemLibrary::QuitGame(this, GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("QuitGame"));
}

void UMenuWidget::CambiarDificultad()
{
	
	dificultadNivel++;
	if (dificultadNivel > 3)
	{
		dificultadNivel = 1;
	}
	if (dificultadNivel == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Facil"));
	}
	if (dificultadNivel == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Medio"));
	}
	if (dificultadNivel == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Dificil"));
	}
	UInstanciaJuegoNivel* InstanciaJuegoNivel = Cast<UInstanciaJuegoNivel>(GetWorld()->GetGameInstance());
	if (InstanciaJuegoNivel)
	{
		InstanciaJuegoNivel->DificultadJuego = dificultadNivel;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Dificultad Cambiada"));
}

void UMenuWidget::ElegirNivel()
{
	numeroNivel++;
	switch (numeroNivel)
	{
	case 1:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Nivel 1"));
		break;
	case 2:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Nivel 2"));
		break;
	case 3:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Nivel 3"));
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Nivel infinito"));
		break;
	}
	UInstanciaJuegoNivel* InstanciaJuegoNivel = Cast<UInstanciaJuegoNivel>(GetWorld()->GetGameInstance());
	if (InstanciaJuegoNivel)
	{
		InstanciaJuegoNivel->NumeroNivel = numeroNivel;
	}

}

