

#include "VRGameModeBase.h"
#include "WJ_GameStateMgr.h"
#include "WJ_PingPongMgr.h"
#include "WJ_ObjectPool.h"


AVRGameModeBase::AVRGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// #Component »ý¼º
	gameStateMgr = CreateDefaultSubobject<UWJ_GameStateMgr>(TEXT("GameStateManager"));
	pingpongStateMgr = CreateDefaultSubobject<UWJ_PingPongMgr>(TEXT("PingPongStateManager"));
	objectPool = CreateDefaultSubobject<UWJ_ObjectPool>(TEXT("ObjectPool"));
}

void AVRGameModeBase::BeginPlay()
{
	Super::BeginPlay();


}

void AVRGameModeBase::InitGameState()
{
	Super::InitGameState();
}

void AVRGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);


}