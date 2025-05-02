#include "ForgottenTrialGameMode.h"

AForgottenTrialGameMode::AForgottenTrialGameMode()
{
    CurrentGameState = EGameState::Exploration;
    CurrentTurn = 0;
    bIsCombatActive = false;
}

void AForgottenTrialGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    // Initialize game in exploration mode
    SetGameState(EGameState::Exploration);
}

void AForgottenTrialGameMode::SetGameState(EGameState NewState)
{
    if (CurrentGameState != NewState)
    {
        CurrentGameState = NewState;
        OnGameStateChanged(NewState);
    }
}

void AForgottenTrialGameMode::StartCombat()
{
    if (!bIsCombatActive)
    {
        bIsCombatActive = true;
        CurrentTurn = 1;
        SetGameState(EGameState::Combat);
    }
}

void AForgottenTrialGameMode::EndCombat()
{
    if (bIsCombatActive)
    {
        bIsCombatActive = false;
        CurrentTurn = 0;
        SetGameState(EGameState::Exploration);
    }
} 