// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AndroidTestHUD.generated.h"

UCLASS()
class AAndroidTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAndroidTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

