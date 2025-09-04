A super quick little project to validate the lifecycle events in Unreal Engine.

```
(26) -=-=-=-=-=- BeginPIE -=-=-=-=-=-
(27) WorldSubsystem::ShouldCreateSubsystem
(28) WorldSubsystem::Initialize
(29) TickableWorldSubsystem::ShouldCreateSubsystem
(30) TickableWorldSubsystem::Initialize
(31) WorldSubsystem::PostInitialize
(32) TickableWorldSubsystem::PostInitialize
(33) UGameViewportClient::PostInitProperties
(34) UGameViewportClient::Init
(35) UGameViewportClient::Activated
(36) UActorComponent::OnRegister
(37) WorldSubsystem::OnWorldComponentsUpdated
(38) TickableWorldSubsystem::OnWorldComponentsUpdated
(39) GameMode::InitGame
(40) AGameSession::InitOptions
(41) AGameState::PostInitializeComponents
(42) GameMode::InitGameState
(43) AGameState::ReceivedGameModeClass
(44) UActorComponent::Activate
(45) Actor::PostInitializeComponents
(46) GameMode::PostInitializeComponents
(47) APlayerController::PostInitializeComponents
(48) APlayerState::PostInitializeComponents
(49) GameMode::PostLogin
(50) AGameSession::PostLogin
(51) APawn::PostInitializeComponents
(52) APlayerController::BeginPlayingState
(53) WorldSubsystem::OnWorldBeginPlay
(54) TickableWorldSubsystem::OnWorldBeginPlay
(55) AGameState::HandleBeginPlay
(56) UGameViewportClient::Activated
(57) APlayerController::Tick
(58) TickableWorldSubsystem::Tick
(59) UGameViewportClient::Tick
(60) AHUD::DrawHUD
(61) -=-=-=-=-=- EndPIE -=-=-=-=-=-
(62) APlayerState::Destroyed
(63) UActorComponent::OnUnregister
(64) WorldSubsystem::Deinitialize
(65) TickableWorldSubsystem::Deinitialize
(66) UGameViewportClient::BeginDestroy
(67) TickableWorldSubsystem::BeginDestroy
(68) WorldSubsystem::BeginDestroy
(69) UActorComponent::BeginDestroy

```
