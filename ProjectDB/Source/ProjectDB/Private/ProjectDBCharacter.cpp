// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDBCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "GASAttributeSet.h"
#include "GASAbilitySystemComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AProjectDBCharacter::AProjectDBCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create camera boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Create follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Create GAS components
	AbilitySystemComponent = CreateDefaultSubobject<UGASAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full);
}

void AProjectDBCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		if (AbilitySystemComponent->DefaultStartingData.Num() > 0 &&
			AbilitySystemComponent->DefaultStartingData[0].Attributes != NULL &&
			AbilitySystemComponent->DefaultStartingData[0].DefaultStartingTable != NULL)
		{
			AttributeSetVar = AbilitySystemComponent->GetSet<UGASAttributeSet>();

			if (AttributeSetVar)
			{
				const_cast<UGASAttributeSet*>(AttributeSetVar)->HealthChangeDelegate.AddDynamic(this, &AProjectDBCharacter::OnHealthChangedNative);
				const_cast<UGASAttributeSet*>(AttributeSetVar)->ManaChangeDelegate.AddDynamic(this, &AProjectDBCharacter::OnManaChangedNative);
				const_cast<UGASAttributeSet*>(AttributeSetVar)->AttackPowerChangeDelegate.AddDynamic(this, &AProjectDBCharacter::OnAttackPowerChangedNative);
				const_cast<UGASAttributeSet*>(AttributeSetVar)->DefenceChangeDelegate.AddDynamic(this, &AProjectDBCharacter::OnDefenceChangedNative);
			}
		}
	}
}

void AProjectDBCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AProjectDBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProjectDBCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AProjectDBCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find Enhanced Input component!"), *GetNameSafe(this));
	}
}

void AProjectDBCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AProjectDBCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

// GAS Function Implementations
UAbilitySystemComponent* AProjectDBCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AProjectDBCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
	}
}

// Fixed parameter to const reference
void AProjectDBCharacter::InitializeAbilityMulti(const TArray<TSubclassOf<UGameplayAbility>>& AbilitiesToAcquire, int32 AbilityLevel)
{
	for (TSubclassOf<UGameplayAbility> AbilityItem : AbilitiesToAcquire)
	{
		InitializeAbility(AbilityItem, AbilityLevel);
	}
}

void AProjectDBCharacter::Server_InitializeAbility_Implementation(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
	}
}

// Fixed parameter to const reference
void AProjectDBCharacter::Server_InitializeAbilityMulti_Implementation(const TArray<TSubclassOf<UGameplayAbility>>& AbilitiesToAcquire, int32 AbilityLevel)
{
	for (TSubclassOf<UGameplayAbility> AbilityItem : AbilitiesToAcquire)
	{
		Server_InitializeAbility_Implementation(AbilityItem, AbilityLevel);
	}
}

FGameplayAbilityInfo AProjectDBCharacter::GetAbilityInfoFromAbilityClass(TSubclassOf<UGameplayAbility> AbilityClass, int32 AtAbilityLevel)
{
	UGameplayAbility* AbilityCDO = AbilityClass.GetDefaultObject();

	if (AbilityCDO)
	{
		UGameplayEffect* CooldownEffect = AbilityCDO->GetCooldownGameplayEffect();
		UGameplayEffect* CostEffect = AbilityCDO->GetCostGameplayEffect();

		if (CostEffect && CooldownEffect)
		{
			float CooldownDuration = 0;
			TArray<float> Cost;
			TArray<FString> CostName;
			float SingleCost = 0.0f;
			FString SingleCostName;

			Cost.Empty();
			CostName.Empty();

			CooldownEffect->DurationMagnitude.GetStaticMagnitudeIfPossible(AtAbilityLevel, CooldownDuration);

			if (CostEffect->Modifiers.Num() > 0)
			{
				for (auto EffectInfo : CostEffect->Modifiers)
				{
					EffectInfo.ModifierMagnitude.GetStaticMagnitudeIfPossible(AtAbilityLevel, SingleCost);
					FGameplayAttribute CostAttribute = EffectInfo.Attribute;
					SingleCostName = CostAttribute.AttributeName;
					Cost.Add(SingleCost);
					CostName.Add(SingleCostName);
				}
			}
			return FGameplayAbilityInfo(CooldownDuration, Cost, CostName);
		}
	}
	return FGameplayAbilityInfo();
}

void AProjectDBCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		InitializeAbilityMulti(InitialAbilities, 0);
	}
}

void AProjectDBCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

void AProjectDBCharacter::RemoveAbilityWithTags(FGameplayTagContainer TagContainer)
{
	if (AbilitySystemComponent)
	{
		TArray<FGameplayAbilitySpec*> MatchingAbilities;
		AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbilities, true);
		for (FGameplayAbilitySpec* Spec : MatchingAbilities)
		{
			AbilitySystemComponent->ClearAbility(Spec->Handle);
		}
	}
}

