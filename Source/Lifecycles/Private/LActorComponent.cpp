// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LActorComponent.h"
#include "LUtils.h"

ULActorComponent::ULActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	UActorComponent::SetAutoActivate(true);
	UActorComponent::SetComponentTickEnabled(true);
}

void ULActorComponent::BeginDestroy()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULActorComponent::BeginPlay()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ULActorComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("UActorComponent"), TEXT("TickComponent"));
		bTicked = true;
	}
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void ULActorComponent::InitializeComponent()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("InitializeComponent"));
	Super::InitializeComponent();
}

void ULActorComponent::Deactivate()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("Deactivate"));
	Super::Deactivate();
}

void ULActorComponent::Activate(bool bReset)
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("Activate"));
	Super::Activate(bReset);
}

void ULActorComponent::OnRegister()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("OnRegister"));
	Super::OnRegister();
}

void ULActorComponent::OnUnregister()
{
	FLUtils::Log(TEXT("UActorComponent"), TEXT("OnUnregister"));
	Super::OnUnregister();
}
