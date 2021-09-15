// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PingPongPlayer.generated.h"

UCLASS()
class DEVOLYMPIC_API APingPongPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APingPongPlayer();

	// 플레이어 콜라이더
	UPROPERTY(EditAnywhere, Category = Player)
	class UCapsuleComponent* capsuleComp;

	// 카메라, 컨트롤러 담는 뿌리 컴포넌트
	UPROPERTY(EditAnywhere, Category = Player)
	class USceneComponent* cameraRoot;

	// 플레이어 카메라
	UPROPERTY(EditAnywhere, Category = Player)
	class UCameraComponent* playerCam;

	// 플레이어 왼손 컨트롤러
	UPROPERTY(EditAnywhere, Category = Player)
	class UMotionControllerComponent* leftController;

	// 플레이어 왼손 모델(기본제공 손모델 사용)
	UPROPERTY(EditAnywhere, Category = Player)
	class USkeletalMeshComponent* leftHand;

	// 플레이어 오른손 컨트롤러
	UPROPERTY(EditAnywhere, Category = Player)
	class UMotionControllerComponent* rightController;

	// 플레이어 오른손 모델(라켓)
	UPROPERTY(EditAnywhere, Category = Player)
	class UStaticMeshComponent* racket;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
