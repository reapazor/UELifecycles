// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LPlayerState.h"
#include "LUtils.h"

void ALPlayerState::PostInitializeComponents()
{
	FLUtils::Log(TEXT("APlayerState"), TEXT("PostInitializeComponents"));
	Super::PostInitializeComponents();
}

void ALPlayerState::Destroyed()
{
	FLUtils::Log(TEXT("APlayerState"), TEXT("Destroyed"));
	Super::Destroyed();
}

void ALPlayerState::Reset()
{
	FLUtils::Log(TEXT("APlayerState"), TEXT("Reset"));
	Super::Reset();
}

void ALPlayerState::BeginPlay()
{
	FLUtils::Log(TEXT("APlayerState"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ALPlayerState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FLUtils::Log(TEXT("APlayerState"), TEXT("EndPlay"));
	Super::EndPlay(EndPlayReason);
}

void ALPlayerState::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("APlayerState"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}
