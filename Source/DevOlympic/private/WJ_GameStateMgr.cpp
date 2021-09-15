

#include "WJ_GameStateMgr.h"

UWJ_GameStateMgr::UWJ_GameStateMgr()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UWJ_GameStateMgr::BeginPlay()
{
	Super::BeginPlay();

	
}


void UWJ_GameStateMgr::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UWJ_GameStateMgr::SetState(EGameState state)
{
	m_state = state;

	switch (m_state)
	{
	case EGameState::Lobby:
		break;
	case EGameState::PingPong:

		break;
	case EGameState::GameOver:
		break;
	default:
		break;
	}
}

EGameState UWJ_GameStateMgr::GetState()
{
	return m_state;
}