#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreButtonWidget.h"
#include "CoreFooterButtonWidget.generated.h"

class UDBDImage;

UCLASS(EditInlineNew)
class UCoreFooterButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* IconIMG;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FLinearColor _hoveredColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FLinearColor _unhoveredColor;

	UPROPERTY(BlueprintReadOnly)
	FText _tooltipLabelText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUnhoveredColor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHoveredColor();

public:
	UCoreFooterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFooterButtonWidget) { return 0; }
