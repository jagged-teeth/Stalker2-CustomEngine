#pragma once
#include "CoreMinimal.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "WwiseSharedLanguageId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseSharedLanguageId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseLanguageRequirement LanguageRequirement;
    
    FWwiseSharedLanguageId();
};

