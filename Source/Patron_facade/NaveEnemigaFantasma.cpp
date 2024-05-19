// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFantasma.h"

// Sets default values
ANaveEnemigaFantasma::ANaveEnemigaFantasma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));

	MallaF = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	MallaF->SetStaticMesh(NaveMesh.Object);
	MallaF->SetupAttachment(RootComponent);
	MallaF->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = MallaF;
}

// Called when the game starts or when spawned
void ANaveEnemigaFantasma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigaFantasma::Movimiento()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta en movimiento"));
}

void ANaveEnemigaFantasma::Ataque()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta atacando"));
}

void ANaveEnemigaFantasma::HabilidadEspecial()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La nave Fantasma esta usando su habilidad especial"));
}

