// Fill out your copyright notice in the Description page of Project Settings.
// BuilderNaveNodriza.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConfiguracionNaveNodriza.h"
#include "BuilderNaveNodriza.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderNaveNodriza : public UInterface
{
    GENERATED_BODY()
};

/**
 *
 */
class GALAGA_USFXFVM_API IBuilderNaveNodriza
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    virtual void ConstruirArma(const TMap<FString, int32>& TiposDeArma, FVector NNSpawnLocation) = 0;
    virtual void ConstruirEscudo(const TMap<FString, int32>& TiposDeEscudo, FVector NNSpawnLocation) = 0;
	virtual void SetSpawnLocation(const FVector& NewSpawnLocation) = 0;
    virtual class ANaveNodriza* GetNaveNodriza() = 0;
 
};
