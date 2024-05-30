#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SubscriptorEvento.h"
#include "PantallaFinDeJuego.generated.h"

UCLASS()
class GALAGA_USFXFVM_API APantallaFinDeJuego : public AActor, public ISubscriptorEvento
{
	GENERATED_BODY()

public:
	APantallaFinDeJuego();

protected:
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UUserWidget> MainMenuWidgetClass;
	virtual void Tick(float DeltaTime) override;
	virtual void Actualizar(APublicadorEventos* PublicadorEventos) override;
	void DestruirSubscripcion();

private:
	class APublicadorVidaJugador* PublicadorVidaJugador;

	void MostrarGameOver();
};
