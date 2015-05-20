// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSGameMode : public AGameMode
{
	GENERATED_BODY()
	
	// TODO: is this needed?
	AFPSGameMode(const FObjectInitializer& ObjectInitializer);

	virtual void StartPlay() override;
	
	
};
