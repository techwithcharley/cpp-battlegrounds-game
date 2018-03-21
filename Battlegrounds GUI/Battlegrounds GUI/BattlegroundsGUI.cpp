#include "stdafx.h"
#include "BattlegroundsGUI.h"

BattlegroundsGUI::BattlegroundsGUI(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
}

void BattlegroundsGUI::on_settingsButton_clicked()
{
	GameSetup setup(this);
	setup.exec();
}

void BattlegroundsGUI::on_startButton_clicked()
{
	UnitPlacement units(this);
	
	if (units.exec()) {
		int map_size = units.mapSizeSlider->tickPosition();
	}
}