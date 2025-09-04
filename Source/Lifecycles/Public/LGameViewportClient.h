// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "Engine/GameViewportClient.h"
#include "LGameViewportClient.generated.h"

UCLASS(BlueprintType)
class ULGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

	virtual void Tick(float DeltaTime) override;
	virtual FSceneViewport* CreateGameViewport(TSharedPtr<SViewport> InViewportWidget) override;
	virtual void Init(struct FWorldContext& WorldContext, UGameInstance* OwningGameInstance, bool bCreateNewAudioDevice = true) override;
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	virtual void Activated(FViewport* InViewport, const FWindowActivateEvent& InActivateEvent) override;
	virtual void Deactivated(FViewport* InViewport, const FWindowActivateEvent& InActivateEvent) override;
	virtual void AddViewportWidgetForPlayer(ULocalPlayer* Player, TSharedRef<SWidget> ViewportContent, const int32 ZOrder) override;
	virtual void RemoveViewportWidgetForPlayer(ULocalPlayer* Player, TSharedRef<SWidget> ViewportContent) override;
	virtual void AddGameLayerWidget(TSharedRef<SWidget> ViewportContent, const int32 ZOrder) override;
	virtual void RemoveGameLayerWidget(TSharedRef<SWidget> ViewportContent) override;
private:
	bool bTicked = false;
};