void AProjectDBCharacter::ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	if (AbilitySystemComponent)
	{
		TArray<FGameplayAbilitySpec*> MatchingAbility;
		AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbility, true);
		for (FGameplayAbilitySpec* Spec : MatchingAbility)
		{
			Spec->Level = NewLevel;
		}
	}
}

void AProjectDBCharacter::CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&WithTags, &WithoutTags, nullptr);
	}
}

void AProjectDBCharacter::AddLooseGameplayTag(FGameplayTag TagToAdd)
{
	if (AbilitySystemComponent)
	{
		GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
		GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
	}
}

void AProjectDBCharacter::RemoveLooseGameplayTags(FGameplayTag TagsToRemove)
{
	if (AbilitySystemComponent)
	{
		GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagsToRemove);
	}
}

void AProjectDBCharacter::Server_RemoveAbilityWithTags_Implementation(FGameplayTagContainer TagContainer)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		TArray<FGameplayAbilitySpec*> MatchingAbilities;
		AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbilities, true);
		for (FGameplayAbilitySpec* Spec : MatchingAbilities)
		{
			AbilitySystemComponent->ClearAbility(Spec->Handle);
		}
	}
}

void AProjectDBCharacter::Server_ChangeAbilityLevelWithTags_Implementation(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		TArray<FGameplayAbilitySpec*> MatchingAbility;
		AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbility, true);
		for (FGameplayAbilitySpec* Spec : MatchingAbility)
		{
			Spec->Level = NewLevel;
		}
	}
}

void AProjectDBCharacter::Server_CancelAbilityWithTags_Implementation(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&WithTags, &WithoutTags, nullptr);
	}
}

void AProjectDBCharacter::Server_AddLooseGameplayTag_Implementation(FGameplayTag TagToAdd)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
		GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
	}
}

void AProjectDBCharacter::Server_RemoveLooseGameplayTags_Implementation(FGameplayTag TagsToRemove)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagsToRemove);
	}
}

// Attribute Delegates
void AProjectDBCharacter::OnHealthChangedNative(float Health, int32 StackCount)
{
	OnHealthChange(Health, StackCount);
}

void AProjectDBCharacter::OnManaChangedNative(float Mana, int32 StackCount)
{
	OnManaChange(Mana, StackCount);
}

void AProjectDBCharacter::OnAttackPowerChangedNative(float AttackPower, int32 StackCount)
{
	OnAttackPowerChange(AttackPower, StackCount);
}

void AProjectDBCharacter::OnDefenceChangedNative(float Defence, int32 StackCount)
{
	OnDefenceChange(Defence, StackCount);
}

// Attribute Getters
void AProjectDBCharacter::GetHealthValues(float& Health, float& MaxHealth)
{
	if (AttributeSetVar)
	{
		Health = AttributeSetVar->GetHealth();
		MaxHealth = AttributeSetVar->GetMaxHealth();
	}
}

void AProjectDBCharacter::GetManaValues(float& Mana, float& MaxMana)
{
	if (AttributeSetVar)
	{
		Mana = AttributeSetVar->GetMana();
		MaxMana = AttributeSetVar->GetMaxMana();
	}
}

void AProjectDBCharacter::GetAttackPowerValue(float& AttackPower)
{
	if (AttributeSetVar)
	{
		AttackPower = AttributeSetVar->GetAttackPower();
	}
}

void AProjectDBCharacter::GetDefenceValue(float& Defence)
{
	if (AttributeSetVar)
	{
		Defence = AttributeSetVar->GetDefence();
	}
}

// Attribute Setters
void AProjectDBCharacter::SetHealthValues(float NewHealth, float NewMaxHealth)
{
	if (AttributeSetVar && AbilitySystemComponent)
	{
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetHealthAttribute(), EGameplayModOp::Override, NewHealth);
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetMaxHealthAttribute(), EGameplayModOp::Override, NewMaxHealth);
	}
}

void AProjectDBCharacter::SetManaValues(float NewMana, float NewMaxMana)
{
	if (AttributeSetVar && AbilitySystemComponent)
	{
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetManaAttribute(), EGameplayModOp::Override, NewMana);
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetMaxManaAttribute(), EGameplayModOp::Override, NewMaxMana);
	}
}

void AProjectDBCharacter::SetAttackPowerValue(float NewAttackPower)
{
	if (AttributeSetVar && AbilitySystemComponent)
	{
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetAttackPowerAttribute(), EGameplayModOp::Override, NewAttackPower);
	}
}

void AProjectDBCharacter::SetDefenceValue(float NewDefence)
{
	if (AttributeSetVar && AbilitySystemComponent)
	{
		AbilitySystemComponent->ApplyModToAttribute(AttributeSetVar->GetDefenceAttribute(), EGameplayModOp::Override, NewDefence);
	}
}