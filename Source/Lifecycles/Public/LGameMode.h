// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LGameMode.generated.h"

UCLASS()
class LIFECYCLES_API ALGameMode : public AGameMode
{
	GENERATED_BODY()

	explicit ALGameMode(const FObjectInitializer& ObjectInitializer);
	
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

private:
	bool bTicked = false;
};
