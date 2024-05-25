// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "PlanoNaveNodriza.generated.h"

class AEscudos;
class AArmas;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanoNaveNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFXFVM_API IPlanoNaveNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetEscudos(const TArray<AEscudos*>& NewEscudos) = 0;
	virtual void SetArmas(const TArray<AArmas*>& NewArmas) = 0;

};
