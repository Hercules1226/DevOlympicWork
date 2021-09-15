
#pragma once

#include "DevOlympic.h"
#include "GameFramework/Actor.h"
#include "ModeSelect.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEVOLYMPIC_API AModeSelect : public AActor
{
	GENERATED_BODY()

public:	
	AModeSelect();

protected:
	virtual void BeginPlay() override;

public:	
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EditModeSetting)
	EEditMode m_state;
};
