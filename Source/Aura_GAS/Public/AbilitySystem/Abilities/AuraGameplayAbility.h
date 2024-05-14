// Copyright JINMY

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AuraGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_GAS_API UAuraGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly,Category= "Input")
	FGameplayTag StartupInputTag;
};
