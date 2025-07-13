// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GetAbilityInfo.h"
#include "Logging/LogMacros.h"
#include "ProjectDBCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config = Game)
class AProjectDBCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	AProjectDBCharacter();

	// GAS Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GASGameplayAbility")
	class UGASAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GASGameplayAbility")
	const class UGASAttributeSet* AttributeSetVar;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GASGameplayAbility")
	TArray<TSubclassOf<class UGameplayAbility>> InitialAbilities;

protected:
	virtual void BeginPlay() override;
	virtual void NotifyControllerChanged() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	// GAS Functions
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	// Fixed parameter to const reference
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void InitializeAbilityMulti(const TArray<TSubclassOf<UGameplayAbility>>& AbilitiesToAcquire, int32 AbilityLevel);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	// Fixed parameter to const reference
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_InitializeAbilityMulti(const TArray<TSubclassOf<UGameplayAbility>>& AbilitiesToAcquire, int32 AbilityLevel);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	FGameplayAbilityInfo GetAbilityInfoFromAbilityClass(TSubclassOf<UGameplayAbility> AbilityClass, int32 AtAbilityLevel);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void AddLooseGameplayTag(FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void RemoveLooseGameplayTags(FGameplayTag TagsToRemove);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_AddLooseGameplayTag(FGameplayTag TagToAdd);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "GASGameplayAbility|Server Version")
	void Server_RemoveLooseGameplayTags(FGameplayTag TagsToRemove);

	// Attribute Delegates
	UFUNCTION()
	virtual void OnHealthChangedNative(float Health, int32 StackCount);
	UFUNCTION()
	virtual void OnManaChangedNative(float Mana, int32 StackCount);
	UFUNCTION()
	virtual void OnAttackPowerChangedNative(float AttackPower, int32 StackCount);
	UFUNCTION()
	virtual void OnDefenceChangedNative(float Defence, int32 StackCount);

	// Blueprint Events
	UFUNCTION(BlueprintImplementableEvent, Category = "GASGameplayAbility")
	void OnHealthChange(float Health, int32 StackCount);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASGameplayAbility")
	void OnManaChange(float Mana, int32 StackCount);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASGameplayAbility")
	void OnAttackPowerChange(float AttackPower, int32 StackCount);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASGameplayAbility")
	void OnDefenceChange(float Defence, int32 StackCount);

	// Attribute Getters
	UFUNCTION(BlueprintPure, Category = "GASGameplayAbility")
	void GetHealthValues(float& Health, float& MaxHealth);
	UFUNCTION(BlueprintPure, Category = "GASGameplayAbility")
	void GetManaValues(float& Mana, float& MaxMana);
	UFUNCTION(BlueprintPure, Category = "GASGameplayAbility")
	void GetAttackPowerValue(float& AttackPower);
	UFUNCTION(BlueprintPure, Category = "GASGameplayAbility")
	void GetDefenceValue(float& Defence);

	// Attribute Setters
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void SetHealthValues(float NewHealth, float NewMaxHealth);
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void SetManaValues(float NewMana, float NewMaxMana);
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void SetAttackPowerValue(float NewAttackPower);
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	void SetDefenceValue(float NewDefence);
};