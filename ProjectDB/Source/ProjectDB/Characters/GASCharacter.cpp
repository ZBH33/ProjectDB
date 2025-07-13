#include "GASCharacter.h"
#include "AbilitySystemComponent.h"
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
    
    if (AbilitySystemComponent)
    {
        AttributeSet = AbilitySystemComponent->GetSet<UBaseAttributeSet>();
        
        // Initialize attributes (only on server)
        if (GetLocalRole() == ROLE_Authority)
        {
            AbilitySystemComponent->InitAbilityActorInfo(this, this);
        }
    }
}