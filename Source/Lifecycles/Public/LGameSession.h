// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "LGameSession.generated.h"


UCLASS()
class LIFECYCLES_API ALGameSession : public AGameSession
{
	GENERATED_BODY()

	virtual void InitOptions(const FString& Options) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

private:
	bool bTicked = false;
};
	