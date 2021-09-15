// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_PingPongTable.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SJ_PingPongBall.h"
#include "SJ_PingPongTableSideA.h"
#include "SJ_PingPongTableSideB.h"
#include "SJ_Net.h"

// Sets default values
ASJ_PingPongTable::ASJ_PingPongTable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Å¹±¸´ë
	pingpongTable = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PingPongTable"));
	SetRootComponent(pingpongTable);
	pingpongTable->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// SideA
	ConstructorHelpers::FClassFinder<ASJ_PingPongTableSideA> sideABP(TEXT("/Game/SJ/Blueprints/PingPong/PingPongTable/BP_SJ_PingPongTableSideA"));

	if (sideABP.Succeeded())
	{
		sideA = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildSideA"));
		sideA->SetupAttachment(pingpongTable);
		sideA->SetChildActorClass(sideABP.Class);
	}

	// Side B
	ConstructorHelpers::FClassFinder<ASJ_PingPongTableSideB> sideBBP(TEXT("/Game/SJ/Blueprints/PingPong/PingPongTable/BP_SJ_PingPongTableSideB"));

	if (sideBBP.Succeeded())
	{
		sideB = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildSideB"));
		sideB->SetupAttachment(pingpongTable);
		sideB->SetChildActorClass(sideBBP.Class);
	}

	// Net
	ConstructorHelpers::FClassFinder<ASJ_Net> netBP(TEXT("/Game/SJ/Blueprints/PingPong/PingPongTable/BP_SJ_Net"));

	if (netBP.Succeeded())
	{
		childNet = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildNet"));
		childNet->SetupAttachment(pingpongTable);
		childNet->SetChildActorClass(netBP.Class);
	}
}

// Called when the game starts or when spawned
void ASJ_PingPongTable::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASJ_PingPongTable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

