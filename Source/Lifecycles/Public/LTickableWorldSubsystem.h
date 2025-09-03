// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "LTickableWorldSubsystem.generated.h"

UCLASS()
class LIFECYCLES_API ULTickableWorldSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void PostInitialize() override;
	virtual void BeginDestroy() override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void OnWorldComponentsUpdated(UWorld& World) override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	virtual void Tick(float DeltaTime) override;

	virtual TStatId GetStatId() const final override {
		RETURN_QUICK_DECLARE_CYCLE_STAT(Type, STATGROUP_Tickables)
	}

private:
	bool bTicked = false;
};