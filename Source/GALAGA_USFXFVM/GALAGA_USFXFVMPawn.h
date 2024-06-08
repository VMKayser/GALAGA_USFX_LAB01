// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EstadoNaveJugador.h"
#include "GALAGA_USFXFVMPawn.generated.h"

UCLASS(Blueprintable)
class AGALAGA_USFXFVMPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AGALAGA_USFXFVMPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	//void FireShot(FVector FireDirection);
	void FireShot();
	

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	//comentado junto al otro metodo para probaer la nueva jugabilidad
	//static const FName FireForwardBinding;
	//static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;


public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstadisticasJugador")
	float VidaJugador;
	
public:
	FORCEINLINE float GetVidaJugador() const { return VidaJugador; }
	void TakeDamage(float Damage);
	FORCEINLINE void SetVidaJugador(float NewLife) { VidaJugador = NewLife; }
	//OBTENCION DE ESTADOS
	void SetEstadoActual(IEstadoNaveJugador* NuevoEstado);
	void CambiarMalla(UStaticMesh* MallaNueva);
	FORCEINLINE IEstadoNaveJugador* GetEstadoActual() { return EstadoActual; }
	FORCEINLINE IEstadoNaveJugador* GetEstadoBase() { return EstadoBaseJugador; }
	FORCEINLINE IEstadoNaveJugador* GetEstadoIntangible() { return EstadoIntangibleJugador; }
	FORCEINLINE IEstadoNaveJugador* GetEstadoInvencible() { return EstadoInvencibleJugador; }
	FORCEINLINE IEstadoNaveJugador* GetEstadoSuperArma() { return EstadoSuperArmaJugador; }
public:
	static float VidaJugadorPredeterminada;
private:
	IEstadoNaveJugador* EstadoActual;
	IEstadoNaveJugador* EstadoBaseJugador;
	IEstadoNaveJugador* EstadoIntangibleJugador;
	IEstadoNaveJugador* EstadoInvencibleJugador;
	IEstadoNaveJugador* EstadoSuperArmaJugador;
	void CambiarEstrategia(int32 NumeroEstrategia);	
	void CambiarEstrategia1();
	void CambiarEstrategia2();
	void CambiarEstrategia3();
	void CambiarEstrategia4();
protected:
	virtual void BeginPlay() override;
	void CambiarEstado();

};

