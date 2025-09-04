// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "CoreMinimal.h"
#include "LUtils.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LLibrary.generated.h"

UCLASS()
class ULLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, DisplayName = "Log", Category = "Lifecycles")
	static void Log(const FString& Class, const FString& Method, const bool Divider = false)
	{
		FLUtils::Log(Class, Method, Divider);
	}
};
