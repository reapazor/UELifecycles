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
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("BeginDestroy"));
	Super::BeginDestroy();
}

void ULActorComponent::BeginPlay()
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ULActorComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("ULActorComponent"), TEXT("TickComponent"));
		bTicked = true;
	}
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void ULActorComponent::InitializeComponent()
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("InitializeComponent"));
	Super::InitializeComponent();
}

void ULActorComponent::Deactivate()
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("Deactivate"));
	Super::Deactivate();
}

void ULActorComponent::Activate(bool bReset)
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("Activate"));
	Super::Activate(bReset);
}

void ULActorComponent::OnRegister()
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("OnRegister"));
	Super::OnRegister();
}

void ULActorComponent::OnUnregister()
{
	FLUtils::Log(TEXT("ULActorComponent"), TEXT("OnUnregister"));
	Super::OnUnregister();
}
