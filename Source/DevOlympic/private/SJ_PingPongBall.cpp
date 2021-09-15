// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_PingPongBall.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SJ_PingPongPlayer.h"
#include "SJ_PingPongTableSideA.h"
#include "SJ_PingPongTableSideB.h"
#include "SJ_Net.h"
#include "VRGameModeBase.h"
#include "WJ_PingPongMgr.h"

// Sets default values
ASJ_PingPongBall::ASJ_PingPongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

// Called when the game starts or when spawned
void ASJ_PingPongBall::BeginPlay()
{
	Super::BeginPlay();
	
	meshComp->OnComponentHit.AddDynamic(this, &ASJ_PingPongBall::OnHit);
}

// Called every frame
void ASJ_PingPongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASJ_PingPongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	auto sideA = Cast<ASJ_PingPongTableSideA>(OtherActor);
	auto sideB = Cast<ASJ_PingPongTableSideB>(OtherActor);
	auto net = Cast<ASJ_Net>(OtherActor);
	auto player = Cast<ASJ_PingPongPlayer>(OtherActor);

	// ���� ��� ��������
	auto vrGameMNG = Cast<AVRGameModeBase>(GetWorld()->GetAuthGameMode());

	// �̸��˻�
	FString name = OtherActor->GetName();

	// �÷��̾� SideA �� �ε����� ��
	if (sideA)
	{
		// SideA �� ó�� �浹 ���� ��
		if (inSideA == false)
		{
			inSideA = true;
		}
		// ���ϻ��̵� �ߺ� �浹 �� ����(true �� �� �� �浹)
		else if (inSideA == true)
		{
			vrGameMNG->pingpongStateMgr->OnCollisionGround(playerID, false);
			inSideA = false;
			inSideB = false;
		}
	}
	// �÷��̾� SideB �� �ε����� ��
	else if (sideB)
	{
		// SideA�� �����ϰ�
		if (inSideB == false)
		{
			inSideB = true;
		}
		else if (inSideB == true)
		{
			vrGameMNG->pingpongStateMgr->OnCollisionGround(playerID, false);
			// �ʱ�ȭ �Լ�
			InitSideState();
		}
	}
	// ��Ʈ�� �ε�������
	else if (net)
	{

	}
	// �÷��̾ ���� ��
	else if (player)
	{
		// ���� ����
		vrGameMNG->pingpongStateMgr->StartRally();

		// �÷��̾� A �� ������
		playerID = 0;

		// �ʱ�ȭ �Լ�
		InitSideState();
	}
	// ��ܷ� �Ǽ� �ٴڿ� �ε�������
	else if (name.Contains("Floor"))
	{
		// A, B �� �� �浹 �� �׶���� ����
		if (inSideA == true && inSideB == true)
		{
			vrGameMNG->pingpongStateMgr->OnCollisionGround(playerID, true);
		}
		else
		{
			vrGameMNG->pingpongStateMgr->OnCollisionGround(playerID, false);
		}

		// �ʱ�ȭ �Լ�
		InitSideState();
	}

	// ���� ���
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), pingpongSound, GetActorLocation());
}

void ASJ_PingPongBall::InitSideState()
{
	inSideA = false;
	inSideB = false;
}

