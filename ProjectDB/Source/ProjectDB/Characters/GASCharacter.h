#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GASCharacter.generated.h"

class UAbilitySystemComponent;
class UBaseAttributeSet;

UCLASS()
class PROJECTDB_API AGASCharacter : public ACharacter, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    AGASCharacter();

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
    UAbilitySystemComponent* AbilitySystemComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
    UBaseAttributeSet* AttributeSet;

protected:
    virtual void BeginPlay() override;
};