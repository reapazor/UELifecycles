// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LGameState.h"
#include "LUtils.h"

void ALGameState::PostInitializeComponents()
{
	FLUtils::Log(TEXT("AGameState"), TEXT("PostInitializeComponents"));
	Super::PostInitializeComponents();
}

void ALGameState::ReceivedGameModeClass()
{
	FLUtils::Log(TEXT("AGameState"), TEXT("ReceivedGameModeClass"));
	Super::ReceivedGameModeClass();
}

bool ALGameState::HasMatchStarted() const
{
	FLUtils::Log(TEXT("AGameState"), TEXT("HasMatchStarted"));
	return Super::HasMatchStarted();
}

bool ALGameState::HasMatchEnded() const
{
	FLUtils::Log(TEXT("AGameState"), TEXT("HasMatchEnded"));
	return Super::HasMatchEnded();
}

void ALGameState::HandleBeginPlay()
{
	FLUtils::Log(TEXT("AGameState"), TEXT("HandleBeginPlay"));
	Super::HandleBeginPlay();
}

void ALGameState::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("AGameState"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}
