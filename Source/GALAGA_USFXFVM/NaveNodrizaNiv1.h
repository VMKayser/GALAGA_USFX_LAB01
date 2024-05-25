#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"

#include "NaveNodrizaNiv1.generated.h"

UCLASS()
class GALAGA_USFXFVM_API ANaveNodrizaNiv1 : public AActor, public IBuilderNaveNodriza
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ANaveNodrizaNiv1();
    UStaticMeshComponent* mallaNaveNodrizaNiv1;
private:
    UPROPERTY(VisibleAnywhere, Category = "NaveNodrizaNiv1")
    class ANaveNodriza* NaveNodriza;

    UPROPERTY(VisibleAnywhere, Category = "NaveNodrizaNiv1")
    class UStaticMeshComponent* ArmaDNComponent;

    UPROPERTY(VisibleAnywhere, Category = "NaveNodrizaNiv1")
    class UStaticMeshComponent* ArmaDPComponent;

    UPROPERTY(VisibleAnywhere, Category = "NaveNodrizaNiv1")
    class UStaticMeshComponent* EscudoNComponent;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    virtual void ConstruirArma(const TMap<FString, int32>& TiposDeArma, FVector NNSpawnLocation) override;
    virtual void ConstruirEscudo(const TMap<FString, int32>& TiposDeEscudo, FVector NNSpawnLocation) override;
    virtual void SetSpawnLocation(const FVector& NNSpawnLocation) override;
    virtual class ANaveNodriza* GetNaveNodriza() override;
};
