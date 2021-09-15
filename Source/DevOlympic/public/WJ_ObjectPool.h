
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WJ_ObjectPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEVOLYMPIC_API UWJ_ObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWJ_ObjectPool();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	// # 殴备

	//		殴备傍 某教
	UPROPERTY(EditAnywhere, Category = PingPong_Settings)
	TSubclassOf<class APingPongBall> pingpoingFactory;

	//		殴备傍 家券
	void GetPingPongBall(int player);

};
