// Free for all, this is just some test code thrown together to validate lifecycle order.
// Do whatever you want with it, very unlikely it's actually useful to anyone!

#include "Lifecycles.h"

#include "LUtils.h"
#include "Interfaces/IPluginManager.h"

void FLifecyclesModule::StartupModule()
{
	FLUtils::Log(TEXT("Lifecycles"), TEXT("StartupModule"));
	
	IModuleInterface::StartupModule();
	
	if (IPluginManager::Get().GetLastCompletedLoadingPhase() >= ELoadingPhase::PostDefault)
	{
		OnPostEngineInit();
	}
	else
	{
		FCoreDelegates::OnPostEngineInit.AddStatic(&FLifecyclesModule::OnPostEngineInit);
	}
}

void FLifecyclesModule::OnPostEngineInit()
{
	FLUtils::Log( TEXT("OnPostEngineInit"), TEXT(""), true);
	
	FEditorDelegates::BeginPIE.AddLambda([](bool IsSimulating)
	{
		FLUtils::Log(TEXT("BeginPIE"),TEXT(""), true);
	});
	FEditorDelegates::EndPIE.AddLambda([](bool IsSimulating)
	{
		FLUtils::Log(TEXT("EndPIE"),TEXT(""), true);
	});
}

IMPLEMENT_MODULE(FLifecyclesModule, Lifecycles)