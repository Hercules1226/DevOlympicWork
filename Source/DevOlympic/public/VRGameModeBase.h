
#pragma once

#include "DevOlympic.h"
#include "GameFramework/GameModeBase.h"
#include "VRGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEVOLYMPIC_API AVRGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AVRGameModeBase();

	virtual void BeginPlay() override;

	virtual void InitGameState() override;

	virtual void Tick(float DeltaSeconds) override;

	
public:
	
	// # ¿¢ÅÍ ÄÄÆ÷³ÍÆ®
	UPROPERTY(EditAnywhere, Category = Components)
	class UWJ_GameStateMgr* gameStateMgr;

	UPROPERTY(EditAnywhere, Category = Components)
	class UWJ_PingPongMgr* pingpongStateMgr;

	UPROPERTY(EditAnywhere, Category = Components)
	class UWJ_ObjectPool* objectPool;

	
};
