// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LLocalPlayer.h"
#include "LUtils.h"

void ULLocalPlayer::SwitchController(class APlayerController* PC)
{
	FLUtils::Log(TEXT("ULocalPlayer"), TEXT("SwitchController"));
	Super::SwitchController(PC);
}
