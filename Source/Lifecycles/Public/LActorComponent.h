// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "LActorComponent.generated.h"

UCLASS(BlueprintType, meta = (BlueprintSpawnableComponent))
class LIFECYCLES_API ULActorComponent : public UActorComponent
{
	GENERATED_BODY()

	ULActorComponent();
	
	virtual void BeginDestroy() override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void InitializeComponent() override;
	virtual void Deactivate() override;
	virtual void Activate(bool bReset = false) override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;

private:
	bool bTicked = false;
};
