// Fill out your copyright notice in the Description page of Project Settings.


#include "EscuadronNaves.h"

// Sets default values
AEscuadronNaves::AEscuadronNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscuadronNaves::BeginPlay()
{
	Super::BeginPlay();
	NaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(FVector(0.0f,0.0f,200.0f),FRotator::ZeroRotator);
	NaveFantasma = GetWorld()->SpawnActor<ANaveEnemigaFantasma>(FVector(0.0f, 300.0f, 200.0f), FRotator::ZeroRotator);
	NaveAsalto = GetWorld()->SpawnActor<ANaveEnemigaAsalto>(FVector(0.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
	
}

// Called every frame
void AEscuadronNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscuadronNaves::MovimientoEscuadron()
{
	NaveCaza->Movimiento();
	NaveFantasma->Movimiento();
	NaveAsalto->Movimiento();
}

void AEscuadronNaves::AtaqueEscuadron()
{
	NaveCaza->Ataque();
	NaveFantasma->Ataque();
	NaveAsalto->Ataque();
}

void AEscuadronNaves::HabilidadEspecialEscuadron()
{
	NaveCaza->HabilidadEspecial();
	NaveFantasma->HabilidadEspecial();
	NaveAsalto->HabilidadEspecial();
}

