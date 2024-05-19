// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

// Sets default values
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	MallaC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	MallaC->SetStaticMesh(NaveMesh.Object);
	MallaC->SetupAttachment(RootComponent);
	MallaC->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = MallaC;

	Velocidad = 100.0f;
}

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaCaza::Movimiento()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta en Movimiento"));
}

void ANaveEnemigaCaza::Ataque()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta atacando"));
}

void ANaveEnemigaCaza::HabilidadEspecial()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave caza esta usando su habilidad especial"));
}

