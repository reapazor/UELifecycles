// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LGameViewportClient.h"
#include "LUtils.h"

void ULGameViewportClient::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("UGameViewportClient"), TEXT("Tick"));
		bTicked = true;
	}
	Super::Tick(DeltaTime);
}

FSceneViewport* ULGameViewportClient::CreateGameViewport(TSharedPtr<SViewport> InViewportWidget)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("CreateGameViewport"));
	return Super::CreateGameViewport(InViewportWidget);
}

void ULGameViewportClient::Init(struct FWorldContext& WorldContext, UGameInstance* OwningGameInstance,
	bool bCreateNewAudioDevice)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("Init"));
	Super::Init(WorldContext, OwningGameInstance, bCreateNewAudioDevice);
}

void ULGameViewportClient::PostInitProperties()
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("PostInitProperties"));
	Super::PostInitProperties();
}

void ULGameViewportClient::BeginDestroy()
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULGameViewportClient::Activated(FViewport* InViewport, const FWindowActivateEvent& InActivateEvent)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("Activated"));
	Super::Activated(InViewport, InActivateEvent);
}

void ULGameViewportClient::Deactivated(FViewport* InViewport, const FWindowActivateEvent& InActivateEvent)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("Deactivated"));
	Super::Deactivated(InViewport, InActivateEvent);
}

void ULGameViewportClient::AddViewportWidgetForPlayer(ULocalPlayer* Player, TSharedRef<SWidget> ViewportContent,
	const int32 ZOrder)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("AddViewportWidgetForPlayer"));
	Super::AddViewportWidgetForPlayer(Player, ViewportContent, ZOrder);
}

void ULGameViewportClient::RemoveViewportWidgetForPlayer(ULocalPlayer* Player, TSharedRef<SWidget> ViewportContent)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("RemoveViewportWidgetForPlayer"));
	Super::RemoveViewportWidgetForPlayer(Player, ViewportContent);
}

void ULGameViewportClient::AddGameLayerWidget(TSharedRef<SWidget> ViewportContent, const int32 ZOrder)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("AddGameLayerWidget"));
	Super::AddGameLayerWidget(ViewportContent, ZOrder);
}

void ULGameViewportClient::RemoveGameLayerWidget(TSharedRef<SWidget> ViewportContent)
{
	FLUtils::Log(TEXT("UGameViewportClient"), TEXT("RemoveGameLayerWidget"));
	Super::RemoveGameLayerWidget(ViewportContent);
}
