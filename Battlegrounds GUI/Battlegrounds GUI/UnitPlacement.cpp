#include "stdafx.h"
#include "BattlegroundsGUI.h"

UnitPlacement::UnitPlacement(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

UnitPlacement::~UnitPlacement()
{
}

void UnitPlacement::on_confirmButton_clicked()
{
	UserTurn user(this);
	user.exec();
}