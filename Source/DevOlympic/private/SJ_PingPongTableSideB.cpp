// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_PingPongTableSideB.h"
#include "Components/BoxComponent.h"

// Sets default values
ASJ_PingPongTableSideB::ASJ_PingPongTableSideB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sideB = CreateDefaultSubobject<UBoxComponent>(TEXT("SideB"));
	SetRootComponent(sideB);
}

// Called when the game starts or when spawned
void ASJ_PingPongTableSideB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_PingPongTableSideB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

