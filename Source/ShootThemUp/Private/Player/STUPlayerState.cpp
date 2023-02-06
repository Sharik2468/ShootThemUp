// Shoot Them Up Game, All Right Reserved


#include "Player/STUPlayerState.h"

DEFINE_LOG_CATEGORY_STATIC(LogSTUPlayerState, All, All);

void ASTUPlayerState::LogInfo() 
{
    UE_LOG(LogSTUPlayerState, Display, TEXT("TeamID: %i, Kills: %i, Death: %i"), TeamID, KillsNum, DeathNum);
}