// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAsalto.h"

// Sets default values
ANaveEnemigaAsalto::ANaveEnemigaAsalto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	MallaA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
	MallaA->SetStaticMesh(NaveMesh.Object);
	MallaA->SetupAttachment(RootComponent);
	MallaA->BodyInstance.SetCollisionProfileName("Escudo");
	RootComponent = MallaA;

}

// Called when the game starts or when spawned
void ANaveEnemigaAsalto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaAsalto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigaAsalto::Movimiento()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta en movimiento"));
}

void ANaveEnemigaAsalto::Ataque()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta atacando"));
}

void ANaveEnemigaAsalto::HabilidadEspecial()
{
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT(" Nave Asalto esta usando su habilidad especial"));
}

