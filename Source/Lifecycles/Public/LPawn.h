// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "LPawn.generated.h"


UCLASS(Config = Game)
class LIFECYCLES_API ALPawn : public ADefaultPawn
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

private:
	bool bTicked = false;
};
