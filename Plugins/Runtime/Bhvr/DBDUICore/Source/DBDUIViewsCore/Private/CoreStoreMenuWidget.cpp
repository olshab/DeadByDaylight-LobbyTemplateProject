#include "CoreStoreMenuWidget.h"

class UCoreSelectableButtonWidget;
class UCoreButtonWidget;

void UCoreStoreMenuWidget::OnRedeemCodeButtonClicked(UCoreButtonWidget* selectedButton)
{

}

void UCoreStoreMenuWidget::OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreStoreMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreStoreMenuWidget::OnBackAction()
{

}

UCoreStoreMenuWidget::UCoreStoreMenuWidget()
{
	this->StoreMenuTabs = NULL;
	this->RedeemCodeButton = NULL;
	this->BackInputSwitcher = NULL;
}
