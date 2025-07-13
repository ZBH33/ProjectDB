#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BaseGameplayAbility.generated.h"

UCLASS()
class PROJECTDB_API UBaseGameplayAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UBaseGameplayAbility();

    // Default tags for cooldown and activation
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
    FGameplayTagContainer CooldownTags;

    // Map of gameplay effects to apply on activation
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
    TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> OngoingEffectsToApplyOnActivate;

    // Map of gameplay effects to remove on end
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
    TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> OngoingEffectsToRemoveOnEnd;

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
                                const FGameplayAbilityActorInfo* ActorInfo, 
                                const FGameplayAbilityActivationInfo ActivationInfo, 
                                const FGameplayEventData* TriggerEventData) override;
    
    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, 
                           const FGameplayAbilityActorInfo* ActorInfo, 
                           const FGameplayAbilityActivationInfo ActivationInfo, 
                           bool bReplicateEndAbility, 
                           bool bWasCancelled) override;

    UFUNCTION(BlueprintCallable, Category = "Ability|Effects")
    void ApplyOngoingEffect(FGameplayTag Tag, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level = 1.0f);

    UFUNCTION(BlueprintCallable, Category = "Ability|Effects")
    void RemoveOngoingEffect(FGameplayTag Tag);
};