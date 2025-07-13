#include "BaseGameplayAbility.h"
#include "AbilitySystemComponent.h"

UBaseGameplayAbility::UBaseGameplayAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dead")));
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Stunned")));
}

void UBaseGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
                                          const FGameplayAbilityActorInfo* ActorInfo, 
                                          const FGameplayAbilityActivationInfo ActivationInfo, 
                                          const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UBaseGameplayAbility::CommitAbilityWithChecks()
{
    if (GetCurrentAbilitySpecHandle().IsValid() && GetCurrentActorInfo())
    {
        if (!CommitAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo()))
        {
            EndAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true, true);
        }
    }
}