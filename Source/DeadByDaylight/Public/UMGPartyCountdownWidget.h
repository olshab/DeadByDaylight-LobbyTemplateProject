#pragma once

#include "CoreMinimal.h"
#include "UMGBaseCountdownWidget.h"
#include "UMGPartyCountdownWidget.generated.h"

class UCanvasPanel;
class UButton;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyCountdownWidget : public UUMGBaseCountdownWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidget))
	UButton* UnreadyButton;

	UPROPERTY(meta=(BindWidget))
	UCanvasPanel* UnreadyButtonContainer;

private:
	UFUNCTION()
	void OnUnreadyButtonClicked();

public:
	UUMGPartyCountdownWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyCountdownWidget) { return 0; }
