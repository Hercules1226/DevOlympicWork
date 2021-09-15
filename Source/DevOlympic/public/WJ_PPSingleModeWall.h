
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WJ_PPSingleModeWall.generated.h"

UCLASS()
class DEVOLYMPIC_API AWJ_PPSingleModeWall : public AActor
{
	GENERATED_BODY()
	
public:	
	AWJ_PPSingleModeWall();

protected:
	virtual void BeginPlay() override;

public:	
	//virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = Player)
	class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = Player)
	class UStaticMeshComponent* racket;
};
