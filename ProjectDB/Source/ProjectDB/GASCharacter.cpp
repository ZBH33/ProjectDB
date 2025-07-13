#include "GASCharacter.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Attributes/BaseAttributeSet.h"

AGASCharacter::AGASCharacter()
{
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* AGASCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void AGASCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    // Initialize global ability system data
    UAbilitySystemGlobals::Get().InitGlobalData();
    
    if (AbilitySystemComponent)
    {
        AbilitySystemComponent->InitAbilityActorInfo(this, this);
        AttributeSet = AbilitySystemComponent->GetSet<UBaseAttributeSet>();
    }
}