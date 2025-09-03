// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LActor.generated.h"

class ULActorComponent;

UCLASS(BlueprintType)
class LIFECYCLES_API ALActor : public AActor
{
	GENERATED_BODY()
	
public:
	ALActor();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	ULActorComponent* ActorComponent;
protected:
	virtual void BeginPlay() override;

private:
	bool bTicked = false;
};
