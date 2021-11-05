// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Tencent_HW1HUD.generated.h"

UCLASS()
class ATencent_HW1HUD : public AHUD
{
	GENERATED_BODY()

public:
	ATencent_HW1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

