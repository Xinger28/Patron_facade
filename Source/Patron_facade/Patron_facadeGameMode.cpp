// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_facadeGameMode.h"
#include "EscuadronNaves.h"
#include "Patron_facadePawn.h"

APatron_facadeGameMode::APatron_facadeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APatron_facadePawn::StaticClass();
}

void APatron_facadeGameMode::BeginPlay()
{
		Super::BeginPlay();
		Escuadrones = GetWorld()->SpawnActor<AEscuadronNaves>(AEscuadronNaves::StaticClass());
		Escuadrones->MovimientoEscuadron();
		Escuadrones->AtaqueEscuadron();
		Escuadrones->HabilidadEspecialEscuadron();
}

void APatron_facadeGameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

