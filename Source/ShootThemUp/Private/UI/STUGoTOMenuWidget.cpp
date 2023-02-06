// Shoot Them Up Game, All Right Reserved


#include "UI/STUGoTOMenuWidget.h"
#include "Components/Button.h"
#include "STUGameInstance.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogSTUGoTOMenuWidget, All, All);

void USTUGoTOMenuWidget::NativeOnInitialized() 
{
    Super::NativeOnInitialized();

    if (GoToMenuButton)
    {
        GoToMenuButton->OnClicked.AddDynamic(this, &USTUGoTOMenuWidget::OnGoToMenu);
    }
}

void USTUGoTOMenuWidget::OnGoToMenu()
{
    if (!GetWorld()) return;

    const auto STUGameInstance = GetWorld()->GetGameInstance<USTUGameInstance>();
    if (!STUGameInstance) return;

    if (STUGameInstance->GetMenuLevelName().IsNone())
    {
        UE_LOG(LogSTUGoTOMenuWidget, Error, TEXT("Menu Level name is NONE"));
        return;
    }

    UGameplayStatics::OpenLevel(this, STUGameInstance->GetMenuLevelName());
}