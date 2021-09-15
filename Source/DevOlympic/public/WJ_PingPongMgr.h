#pragma once

#include "DevOlympic.h"
#include "Components/ActorComponent.h"
#include "WJ_PingPongMgr.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEVOLYMPIC_API UWJ_PingPongMgr : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWJ_PingPongMgr();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void SetState(EPingPongState state);
	EPingPongState GetState();

	// # 이벤트 함수
	void StartRally();		// 플레이어가 공을 치면 호출한다.
	void OnCollisionGround(int player, bool in);	/// 공이 땅에 닿으면 호출된다. 0 PlayerA, 1 PlayerB가 친 공, in true 득점 false 실점
	void NetServ();

private:

	UPROPERTY()
	class AVRGameModeBase* gameModeBase;

	// # EditModeSelect
	class AModeSelect* modeSelect;
	EEditMode editMode; //캐싱해서 사용


	EPingPongState m_state = EPingPongState::Intro;
	int pointA = 0;	// 11점
	int pointB = 0;
	int set = 1;	// 5세트
	int scoreA = 0;
	int scoreB = 0;

	bool bServPlayer = true; // T/F 로 플레이어 A, B 서버 구분
	int servCount = 0;	// 2가 되면 서브 변경
	bool bSpawnBall = false;

	bool bIsDeuce = false;

	void Intro();
	void Serv();
	void Rally();
	void RallyOver();
	void SetOver();
	void MatchOver();
};
