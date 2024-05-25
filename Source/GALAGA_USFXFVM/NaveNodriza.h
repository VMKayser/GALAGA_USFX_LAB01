// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "PlanoNaveNodriza.h"
#include "Armas.h"
#include "Escudos.h"
#include "NaveNodriza.generated.h"

/**
 * 
 */
class AEscudos;
class AArmas;
UCLASS()
class GALAGA_USFXFVM_API ANaveNodriza : public AActor, public IPlanoNaveNodriza
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveNodriza;
public:
	ANaveNodriza();
	TArray<AEscudos*> escudos;
	TArray<AArmas*> armas;
	
private:
	int capNaves;
	


protected:
	virtual void BeginPlay() override;
	void Mover(float DeltaTime);
public:
	FORCEINLINE int GetCapNaves() const { return capNaves; }
	FORCEINLINE void SetCapNaves(int _capNaves) { capNaves = _capNaves; }
	virtual void Tick(float DeltaTime);
	virtual void SetEscudos(const TArray<AEscudos*>& NewEscudos) override ;
	virtual void SetArmas(const TArray<AArmas*>& NewArmas) override;

	void CaracteristicasNaveNodriza();


};