// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "Engine/LocalPlayer.h"
#include "LLocalPlayer.generated.h"

UCLASS(BlueprintType)
class ULLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()

	virtual void SwitchController( class APlayerController* PC ) override;
};