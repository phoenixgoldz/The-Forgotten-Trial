#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ForgottenTrialCharacter.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
    MaleHumanPaladin UMETA(DisplayName = "Male Human Paladin"),
    FemaleElfWizard UMETA(DisplayName = "Female Elf Wizard"),
    RedDragon UMETA(DisplayName = "Red Dragon"),
    DireWolf UMETA(DisplayName = "Dire Wolf"),
    OwlBear UMETA(DisplayName = "Owl Bear")
};

UCLASS()
class THEFORGOTTENTRIAL_API AForgottenTrialCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AForgottenTrialCharacter();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    FString CharacterName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    ECharacterClass CharacterClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    int32 Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    int32 MaxHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    int32 MovementRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    int32 AttackRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    int32 AttackPower;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
    bool bIsAlive;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    virtual void TakeDamage(int32 DamageAmount);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    virtual void Heal(int32 HealAmount);

    UFUNCTION(BlueprintImplementableEvent, Category = "Memory")
    void TriggerMemoryFragment(const FString& MemoryText);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    TArray<FString> UnlockedMemories;

    UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
    void OnHealthChanged(int32 NewHealth, int32 Delta);
}; 