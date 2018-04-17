#include "Player.h"

int main() {
	
	string userturn, playermode; // this is the tile the user selects to fire at
	string old_coordinate, new_coordinate; // these are the coordinates used for the moving of units by players.
	bool endgame2 = true;
	player player1; // this is the class for player 1
	player player2; //this is the class for player 2
	computer com;

	srand(time(0));

	do{
		cout << "Would you like:\n[1] Single-player\n[2] Multi-player" << endl;
		cin >> playermode;
	} while ((playermode.find("1") == false || playermode.find("2") == false) && playermode.size() > 1 );

	if (playermode == "1"){
		player1.setMapSize();
		player2.setTiles_Size(player1.getTiles_Size());
		player2.MapGen();
	}
	else if (playermode == "2"){
		player1.setMapSize();
		com.setTiles_Size(player1.getTiles_Size());
		com.MapGen();
	}

	//Game setup for player 1.
	cout << "Player 1: Unit Placement" << endl;
	player1.getTiles();
	player1.setUnits(3);
	player1.getTiles();
	player1.EndTurn();
	
	if (playermode == "1"){
		cout << "Computer: Unit Placement" << endl;
		com.getTiles();
		com.setComUnits(3);
		com.getTiles();
	}
	else if (playermode == "2"){
		//Game setup for player 2.
		cout << "Player 2: Unit Placement" << endl;
		player2.getTiles();
		player2.setUnits(3);
		player2.getTiles();
		player2.EndTurn();
	}

	// Turn iteration.
	while (player1.CheckEndGame() == false && endgame2 == false) {

		cout << "Player 1: Turn" << endl;
		player1.getTiles();
		userturn = player1.PlayerTurn();

		while (userturn == "error") {
			player1.PlayerTurn();
		}

		if (player1.BoardToArray(userturn) == true) {
			player2.PlayerAttacked(userturn);
		}
		player1.EndTurn();

		if (playermode == "1"){
			userturn = com.ComTurn();

			if (com.BoardToArray(userturn) == true){
				player1.PlayerAttacked(userturn);
			}
			com.EndTurn();
			endgame2 = com.CheckEndGame();
		}
		else if (playermode == "1"){
			cout << "Player 2: Turn" << endl;
			player2.getTiles();
			userturn = player2.PlayerTurn();

			while (userturn == "error") {
				player2.PlayerTurn();
			}

			if (player2.BoardToArray(userturn) == true) {
				player1.PlayerAttacked(userturn);
			}
			player2.EndTurn();
			endgame2 = player2.CheckEndGame();
		}
	}
	
	if (player1.CheckEndGame() == true) {
		cout << "Player 1 has been defeated..." << endl;
	}
	else {
		cout << "Player 2 has been defeated..." << endl;
	}

	cout << "End of the game, Thanks for playing!" << endl;
	cout << "Enter a character to exit the console." << endl;
	char stopchar; // used at the end to halt the console screen before exiting.
	cin >> stopchar;
}