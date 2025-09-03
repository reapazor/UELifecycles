// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "LUtils.h"

DEFINE_LOG_CATEGORY(LogLifecycle);

int FLUtils::Ticket = 0;
void FLUtils::Log(const FString& Class, const FString& Method, const bool Divider)
{
	Ticket++;
	if (Divider)
	{
		UE_LOG(LogLifecycle, Log, TEXT("[LIFECYCLE] (%i) -=-=-=-=-=- %s -=-=-=-=-=-"), Ticket, *Class);
	}
	else
	{
		UE_LOG(LogLifecycle, Log, TEXT("[LIFECYCLE] (%i) %s::%s"), Ticket, *Class, *Method);
	}
	
}
