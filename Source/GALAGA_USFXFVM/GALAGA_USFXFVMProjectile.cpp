// Copyright Epic Games, Inc. All Rights Reserve

#include "GALAGA_USFXFVMProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveEnemiga.h"
#include "GALAGA_USFXFVMPawn.h"

float AGALAGA_USFXFVMProjectile::DanioPredeterminado = 1.0f;



AGALAGA_USFXFVMProjectile::AGALAGA_USFXFVMProjectile() 
{
	
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGALAGA_USFXFVMProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
	
	DanioCausado = DanioPredeterminado;
}



void AGALAGA_USFXFVMProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		// Verificar si el otro actor es tu nave
		AGALAGA_USFXFVMPawn* Pawn = Cast<AGALAGA_USFXFVMPawn>(OtherActor);
		if (Pawn)
		{
			// Calcular el daño que el proyectil inflige al impactar
			float DamageAmount = 5.0f; // Puedes ajustar este valor según tus necesidades

			// Llamar a la función TakeDamage de tu nave para aplicar el daño
			Pawn->TakeDamage(DamageAmount);
		}
	}
	Destroy();
}
