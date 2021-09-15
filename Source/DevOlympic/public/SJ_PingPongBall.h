// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_PingPongBall.generated.h"

UCLASS()
class DEVOLYMPIC_API ASJ_PingPongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_PingPongBall();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PingPongBall)
		class UStaticMeshComponent* meshComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = PingPongBallSound)
	class USoundBase* pingpongSound;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// 어떤 플레이어가 쳤는지 검사, 서브 전에는 -1 따라서 랠리가 끝나고 다시 시작 할 때는 초기화
	UPROPERTY(VisibleAnywhere, Category = PlayerID)
	int32 playerID = -1;

	// Side A 에 맞았으면 true
	UPROPERTY(VisibleAnywhere, Category = SideID)
	bool inSideA;

	// Side B 에 맞았으면 true
	UPROPERTY(VisibleAnywhere, Category = SideID)
	bool inSideB;

	// Bool 초기화 함수
	void InitSideState();
};
