#pragma once

#include <QtWidgets/QWidget>
#include <QDialog>
#include "ui_BattlegroundsGUI.h"
#include "ui_GameSetup.h"
#include "ui_UnitPlacement.h"
#include "ui_UserTurn.h"
#include "ui_DefeatScreen.h"
#include <string>
#include <iostream>

using namespace std;

class BattlegroundsGUI : public QWidget
{
	Q_OBJECT

public:
	BattlegroundsGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::BattlegroundsGUIClass ui;

	private slots:
		void on_settingsButton_clicked();
		void on_startButton_clicked();
};

class GameSetup : public QDialog, public Ui::GameSetup
{
	Q_OBJECT

public:
	GameSetup(QWidget *parent = Q_NULLPTR);
	~GameSetup();

	private slots:
	void on_acceptButton_clicked();
};

class UnitPlacement : public QDialog, public Ui::UnitPlacement
{
	Q_OBJECT

public:
	UnitPlacement(QWidget *parent = Q_NULLPTR);
	~UnitPlacement();

	private slots:
	void on_confirmButton_clicked();
};

class UserTurn : public QDialog, public Ui::UserTurn
{
	Q_OBJECT

public:
	UserTurn(QWidget *parent = Q_NULLPTR);
	~UserTurn();
	public slots:
	void on_concede_button_clicked();
};

class DefeatScreen : public QDialog, public Ui::DefeatScreen
{
	Q_OBJECT

public:
	DefeatScreen(QWidget *parent = Q_NULLPTR);
	~DefeatScreen();
};