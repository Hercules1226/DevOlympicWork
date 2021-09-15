// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_PingPongTable.generated.h"

UCLASS()
class DEVOLYMPIC_API ASJ_PingPongTable : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ASJ_PingPongTable();

	// Å¹±¸´ë ¸Þ½¬
	UPROPERTY(EditAnywhere, Category = PingPongTable)
	class UStaticMeshComponent* pingpongTable;

	// Net
	UPROPERTY(EditAnywhere, Category = PingPongTable)
	class UBoxComponent* net;

	// Player Side A
	UPROPERTY(EditAnywhere, Category = PingPongTable)
	class UChildActorComponent* sideA;

	// Player Side B
	UPROPERTY(EditAnywhere, Category = PingPongTable)
	class UChildActorComponent* sideB;

	UPROPERTY(EditAnywhere, Category = PingPongTable)
	class UChildActorComponent* childNet;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
