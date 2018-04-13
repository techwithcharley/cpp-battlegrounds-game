#include "Player.h"

int main() {

	string userturn; // this is the tile the user selects to fire at
	string old_coordinate, new_coordinate; // these are the coordinates used for the moving of units by players.
	char stopchar; // used at the end to halt the console screen before exiting.
	player player1; // this is the class for player 1
	player player2; //this is the class for player 2
	
	//Game setup for player 1.
	cout << "Player 1: Unit Placement" << endl;
	player1.getTiles();
	player1.setUnits(3);
	player1.getTiles();
	player1.EndTurn();

	//Game setup for player 2.
	cout << "Player 2: Unit Placement" << endl;
	player2.getTiles();
	player2.setUnits(3);
	player2.getTiles();
	player2.EndTurn();

	// Turn iteration.
	while (player1.CheckEndGame() == false && player2.CheckEndGame() == false) {

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

		cout << "Player 2: Turn" << endl;
		player2.getTiles();
		userturn = player2.PlayerTurn();

		while (userturn == "error") {
			player2.PlayerTurn();
		}

		if (userturn != "move" || userturn != "endturn") {
			player1.PlayerAttacked(userturn);
		}
		player2.EndTurn();
	}
	
	if (player1.CheckEndGame() == true) {
		cout << "Player 1 has been defeated..." << endl;
	}
	else {
		cout << "Player 2 has been defeated..." << endl;
	}

	cout << "End of the game, Thanks for playing!" << endl;
	cout << "Enter a character to exit the console." << endl;
	cin >> stopchar;

}