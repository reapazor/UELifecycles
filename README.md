A super quick little project to validate the lifecycle events in Unreal Engine.

## Notes

- Extends `AGameMode` (not `AGameModeBase`), so some behaviour might be slightly different based on your own setup.
- `APlayerState` gets duplicated on tear down when the player is recreated as inactive, thus you see it post EndPIE being created.
  
## Flow

```
(20) -=-=-=-=-=- BeginPIE -=-=-=-=-=-
(21) UWorldSubsystem::ShouldCreateSubsystem
(22) UWorldSubsystem::Initialize
(23) UTickableWorldSubsystem::ShouldCreateSubsystem
(24) UTickableWorldSubsystem::Initialize
(25) UWorldSubsystem::PostInitialize
(26) UTickableWorldSubsystem::PostInitialize
(27) UGameViewportClient::PostInitProperties
(28) UGameViewportClient::Init
(29) UGameViewportClient::Activated
(30) UActorComponent::OnRegister
(31) UWorldSubsystem::OnWorldComponentsUpdated
(32) UTickableWorldSubsystem::OnWorldComponentsUpdated
(33) AGameMode::InitGame
(34) AGameSession::InitOptions
(35) AGameState::PostInitializeComponents
(36) AGameMode::InitGameState
(37) AGameState::ReceivedGameModeClass
(38) UActorComponent::Activate
(39) AActor::PostInitializeComponents
(40) AGameMode::PostInitializeComponents
(41) APlayerController::PostInitializeComponents
(42) APlayerState::PostInitializeComponents
(43) AGameMode::PostLogin
(44) AGameSession::PostLogin
(45) UWorldSubsystem::OnWorldBeginPlay
(46) UTickableWorldSubsystem::OnWorldBeginPlay
(47) APawn::PostInitializeComponents
(48) APlayerController::BeginPlayingState
(49) AActor::BeginPlay
(50) UActorComponent::BeginPlay
(51) AGameMode::BeginPlay
(52) ULevelBlueprint::Event BeginPlay
(53) APlayerController::BeginPlay
(54) APlayerState::BeginPlay
(55) APawn::BeginPlay
(56) UGameViewportClient::Activated
(57) AGameMode::Tick
(58) APlayerController::Tick
(59) AActor::Tick
(60) ULevelBlueprint::Event Tick
(61) APawn::Tick
(62) UActorComponent::TickComponent
(63) AHUD::Tick
(64) UTickableWorldSubsystem::Tick
(65) UGameViewportClient::Tick
(66) AHUD::DrawHUD
(67) -=-=-=-=-=- EndPIE -=-=-=-=-=-
(68) APlayerState::PostInitializeComponents
(69) APlayerState::BeginPlay
(70) APlayerState::Destroyed
(71) APlayerState::EndPlay
(72) APlayerController::EndPlay
(73) AActor::EndPlay
(74) AGameMode::EndPlay
(75) ULevelBlueprint::Event End Play
(76) APawn::EndPlay
(77) APlayerState::EndPlay
(78) UActorComponent::OnUnregister
(79) UWorldSubsystem::Deinitialize
(80) UTickableWorldSubsystem::Deinitialize
(81) UGameViewportClient::BeginDestroy
(82) UTickableWorldSubsystem::BeginDestroy
(83) UWorldSubsystem::BeginDestroy
(84) UActorComponent::BeginDestroy
```
