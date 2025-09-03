// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#pragma once

#include "Modules/ModuleManager.h"
class FLifecyclesModule final : public IModuleInterface
{
	virtual void StartupModule() override;
	static void OnPostEngineInit();
};