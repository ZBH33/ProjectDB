#include "GASPlayerState.h"
#include "AbilitySystemComponent.h"
#include "Attributes/BaseAttributeSet.h"

AGASPlayerState::AGASPlayerState()
{
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    AttributeSet = CreateDefaultSubobject<UBaseAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AGASPlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}