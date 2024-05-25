// ProyectilParabolico.h

#pragma once

#include "CoreMinimal.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "ProyectilParabolico.generated.h"

UCLASS()
class GALAGA_USFXFVM_API AProyectilParabolico : public AGALAGA_USFXFVMProjectile
{
    GENERATED_BODY()

public:
    // Constructor
    AProyectilParabolico();
	virtual void Tick(float DeltaTime) override;
};
