#include "stdafx.h"
#include "BattlegroundsGUI.h"
#include "Player.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	string coordinate; //this is used for validating a co-ordinate input from a user might need to be a pointer 
	string playerturn;  //this is used to determine what the player would like to do with their turn, ie fire, move...
	string firecoordinate; // this is the tile the user selects to fire at
	bool gameover = 0; // ends the game when this = 1. ie a player has no hp left in his units. 
	bool playerhp = 0; // checks if the player has hp, if so the gameover doesn't proc.
	bool playernumber = 0; // tells the program which player is currently playing, player 1  = 0 
	char stopchar; // used at the end to halt the console screen before exiting.
	player player1; // this is the class for player 1
	player player2; //this is the class for player 2
	char unit_type; // char i, is used to identify the unit types, and where they are placed.

	player1.getTiles();
	player2.getTiles();

	QApplication a(argc, argv);
	BattlegroundsGUI w;
	w.show();
	return a.exec();
}