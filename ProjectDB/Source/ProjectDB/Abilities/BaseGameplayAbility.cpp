#include "BaseGameplayAbility.h"
#include "AbilitySystemComponent.h"

UBaseGameplayAbility::UBaseGameplayAbility()
{
    // Default to Instance Per Actor
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
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

    // Apply configured effects on activate
    for (const auto& EffectPair : OngoingEffectsToApplyOnActivate)
    {
        ApplyOngoingEffect(EffectPair.Key, EffectPair.Value);
    }
}

void UBaseGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, 
                                     const FGameplayAbilityActorInfo* ActorInfo, 
                                     const FGameplayAbilityActivationInfo ActivationInfo, 
                                     bool bReplicateEndAbility, 
                                     bool bWasCancelled)
{
    // Remove effects before ending ability
    for (const auto& EffectPair : OngoingEffectsToRemoveOnEnd)
    {
        RemoveOngoingEffect(EffectPair.Key);
    }

    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBaseGameplayAbility::ApplyOngoingEffect(FGameplayTag Tag, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level)
{
    if (GetAbilitySystemComponentFromActorInfo() && GameplayEffectClass)
    {
        FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
        FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(GameplayEffectClass, Level, ContextHandle);
        
        if (SpecHandle.IsValid())
        {
            FActiveGameplayEffectHandle ActiveGEHandle = GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
            if (!ActiveGEHandle.WasSuccessfullyApplied())
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to apply gameplay effect %s"), *GetNameSafe(GameplayEffectClass));
            }
        }
    }
}

void UBaseGameplayAbility::RemoveOngoingEffect(FGameplayTag Tag)
{
    if (UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo())
    {
        FGameplayTagContainer TagContainer;
        TagContainer.AddTag(Tag);
        ASC->RemoveActiveEffectsWithTags(TagContainer);
    }
}