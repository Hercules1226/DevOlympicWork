// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_GameObject.h"

// Sets default values
AWJ_GameObject::AWJ_GameObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AWJ_GameObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWJ_GameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

