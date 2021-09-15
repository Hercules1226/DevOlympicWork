

#include "WJ_ObjectPool.h"

UWJ_ObjectPool::UWJ_ObjectPool()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UWJ_ObjectPool::BeginPlay()
{
	Super::BeginPlay();

	
}


void UWJ_ObjectPool::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UWJ_ObjectPool::GetPingPongBall(int player)
{

}
