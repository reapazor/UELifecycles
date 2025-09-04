A super quick little project to validate the lifecycle events in Unreal Engine.

```
(26) -=-=-=-=-=- BeginPIE -=-=-=-=-=-
(27) UWorldSubsystem::ShouldCreateSubsystem
(28) UWorldSubsystem::Initialize
(29) UTickableWorldSubsystem::ShouldCreateSubsystem
(30) UTickableWorldSubsystem::Initialize
(31) UWorldSubsystem::PostInitialize
(32) UTickableWorldSubsystem::PostInitialize
(33) UGameViewportClient::PostInitProperties
(34) UGameViewportClient::Init
(35) UGameViewportClient::Activated
(36) UActorComponent::OnRegister
(37) UWorldSubsystem::OnWorldComponentsUpdated
(38) UTickableWorldSubsystem::OnWorldComponentsUpdated
(39) AGameMode::InitGame
(40) AGameSession::InitOptions
(41) AGameState::PostInitializeComponents
(42) AGameMode::InitGameState
(43) AGameState::ReceivedGameModeClass
(44) UActorComponent::Activate
(45) AActor::PostInitializeComponents
(46) AGameMode::PostInitializeComponents
(47) APlayerController::PostInitializeComponents
(48) APlayerState::PostInitializeComponents
(49) AGameMode::PostLogin
(50) AGameSession::PostLogin
(51) APawn::PostInitializeComponents
(52) APlayerController::BeginPlayingState
(53) UWorldSubsystem::OnWorldBeginPlay
(54) UTickableWorldSubsystem::OnWorldBeginPlay
(55) AGameState::HandleBeginPlay
(56) UGameViewportClient::Activated
(57) APlayerController::Tick
(58) UTickableWorldSubsystem::Tick
(59) UGameViewportClient::Tick
(60) AHUD::DrawHUD
(61) -=-=-=-=-=- EndPIE -=-=-=-=-=-
(62) APlayerState::Destroyed
(63) UActorComponent::OnUnregister
(64) UWorldSubsystem::Deinitialize
(65) UTickableWorldSubsystem::Deinitialize
(66) UGameViewportClient::BeginDestroy
(67) UTickableWorldSubsystem::BeginDestroy
(68) UWorldSubsystem::BeginDestroy
(69) UActorComponent::BeginDestroy

```
