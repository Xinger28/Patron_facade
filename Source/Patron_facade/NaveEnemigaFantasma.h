// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaFantasma.generated.h"

UCLASS()
class PATRON_FACADE_API ANaveEnemigaFantasma : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MallaF, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaF;
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaFantasma();

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

};
