#include "Player.h"
#include <iostream>

int main() {

	string coordinate; //this is used for validating a co-ordinate input from a user might need to be a pointer 
	string playerturn;  //this is used to determine what the player would like to do with their turn, ie fire, move...
	string firecoordinate; // this is the tile the user selects to fire at
	string old_coordinate, new_coordinate; // these are the coordinates used for the moving of units by players.
	int playernumber = 1; // tells the program which player is currently playing 
	char stopchar; // used at the end to halt the console screen before exiting.
	player player1; // this is the class for player 1
	player player2; //this is the class for player 2
	int menuselect; // the int used in menus, like in turn iteration. 
	
	//Game setup for player 1 
	cout << "Player 1: Unit Placement" << endl;
	player1.getTiles();
	player1.setUnits(3);
	system("CLS");
	player1.getTiles();

	cout << "Enter a character to end unit placement: ";
	cin >> stopchar;
	system("CLS");
	cout << flush;

	//Game setup for player 2.
	cout << endl << "Player 2: Unit Placement" << endl;
	player2.getTiles();
	player2.setUnits(3);
	player2.getTiles();
	cout << "Enter a character to end unit placement: ";
	cin >> stopchar;
	system("CLS");
	cout << flush;

	// Turn iteration.
	//i'll move it into functions later.

	while (player1.CheckEndGame() == false && player2.CheckEndGame() == false) {

		player1.getTiles();

		cout << "What would you like to do this turn?" << endl; //going with allowing movement and firing? veto if you want, it'll be an easy change.
		cout << "[1] Move a unit" << endl << "[2] fire at the other player" << endl << "[3] end turn" << endl;
		
		switch (menuselect) {
			case 1: {

				cout << "Moving a unit." << endl;
				cout << "Please enter the coordinate of the unit you want to move." << endl;
				cin >> old_coordinate;
				cout << "Please enter the coordinate you would like to move to" << endl;
				cin >> new_coordinate;

				while (player1.PlayerMove(old_coordinate, new_coordinate) == false)
				{
					cout << "Please re-enter the coordinate of the unit you want to move: ";
					cin >> old_coordinate;
					cout << "Please enter the coordinate you would like to move to: ";
					cin >> new_coordinate;
				}

				player1.getTiles();
			}

			case 2: {

				cout << "attacking other player" << endl;
				cout << "enter the coordinate you would like to attack" << endl;
				cin >> firecoordinate;

				player2.PlayerAttacked(firecoordinate); // starting to make attempts at working in the firing, to finish the game up
			}
		
			case 3: {
				cout << "Enter a character to end turn: ";
				cin >> stopchar;
				system("CLS");
				cout << flush;
			}
		}
	}

	cout << "Player 2 turn" << endl;

	player2.getTiles();

		cout << "What would you like to do this turn?" << endl; 
		cout << "[1] Move a unit" << endl << "[2] fire at the other player" << endl << "[3] end turn" << endl;
		
		switch (menuselect) {
			case 1: {

				cout << "Moving a unit." << endl;
				cout << "Please enter the coordinate of the unit you want to move." << endl;
				cin >> old_coordinate;
				cout << "Please enter the coordinate you would like to move to" << endl;
				cin >> new_coordinate;

				while (player2.PlayerMove(old_coordinate, new_coordinate) == false)
				{
					cout << "Please re-enter the coordinate of the unit you want to move: ";
					cin >> old_coordinate;
					cout << "Please enter the coordinate you would like to move to: ";
					cin >> new_coordinate;
				}

				player2.getTiles();
			}

			case 2: {

				cout << "attacking other player" << endl;
				cout << "enter the coordinate you would like to attack" << endl;
				cin >> firecoordinate;

				player1.PlayerAttacked(firecoordinate); // starting to make attempts at working in the firing, to finish the game up
			}
		
			case 3: {
				cout << "Enter a character to end turn: ";
				cin >> stopchar;
				system("CLS");
				cout << flush;
			}
		}
	}
	
	
	cout << "End of the game, Thanks for playing!" << endl;
	cout << "enter a character to exit the console." << endl;
	cin >> stopchar;

}