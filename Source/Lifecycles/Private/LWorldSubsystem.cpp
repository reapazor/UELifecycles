// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LWorldSubsystem.h"
#include "LUtils.h"

void ULWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("Initialize"));
	Super::Initialize(Collection);
}

void ULWorldSubsystem::Deinitialize()
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("Deinitialize"));
	Super::Deinitialize();
}

void ULWorldSubsystem::PostInitialize()
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("PostInitialize"));
	Super::PostInitialize();
}

void ULWorldSubsystem::BeginDestroy()
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULWorldSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("OnWorldBeginPlay"));
	Super::OnWorldBeginPlay(InWorld);
}

void ULWorldSubsystem::OnWorldComponentsUpdated(UWorld& World)
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("OnWorldComponentsUpdated"));
	Super::OnWorldComponentsUpdated(World);
}

bool ULWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	FLUtils::Log(TEXT("WorldSubsystem"), TEXT("ShouldCreateSubsystem"));
	return Super::ShouldCreateSubsystem(Outer);
}
