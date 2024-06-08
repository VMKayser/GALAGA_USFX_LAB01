// FabricaDeNaves.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "CompositeNavesEnemigasClase.h"
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
    void GenerarNavesEnemigas(int32 CantidadNaves, int32 NumeroFilas, FVector NNSpawnLocation);
    
public:
    // Método para generar una nave enemiga individual
    virtual ANaveEnemiga* GenerarNaveEnemiga(const FVector& UbicacionInicial);
    UFUNCTION(BlueprintCallable, Category = "Naves")
    ACompositeNavesEnemigasClase* GenerarCompositeNavesEnemigas(int32 CantidadNaves, int32 NumeroFilas, FVector NNSpawnLocation);

};
