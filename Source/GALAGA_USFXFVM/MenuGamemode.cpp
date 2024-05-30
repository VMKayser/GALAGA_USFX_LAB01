// Fill out your copyright notice in the Description page of Project Settings.

#include "MenuGamemode.h"
#include "MenuWidget.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

AMenuGamemode::AMenuGamemode()
{
    // Encuentra el Widget Blueprint y asigna la clase a MainMenuWidgetClass
    static ConstructorHelpers::FClassFinder<UUserWidget> MenuWidgetClass(TEXT("/Game/UI/DisenoMenuPrnicipal")); 
    if (MenuWidgetClass.Succeeded())
    {
        MainMenuWidgetClass = MenuWidgetClass.Class;
    }

}

void AMenuGamemode::BeginPlay()
{
    Super::BeginPlay();
    if (MainMenuWidgetClass != nullptr)
    {
        UUserWidget* MainMenu = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass);

        if (MainMenu != nullptr)
        {
            MainMenu->AddToViewport();

            APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
            if (PlayerController != nullptr)
            {
                PlayerController->bShowMouseCursor = true;
                FInputModeUIOnly InputMode;
                InputMode.SetWidgetToFocus(MainMenu->TakeWidget());
                PlayerController->SetInputMode(InputMode);
            }
        }
    }
}



