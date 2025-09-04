// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LGameSession.h"
#include "LUtils.h"

void ALGameSession::InitOptions(const FString& Options)
{
	FLUtils::Log(TEXT("AGameSession"), TEXT("InitOptions"));
	Super::InitOptions(Options);
}

void ALGameSession::Tick(float DeltaSeconds)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("AGameSession"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaSeconds);
}

void ALGameSession::PostLogin(APlayerController* NewPlayer)
{
	FLUtils::Log(TEXT("AGameSession"), TEXT("PostLogin"));
	Super::PostLogin(NewPlayer);
}
