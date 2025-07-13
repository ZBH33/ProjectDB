#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GASPlayerState.generated.h"

class UAbilitySystemComponent;
class UBaseAttributeSet;

UCLASS()
class PROJECTDB_API AGASPlayerState : public APlayerState, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    AGASPlayerState();

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
    UAbilitySystemComponent* AbilitySystemComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
    UBaseAttributeSet* AttributeSet;
};