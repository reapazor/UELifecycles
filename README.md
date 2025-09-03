A super quick little project to validate the lifecycle events in Unreal Engine.

```
Log          LogLifecycle              [LIFECYCLE] (25) -=-=-=-=-=- BeginPIE -=-=-=-=-=-
Log          LogLifecycle              [LIFECYCLE] (26) WorldSubsystem::ShouldCreateSubsystem
Log          LogLifecycle              [LIFECYCLE] (27) WorldSubsystem::Initialize
Log          LogLifecycle              [LIFECYCLE] (28) TickableWorldSubsystem::ShouldCreateSubsystem
Log          LogLifecycle              [LIFECYCLE] (29) TickableWorldSubsystem::Initialize
Log          LogLifecycle              [LIFECYCLE] (30) WorldSubsystem::PostInitialize
Log          LogLifecycle              [LIFECYCLE] (31) TickableWorldSubsystem::PostInitialize
Log          LogLifecycle              [LIFECYCLE] (32) ULActorComponent::OnRegister
Log          LogLifecycle              [LIFECYCLE] (33) WorldSubsystem::OnWorldComponentsUpdated
Log          LogLifecycle              [LIFECYCLE] (34) TickableWorldSubsystem::OnWorldComponentsUpdated
Log          LogLifecycle              [LIFECYCLE] (35) GameMode::InitGame
Log          LogLifecycle              [LIFECYCLE] (36) GameMode::InitGameState
Log          LogLifecycle              [LIFECYCLE] (37) ULActorComponent::Activate
Log          LogLifecycle              [LIFECYCLE] (38) GameMode::PostInitializeComponents
Log          LogLifecycle              [LIFECYCLE] (39) GameMode::PostLogin
Log          LogLifecycle              [LIFECYCLE] (40) WorldSubsystem::OnWorldBeginPlay
Log          LogLifecycle              [LIFECYCLE] (41) TickableWorldSubsystem::OnWorldBeginPlay
Log          LogLifecycle              [LIFECYCLE] (42) Actor::BeginPlay
Log          LogLifecycle              [LIFECYCLE] (43) ULActorComponent::BeginPlay
Log          LogLifecycle              [LIFECYCLE] (44) GameMode::BeginPlay
Log          LogLifecycle              [LIFECYCLE] (45) Actor::Tick
Log          LogLifecycle              [LIFECYCLE] (46) ULActorComponent::TickComponent
Log          LogLifecycle              [LIFECYCLE] (47) TickableWorldSubsystem::Tick
Log          LogLifecycle              [LIFECYCLE] (48) -=-=-=-=-=- EndPIE -=-=-=-=-=-
Log          LogLifecycle              [LIFECYCLE] (49) GameMode::EndPlay
Log          LogLifecycle              [LIFECYCLE] (50) ULActorComponent::OnUnregister
Log          LogLifecycle              [LIFECYCLE] (51) WorldSubsystem::Deinitialize
Log          LogLifecycle              [LIFECYCLE] (52) TickableWorldSubsystem::Deinitialize
Log          LogLifecycle              [LIFECYCLE] (53) TickableWorldSubsystem::BeginDestroy
Log          LogLifecycle              [LIFECYCLE] (54) WorldSubsystem::BeginDestroy
Log          LogLifecycle              [LIFECYCLE] (55) ULActorComponent::BeginDestroy
```
