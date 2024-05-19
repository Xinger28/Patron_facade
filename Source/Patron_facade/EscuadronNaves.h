// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaAsalto.h"
#include "NaveEnemigaFantasma.h"
#include "EscuadronNaves.generated.h"

UCLASS()
class PATRON_FACADE_API AEscuadronNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscuadronNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ANaveEnemigaCaza* NaveCaza;
	ANaveEnemigaFantasma* NaveFantasma;
	ANaveEnemigaAsalto* NaveAsalto;

public:
	void MovimientoEscuadron();
	void AtaqueEscuadron();
	void HabilidadEspecialEscuadron();

};
