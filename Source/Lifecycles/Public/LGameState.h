// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "LGameState.generated.h"


UCLASS()
class LIFECYCLES_API ALGameState : public AGameState
{
	GENERATED_BODY()
	
	virtual void PostInitializeComponents() override;
	virtual void ReceivedGameModeClass() override;
	virtual bool HasMatchStarted() const override;
	virtual bool HasMatchEnded() const override;
	virtual void HandleBeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	bool bTicked = false;
};
	