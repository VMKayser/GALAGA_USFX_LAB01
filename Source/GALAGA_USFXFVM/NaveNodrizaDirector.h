// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNaveNodriza.h"
#include "NaveNodrizaDirector.generated.h"

UCLASS()
class GALAGA_USFXFVM_API ANaveNodrizaDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodrizaDirector();
private:
	IBuilderNaveNodriza* BuilderNaveNodriza;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirNaveNodriza(const TMap<FString, int32>& TiposDeArma, const TMap<FString, int32>& TiposDeEscudo, FVector SpawnLocation);
	void SetBuilderNaveNodriza(AActor* Builder);
	class ANaveNodriza* GetNaveNodriza();

};
