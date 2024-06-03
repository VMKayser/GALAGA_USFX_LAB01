#include "PantallaFinDeJuego.h"
#include "PublicadorVidaJugador.h"
#include "Kismet/GameplayStatics.h"
#include "GameOver.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

// Sets default values
APantallaFinDeJuego::APantallaFinDeJuego()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<UUserWidget> MenuWidgetClass(TEXT("/Game/UI/DisenoGameOver"));
	if (MenuWidgetClass.Succeeded())
	{
		MainMenuWidgetClass = MenuWidgetClass.Class;
	}
}

// Called when the game starts or when spawned
void APantallaFinDeJuego::BeginPlay()
{
	Super::BeginPlay();

	PublicadorVidaJugador = Cast<APublicadorVidaJugador>(UGameplayStatics::GetActorOfClass(GetWorld(), APublicadorVidaJugador::StaticClass()));
	if (PublicadorVidaJugador)
	{
		PublicadorVidaJugador->Suscribir(this);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("El publicador de vida del jugador no existe"));
	}

}

// Called when the game ends or actor is destroyed

// Called every frame
void APantallaFinDeJuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APantallaFinDeJuego::Actualizar(APublicadorEventos* PublicadorEventos)
{
	APublicadorVidaJugador* PublicadorVida = Cast<APublicadorVidaJugador>(PublicadorEventos);
	if (PublicadorVida)
	{
		float VidaJugador = PublicadorVida->GetVidaJugador();
		if (VidaJugador <= 0.0f)
		{
			MostrarGameOver();
			
			
		}
	
	}

}

void APantallaFinDeJuego::DestruirSubscripcion()
{
	if (PublicadorVidaJugador)
	{
		PublicadorVidaJugador->Desuscribir(this);
	}
}

void APantallaFinDeJuego::MostrarGameOver()
{

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
	DestruirSubscripcion();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Fin juego"));
	
}