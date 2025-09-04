// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LPlayerController.h"
#include "LUtils.h"

void ALPlayerController::BeginPlay()
{
	FLUtils::Log(TEXT("APlayerController"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ALPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FLUtils::Log(TEXT("APlayerController"), TEXT("EndPlay"));
	Super::EndPlay(EndPlayReason);
}

void ALPlayerController::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("APlayerController"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}

void ALPlayerController::PostInitializeComponents()
{
	FLUtils::Log(TEXT("APlayerController"), TEXT("PostInitializeComponents"));
	Super::PostInitializeComponents();
}

void ALPlayerController::BeginPlayingState()
{
	FLUtils::Log(TEXT("APlayerController"), TEXT("BeginPlayingState"));
	Super::BeginPlayingState();
}

void ALPlayerController::EndPlayingState()
{
	FLUtils::Log(TEXT("APlayerController"), TEXT("EndPlayingState"));
	Super::EndPlayingState();
}
