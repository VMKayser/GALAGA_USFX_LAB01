// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFXFVMPawn.h"
#include "GALAGA_USFXFVMProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "EstadoBaseJugador.h"
#include "EstadoIntangibleJugador.h"
#include "EstadoInvencibleJugador.h"
#include "EstadoSuperArmaJugador.h"
#include "ArmaDN.h"
#include "Sound/SoundBase.h"
#include "Engine/World.h"

const FName AGALAGA_USFXFVMPawn::MoveForwardBinding("MoveForward");
const FName AGALAGA_USFXFVMPawn::MoveRightBinding("MoveRight");
//comentado para probar la jugabilidad final
//const FName AGALAGA_USFXFVMPawn::FireForwardBinding("FireForward");
//const FName AGALAGA_USFXFVMPawn::FireRightBinding("FireRight");
float AGALAGA_USFXFVMPawn::VidaJugadorPredeterminada = 0.0f;
AGALAGA_USFXFVMPawn::AGALAGA_USFXFVMPawn()
{	

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	VidaJugador = VidaJugadorPredeterminada;
	//crear referencia al publicador

	//Inicializar el estado

	
}

void AGALAGA_USFXFVMPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	//PlayerInputComponent->BindAxis(FireForwardBinding);
	//PlayerInputComponent->BindAxis(FireRightBinding);
	//bind tecla 1
	PlayerInputComponent->BindAction("CambiarEstrategia1", IE_Pressed, this, &AGALAGA_USFXFVMPawn::CambiarEstrategia1);

	// Bind tecla 2

	PlayerInputComponent->BindAction("CambiarEstrategia2", IE_Pressed, this, &AGALAGA_USFXFVMPawn::CambiarEstrategia2);

	// Bind tecla 3
	PlayerInputComponent->BindAction("CambiarEstrategia3", IE_Pressed, this, &AGALAGA_USFXFVMPawn::CambiarEstrategia3);

}

void AGALAGA_USFXFVMPawn::Tick(float DeltaSeconds)
{

	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		/*const FRotator NewRotation = Movement.Rotation();*/
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, RootComponent->GetComponentRotation(), true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, RootComponent->GetComponentRotation(), true);
		}
	}
	
	// Create fire direction vector
	/*const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);*/

	//// Try and fire a shot
	//FireShot(FireDirection);
	FireShot();
}

void AGALAGA_USFXFVMPawn::FireShot()
{
	if (EstadoActual){	
		EstadoActual->Disparar();
}
}

void AGALAGA_USFXFVMPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGALAGA_USFXFVMPawn::TakeDamage(float DamageAmount)
{
	// Reducir la vida del Pawn
	VidaJugador -= DamageAmount;

	// Mensaje de depuración para verificar el cambio en la vida
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Vida Jugador: ") + FString::SanitizeFloat(VidaJugador));
	CambiarEstado();
	// Aquí podrías agregar cualquier otra lógica relacionada con el manejo del daño
}

void AGALAGA_USFXFVMPawn::BeginPlay()
{
	
	Super::BeginPlay();
	//Inicializar los estados
	EstadoBaseJugador = GetWorld()->SpawnActor<AEstadoBaseJugador>(AEstadoBaseJugador::StaticClass());

	EstadoBaseJugador->SetNaveJugador(this);
	EstadoIntangibleJugador = GetWorld()->SpawnActor<AEstadoIntangibleJugador>(AEstadoIntangibleJugador::StaticClass());
	EstadoIntangibleJugador->SetNaveJugador(this);
	EstadoInvencibleJugador = GetWorld()->SpawnActor<AEstadoInvencibleJugador>(AEstadoInvencibleJugador::StaticClass());
	EstadoInvencibleJugador->SetNaveJugador(this);
	EstadoSuperArmaJugador = GetWorld()->SpawnActor<AEstadoSuperArmaJugador>(AEstadoSuperArmaJugador::StaticClass());
	EstadoSuperArmaJugador->SetNaveJugador(this);
	SetEstadoActual(EstadoBaseJugador);
	//Inicializar el estado actuals
	
}

void AGALAGA_USFXFVMPawn::CambiarEstado()
{
	if(VidaJugador<=40&& VidaJugador>=30)
	{
		SetEstadoActual(EstadoSuperArmaJugador);
		
	}
	else if (VidaJugador == 50)
	{
		SetEstadoActual(EstadoIntangibleJugador);
		
	}
	else if (VidaJugador == 60)
	{
	
		SetEstadoActual(EstadoInvencibleJugador);
		
	}
	else
	{
		SetEstadoActual(EstadoBaseJugador);
	}
	
	
}

void AGALAGA_USFXFVMPawn::SetEstadoActual(IEstadoNaveJugador* NewState)
{
	if (EstadoActual)
	{
		EstadoActual->Desactivar();
	}


	EstadoActual = NewState;

	if (EstadoActual)
	{
		EstadoActual->Activar();
	}
}

void AGALAGA_USFXFVMPawn::CambiarMalla(UStaticMesh* NuevaMalla)
{
	if (NuevaMalla)
	{
		ShipMeshComponent->SetStaticMesh(NuevaMalla);
	}
}


void AGALAGA_USFXFVMPawn::CambiarEstrategia(int32 NumeroEstrategia)
{
	AArmaDN* ArmaJugador = Cast<AArmaDN>(UGameplayStatics::GetActorOfClass(GetWorld(), AArmaDN::StaticClass()));
	ArmaJugador->CambiarEstrategia(NumeroEstrategia);	
}

void AGALAGA_USFXFVMPawn::CambiarEstrategia1()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Cambiando a Estrategia 1"));
	AArmaDN* ArmaJugador = Cast<AArmaDN>(UGameplayStatics::GetActorOfClass(GetWorld(), AArmaDN::StaticClass()));
	ArmaJugador->CambiarEstrategia(1);
}

void AGALAGA_USFXFVMPawn::CambiarEstrategia2()
{
	AArmaDN* ArmaJugador = Cast<AArmaDN>(UGameplayStatics::GetActorOfClass(GetWorld(), AArmaDN::StaticClass()));
	ArmaJugador->CambiarEstrategia(2);
}

void AGALAGA_USFXFVMPawn::CambiarEstrategia3()
{
	AArmaDN* ArmaJugador = Cast<AArmaDN>(UGameplayStatics::GetActorOfClass(GetWorld(), AArmaDN::StaticClass()));
	ArmaJugador->CambiarEstrategia(3);
}