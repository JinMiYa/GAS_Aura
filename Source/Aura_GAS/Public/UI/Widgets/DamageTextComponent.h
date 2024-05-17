// Copyright JINMY

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "DamageTextComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_GAS_API UDamageTextComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetDamageText(float Damage);
};
