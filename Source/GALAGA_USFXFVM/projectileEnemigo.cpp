#include "projectileEnemigo.h"

AprojectileEnemigo::AprojectileEnemigo()
{
	// Assuming you have a collision component named "CollisionComponent"

	//CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
	//CollisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECR_Ignore);
}

void AprojectileEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
