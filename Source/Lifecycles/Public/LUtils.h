// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

LIFECYCLES_API DECLARE_LOG_CATEGORY_EXTERN(LogLifecycle, Log, All);

class FLUtils
{
public:
	static int Ticket;
	static void Log(const FString& Class, const FString& Method, bool Divider = false);
};
