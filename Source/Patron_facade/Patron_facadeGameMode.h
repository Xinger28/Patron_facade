// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EscuadronNaves.h"
#include "Patron_facadeGameMode.generated.h"

UCLASS(MinimalAPI)
class APatron_facadeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatron_facadeGameMode();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	AEscuadronNaves* Escuadrones;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};



