// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Lobby,
	PingPong,
	GameOver
};

UENUM(BlueprintType)
enum class EPingPongState : uint8
{
	Intro,
	Serv,
	Rally,
	RallyOver,	// 점수가 난 경우
	SetOver,	// 11점을 땄을 경우 1세트 종료. 5판 3승제
	Deuce,		// 10:10 상황, 2점 차이가 날때까지 경기 계속
	MatchOver
};

UENUM(BlueprintType)
enum class EGameType : uint8
{
	PingPong
};

UENUM(BlueprintType)
enum class EEditMode : uint8
{
	Single,
	Multi
};