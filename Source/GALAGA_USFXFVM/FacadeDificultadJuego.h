#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FabricaDeNaves.h"
#include "FacadeDificultadJuego.generated.h"

USTRUCT(BlueprintType)
struct FValoresNaveEnemiga
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    float VidaEnemigo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    float Velocidad;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    float Dano;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    float CadenciaDisparo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    int32 CapacidadMunicion;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NaveEnemiga")
    float Experiencia;

    FValoresNaveEnemiga()
        : VidaEnemigo(0.0f)
        , Velocidad(0.0f)
        , Dano(0.0f)
        , CadenciaDisparo(0.0f)
        , CapacidadMunicion(0)
        , Experiencia(0.0f)
    {}
};

UCLASS()
class GALAGA_USFXFVM_API UFacadeDificultadJuego : public UObject
{
    GENERATED_BODY()

protected:
    int NumeroNaves;
    int NumeroFilas;


public:
    UFacadeDificultadJuego();
    AFabricaDeNaves* FabricaDeNaves;

    void SetDificultad(int dificultadNivel);
    void SetValoresJugador(int dificultadNivel);
    void SetValoresEnemigos(int dificultadNivel,FValoresNaveEnemiga& ValoresNaveEnemiga);
    void SetValoresNivel(int dificultadNivel, const FValoresNaveEnemiga& ValoresNaveEnemiga);

    void CrearNivel(int NumeroDelNivel);
};
