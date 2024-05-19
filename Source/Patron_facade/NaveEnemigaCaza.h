// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCaza.generated.h"

UCLASS()
class PATRON_FACADE_API ANaveEnemigaCaza : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MallaC, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaC;
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Movimiento();
	void Ataque();
	void HabilidadEspecial();

	float Velocidad;
};
