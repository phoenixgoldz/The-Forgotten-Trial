#include "ForgottenTrialCharacter.h"

AForgottenTrialCharacter::AForgottenTrialCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    Health = 100;
    MaxHealth = 100;
    MovementRange = 3;
    AttackRange = 1;
    AttackPower = 10;
    bIsAlive = true;
}

void AForgottenTrialCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AForgottenTrialCharacter::TakeDamage(int32 DamageAmount)
{
    Health = FMath::Max(0, Health - DamageAmount);
    OnHealthChanged(Health, -DamageAmount);
    
    if (Health <= 0)
    {
        bIsAlive = false;
    }
}

void AForgottenTrialCharacter::Heal(int32 HealAmount)
{
    Health = FMath::Min(MaxHealth, Health + HealAmount);
    OnHealthChanged(Health, HealAmount);
} 