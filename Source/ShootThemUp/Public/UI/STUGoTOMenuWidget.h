// Shoot Them Up Game, All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUGoTOMenuWidget.generated.h"

class UButton;

UCLASS()
class SHOOTTHEMUP_API USTUGoTOMenuWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* GoToMenuButton;

    virtual void NativeOnInitialized() override;

private:
    UFUNCTION()
    void OnGoToMenu();
};
