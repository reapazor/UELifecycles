// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LPawn.h"
#include "LUtils.h"

void ALPawn::BeginPlay()
{
	FLUtils::Log(TEXT("APawn"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ALPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FLUtils::Log(TEXT("APawn"), TEXT("EndPlay"));
	Super::EndPlay(EndPlayReason);
}

void ALPawn::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("APawn"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}

void ALPawn::PostInitializeComponents()
{
	FLUtils::Log(TEXT("APawn"), TEXT("PostInitializeComponents"));
	Super::PostInitializeComponents();
}
