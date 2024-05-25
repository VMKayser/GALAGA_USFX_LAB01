// FabricaDeNaves.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaDeNaves.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AFabricaDeNaves : public AActor
{
    GENERATED_BODY()

public:
    AFabricaDeNaves();

protected:
    virtual void BeginPlay() override;
	
public:
    virtual void Tick(float DeltaTime) override;

    // Método para generar múltiples naves enemigas
    void GenerarNavesEnemigas(int32 NumeroNaves, int32 NumeroFilas, FVector NNSpawnLocation);

public:
    // Método para generar una nave enemiga individual
    virtual ANaveEnemiga* GenerarNaveEnemiga(const FVector& UbicacionInicial);

};
