#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "QuitToMainMenuAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UQuitToMainMenuAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceQuit;
    
public:
    UQuitToMainMenuAction();

};

