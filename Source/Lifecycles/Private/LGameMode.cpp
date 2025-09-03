// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LGameMode.h"

#include "LUtils.h"

void ALGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	FLUtils::Log(TEXT("GameMode"), TEXT("InitGame"));
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ALGameMode::InitGameState()
{
	FLUtils::Log(TEXT("GameMode"), TEXT("InitGameState"));
	Super::InitGameState();
}

void ALGameMode::BeginPlay()
{
	FLUtils::Log(TEXT("GameMode"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ALGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FLUtils::Log(TEXT("GameMode"), TEXT("EndPlay"));
	Super::EndPlay(EndPlayReason);
}

void ALGameMode::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("GameMode"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}

void ALGameMode::PostInitializeComponents()
{
	FLUtils::Log(TEXT("GameMode"), TEXT("PostInitializeComponents"));
	Super::PostInitializeComponents();
}

void ALGameMode::PostLogin(APlayerController* NewPlayer)
{
	FLUtils::Log(TEXT("GameMode"), TEXT("PostLogin"));
	Super::PostLogin(NewPlayer);
}
