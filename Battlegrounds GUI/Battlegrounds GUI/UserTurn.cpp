#include "stdafx.h"
#include "BattlegroundsGUI.h"

UserTurn::UserTurn(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

UserTurn::~UserTurn()
{
}

void UserTurn::on_concede_button_clicked()
{
	DefeatScreen defeat(this);
	defeat.exec();
}
