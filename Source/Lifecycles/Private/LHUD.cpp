// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LHUD.h"
#include "LUtils.h"

void ALHUD::Tick(float DeltaSeconds)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("AHUD"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaSeconds);
}

void ALHUD::DrawHUD()
{
	if (!bDrawHUD)
	{
		FLUtils::Log(TEXT("AHUD"), TEXT("DrawHUD"));
		bDrawHUD = true;
	}
	Super::DrawHUD();
}
