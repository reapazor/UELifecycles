// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LActor.h"
#include "LActorComponent.h"
#include "LUtils.h"

// Sets default values
ALActor::ALActor()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	ActorComponent = CreateDefaultSubobject<ULActorComponent>(TEXT("Lifecycle Actor Component"));
}

void ALActor::BeginPlay()
{
	FLUtils::Log(TEXT("Actor"), TEXT("BeginPlay"));
	Super::BeginPlay();
}

void ALActor::Tick(float DeltaTime)
{
	if (!bTicked)
	{
		FLUtils::Log(TEXT("Actor"), TEXT("Tick"));
		bTicked = true;
	}
	
	Super::Tick(DeltaTime);
}
