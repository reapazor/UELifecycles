// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LWorldSubsystem.h"
#include "LUtils.h"

void ULWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("Initialize"));
	Super::Initialize(Collection);
}

void ULWorldSubsystem::Deinitialize()
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("Deinitialize"));
	Super::Deinitialize();
}

void ULWorldSubsystem::PostInitialize()
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("PostInitialize"));
	Super::PostInitialize();
}

void ULWorldSubsystem::BeginDestroy()
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULWorldSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("OnWorldBeginPlay"));
	Super::OnWorldBeginPlay(InWorld);
}

void ULWorldSubsystem::OnWorldComponentsUpdated(UWorld& World)
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("OnWorldComponentsUpdated"));
	Super::OnWorldComponentsUpdated(World);
}

bool ULWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	FLUtils::Log(TEXT("UWorldSubsystem"), TEXT("ShouldCreateSubsystem"));
	return Super::ShouldCreateSubsystem(Outer);
}
