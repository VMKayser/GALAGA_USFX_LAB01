#include "NaveNodrizaNiv1.h"
#include "NaveNodriza.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

// Sets default values
ANaveNodrizaNiv1::ANaveNodrizaNiv1()
{
    PrimaryActorTick.bCanEverTick = true;

    mallaNaveNodrizaNiv1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

    // Configura la malla del componente
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
    if (ShipMesh.Succeeded())
    {
        mallaNaveNodrizaNiv1->SetStaticMesh(ShipMesh.Object);
    }
    else
    {
        // Manejo de error si la carga de la malla falla
        UE_LOG(LogTemp, Error, TEXT("Failed to find static mesh for mallaNaveNodrizaNiv1 in ANaveNodrizaNiv1 constructor"));
    }
    RootComponent = mallaNaveNodrizaNiv1;

    NaveNodriza = nullptr;

    // Configurar la malla del componente de arma
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ArmaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    if (ArmaMesh.Succeeded())
    {
        ArmaDNComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmaDNComponent"));
        ArmaDNComponent->SetStaticMesh(ArmaMesh.Object);
        ArmaDNComponent->SetupAttachment(RootComponent);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find static mesh for ArmaDNComponent in ANaveNodrizaNiv1 constructor"));
    }

    // Configurar la malla del componente de escudo
    static ConstructorHelpers::FObjectFinder<UStaticMesh> EscudoMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    if (EscudoMesh.Succeeded())
    {
        EscudoNComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoNComponent"));
        EscudoNComponent->SetStaticMesh(EscudoMesh.Object);
        EscudoNComponent->SetupAttachment(RootComponent);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find static mesh for EscudoNComponent in ANaveNodrizaNiv1 constructor"));
    }
}

// Called when the game starts or when spawned
void ANaveNodrizaNiv1::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ANaveNodrizaNiv1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ANaveNodrizaNiv1::SetSpawnLocation(const FVector& NNSpawnLocation)
{
    if (NaveNodriza == nullptr)
    {
        NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass(), NNSpawnLocation, FRotator::ZeroRotator);
        NaveNodriza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    }
}

void ANaveNodrizaNiv1::ConstruirArma(const TMap<FString, int32>& TiposDeArma, FVector NNSpawnLocation)
{
    int32 NumArma = 0;
    for (const auto& TipoCantidad : TiposDeArma)
    {
        const FString& ClaseArma = TipoCantidad.Key;
        const int32 Cantidad = TipoCantidad.Value;

        for (int32 i = 0; i < Cantidad; i++)
        {
            UStaticMeshComponent* NewArmaMesh = NewObject<UStaticMeshComponent>(this, FName(*FString::Printf(TEXT("%s%d"), *ClaseArma, NumArma)));
            NumArma++;

            NewArmaMesh->SetRelativeLocation(NNSpawnLocation + FVector(100.0f * i, 0.0f, 0.0f));
            NewArmaMesh->SetStaticMesh(ArmaDNComponent->GetStaticMesh());

            if (NaveNodriza != nullptr)
            {
                NewArmaMesh->AttachToComponent(NaveNodriza->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                NewArmaMesh->RegisterComponent();
                NaveNodriza->AddInstanceComponent(NewArmaMesh);  // Asegura que el componente sea reconocido como parte del actor principal.
            }

            
        }
    }
}

void ANaveNodrizaNiv1::ConstruirEscudo(const TMap<FString, int32>& TiposDeEscudo, FVector NNSpawnLocation)
{
    int32 NumEscudo = 0;
    for (const auto& TipoCantidad : TiposDeEscudo)
    {
        const FString& ClaseEscudo = TipoCantidad.Key;
        const int32 Cantidad = TipoCantidad.Value;

        for (int32 i = 0; i < Cantidad; i++)
        {
            UStaticMeshComponent* NewEscudoMesh = NewObject<UStaticMeshComponent>(this, FName(*FString::Printf(TEXT("%s%d"), *ClaseEscudo, NumEscudo)));
            NumEscudo++;

            NewEscudoMesh->SetRelativeLocation(NNSpawnLocation + FVector(0.0f, 100.0f * i, 0.0f));
            NewEscudoMesh->SetStaticMesh(EscudoNComponent->GetStaticMesh());

            if (NaveNodriza != nullptr)
            {
                NewEscudoMesh->AttachToComponent(NaveNodriza->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                NewEscudoMesh->RegisterComponent();
                NaveNodriza->AddInstanceComponent(NewEscudoMesh);  // Asegura que el componente sea reconocido como parte del actor principal.
            }

           
        }
    }
}

ANaveNodriza* ANaveNodrizaNiv1::GetNaveNodriza()
{
    return NaveNodriza;
}

