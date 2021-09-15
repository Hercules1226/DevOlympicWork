// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_PPSingleModeWall.h"

// Sets default values
AWJ_PPSingleModeWall::AWJ_PPSingleModeWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(rootComp);
	racket = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Racket"));
	racket->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void AWJ_PPSingleModeWall::BeginPlay()
{
	Super::BeginPlay();
	
}

/*
// Called every frame
void AWJ_PPSingleModeWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/

