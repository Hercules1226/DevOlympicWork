// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_PingPongTableSideA.generated.h"

UCLASS()
class DEVOLYMPIC_API ASJ_PingPongTableSideA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_PingPongTableSideA();

	UPROPERTY(EditAnywhere, Category = SideA)
		class UBoxComponent* sideA;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
