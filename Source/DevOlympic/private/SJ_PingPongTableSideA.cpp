// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_PingPongTableSideA.h"
#include "Components/BoxComponent.h"

// Sets default values
ASJ_PingPongTableSideA::ASJ_PingPongTableSideA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sideA = CreateDefaultSubobject<UBoxComponent>(TEXT("SideA"));
	SetRootComponent(sideA);
}

// Called when the game starts or when spawned
void ASJ_PingPongTableSideA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_PingPongTableSideA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

