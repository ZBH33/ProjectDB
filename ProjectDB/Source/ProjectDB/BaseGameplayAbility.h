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
    FGameplayTagContainer StartupTags;

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
                                const FGameplayAbilityActorInfo* ActorInfo, 
                                const FGameplayAbilityActivationInfo ActivationInfo, 
                                const FGameplayEventData* TriggerEventData) override;
    
    UFUNCTION(BlueprintCallable, Category = "Ability")
    virtual void CommitAbilityWithChecks();
};