// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "GameFramework/HUD.h"
#include "LHUD.generated.h"

/**
 * The HUD used in the NEXUS samples.
 */
UCLASS()
class LIFECYCLES_API ALHUD : public AHUD
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void DrawHUD() override;

private:
	bool bTicked = false;
	bool bDrawHUD = false;
	
};