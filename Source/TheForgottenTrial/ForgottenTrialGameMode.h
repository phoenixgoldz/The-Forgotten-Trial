#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ForgottenTrialGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
    Exploration UMETA(DisplayName = "Exploration"),
    Combat UMETA(DisplayName = "Combat"),
    Dialogue UMETA(DisplayName = "Dialogue"),
    Memory UMETA(DisplayName = "Memory")
};

UCLASS()
class THEFORGOTTENTRIAL_API AForgottenTrialGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AForgottenTrialGameMode();

    UFUNCTION(BlueprintCallable, Category = "Game State")
    EGameState GetCurrentGameState() const { return CurrentGameState; }

    UFUNCTION(BlueprintCallable, Category = "Game State")
    void SetGameState(EGameState NewState);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void StartCombat();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void EndCombat();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadOnly, Category = "Game State")
    EGameState CurrentGameState;

    UPROPERTY(BlueprintReadWrite, Category = "Combat")
    int32 CurrentTurn;

    UPROPERTY(BlueprintReadWrite, Category = "Combat")
    bool bIsCombatActive;

    UFUNCTION(BlueprintImplementableEvent, Category = "Game State")
    void OnGameStateChanged(EGameState NewState);
}; 