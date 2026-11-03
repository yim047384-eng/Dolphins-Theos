//
//  UNameInputWidget.hpp
//  VSHACKKKK
//
//  Created by user on 27/10/2024.
//

#ifndef UNameInputWidget_hpp
#define UNameInputWidget_hpp

#include <stdio.h>

#endif /* UNameInputWidget_hpp */
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "NameInputWidget.generated.h"

UCLASS()
class YOURPROJECT_API UNameInputWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    // دالة لجلب النص المدخل من المستخدم
    UFUNCTION(BlueprintCallable, Category = "Name Input")
    FString GetUserName() const { return UserName; }

protected:
    virtual void NativeConstruct() override;

private:
    UPROPERTY(meta = (BindWidget))
    UEditableTextBox* NameTextBox;

    UPROPERTY(meta = (BindWidget))
    UButton* ConfirmButton;

    UFUNCTION()
    void OnConfirmButtonClicked();

    FString UserName;
};

#include "NameInputWidget.h"

// وظيفة إظهار واجهة إدخال الاسم والحصول على المدخل من المستخدم
FString ShowKeyboard(APlayerController* Controller) {
    FString UserInput;

    if (Controller) {
        UNameInputWidget* NameInputWidget = CreateWidget<UNameInputWidget>(Controller, UNameInputWidget::StaticClass());
        
        if (NameInputWidget) {
            NameInputWidget->AddToViewport(); // عرض الواجهة

            // الانتظار حتى إدخال المستخدم وتأكيده
            UserInput = NameInputWidget->GetUserName(); // جلب اسم المستخدم من الواجهة
        }
    }
    
    return UserInput;
}
