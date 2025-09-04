// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerState.h"
#include "LPlayerState.generated.h"

UCLASS()
class LIFECYCLES_API ALPlayerState : public APlayerState
{
	GENERATED_BODY()

	virtual void PostInitializeComponents() override; 
	virtual void Destroyed() override;
	virtual void Reset() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;

private:
	bool bTicked = false;
};