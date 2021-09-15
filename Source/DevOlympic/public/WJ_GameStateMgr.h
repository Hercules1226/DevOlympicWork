
#pragma once

#include "DevOlympic.h"
#include "Components/ActorComponent.h"
#include "WJ_GameStateMgr.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEVOLYMPIC_API UWJ_GameStateMgr : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWJ_GameStateMgr();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	void SetState(EGameState state);
	EGameState GetState();

private:
	EGameState m_state = EGameState::Lobby;

};
