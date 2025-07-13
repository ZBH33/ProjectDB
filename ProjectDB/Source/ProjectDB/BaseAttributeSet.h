#pragma once

#include "AttributeSet.h"
#include "BaseAttributeSet.generated.h"

// Macros for attribute accessors
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PROJECTDB_API UBaseAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UBaseAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

    // Health Attributes
    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_Health)
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Health)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_MaxHealth)
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth)

    // Stamina Attributes
    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Stamina", ReplicatedUsing = OnRep_Stamina)
    FGameplayAttributeData Stamina;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Stamina)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Stamina", ReplicatedUsing = OnRep_MaxStamina)
    FGameplayAttributeData MaxStamina;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxStamina)

    // Mana Attributes
    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_Mana)
    FGameplayAttributeData Mana;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mana)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_MaxMana)
    FGameplayAttributeData MaxMana;
    ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana)

protected:
    // Health replication notifications
    UFUNCTION() void OnRep_Health(const FGameplayAttributeData& OldHealth);
    UFUNCTION() void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
    
    // Stamina replication notifications
    UFUNCTION() void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
    UFUNCTION() void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);
    
    // Mana replication notifications
    UFUNCTION() void OnRep_Mana(const FGameplayAttributeData& OldMana);
    UFUNCTION() void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
};