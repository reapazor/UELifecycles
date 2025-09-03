// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LTickableWorldSubsystem.h"
#include "LUtils.h"

void ULTickableWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("Initialize"));
	Super::Initialize(Collection);
}

void ULTickableWorldSubsystem::Deinitialize()
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("Deinitialize"));
	Super::Deinitialize();
}

void ULTickableWorldSubsystem::PostInitialize()
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("PostInitialize"));
	Super::PostInitialize();
}

void ULTickableWorldSubsystem::BeginDestroy()
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULTickableWorldSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("OnWorldBeginPlay"));
	Super::OnWorldBeginPlay(InWorld);
}

void ULTickableWorldSubsystem::OnWorldComponentsUpdated(UWorld& World)
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("OnWorldComponentsUpdated"));
	Super::OnWorldComponentsUpdated(World);
}

bool ULTickableWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("ShouldCreateSubsystem"));
	return Super::ShouldCreateSubsystem(Outer);
}

void ULTickableWorldSubsystem::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("TickableWorldSubsystem"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}
