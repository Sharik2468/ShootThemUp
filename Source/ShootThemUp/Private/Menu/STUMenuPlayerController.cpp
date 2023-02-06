// Shoot Them Up Game, All Right Reserved


#include "Menu/STUMenuPlayerController.h"
#include "STUGameInstance.h"

void ASTUMenuPlayerController::BeginPlay() 
{
    Super::BeginPlay();

    SetInputMode(FInputModeUIOnly());
    bShowMouseCursor = true;
}