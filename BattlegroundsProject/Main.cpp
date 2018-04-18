#include "Player.h"	// Include the header file

int main() {

// *********** Variable initialisation *********** //

	string userturn, playermode;	// Strings to store the user's action and the current number of human players
	bool endgame2 = false;	// Initialise the endgame condition for the second player (human/computer) to false
	player player1, player2; // Create two instances of the player class
	computer com;	// Create an instance of the computer class
	srand(time(0));	// Seed for the number generator

// *********** Game setup *********** //

	do{
		cout << "Would you like:\n[1] Single-player\n[2] Multi-player" << endl;	// Ask user to select number of players
		cin >> playermode;	// Store user input within playermode variable
	} while ((playermode.find("1") == false || playermode.find("2") == false) && playermode.size() > 1 );	// Conditions to verify the input

	if (playermode == "1"){	// Check if the user has selected single-player
		player1.setMapSize();	// Initialise the map for player 1
		player1.setMoveDistance(2);	// Set the maximum movement distance for player 1
		com.setTiles_Size(player1.getTiles_Size());	// Set the map size for the computer to that of player 1
		com.MapGen();	// Generate the map for the computer
	}
	else if (playermode == "2"){	// Check if the user has selected multi-player
		player1.setMapSize();	// Initialise the map for player 1
		player2.setTiles_Size(player1.getTiles_Size());	// Set the map size for player 2 to that of player 1
		player2.MapGen();	// Generate the map for player 2
	}

// *********** Unit placement *********** //

	cout << "Player 1: Unit Placement" << endl;
	player1.getTiles();	// Output the blank map to the user
	player1.setUnits(3);	// Call the method to place the user's units on the map
	player1.getTiles();	// Output the populated map to the user
	player1.EndTurn();	// Clear the console for the next player
	
	if (playermode == "1"){	// Check if the user has selected single-player
		cout << "Computer: Unit Placement" << endl;
		com.getTiles();	// Output the blank computer map **Testing only**
		com.setComUnits(3);	// Place the computer's units on the map
		com.getTiles();	// Output the populated computer map **Testing only**
	}
	else if (playermode == "2"){	// Check if the user has selected multi-player
		cout << "Player 2: Unit Placement" << endl;
		player2.getTiles();	// Output the blank map to the user
		player2.setUnits(3);	// Call the method to place the user's units on the map
		player2.getTiles();	// Output the populated map to the user
		player2.EndTurn();	// Clear the console for the next player
	}

// *********** Turn iteration *********** //

	while (player1.CheckEndGame() == false && endgame2 == false) {	// Loop until either of the endgame conditions are met

		cout << "Player 1: Turn" << endl;
		player1.getTiles();	// Display player 1's map

///////////////////////////////////////////////////////////////////////////////////
// ** Needs fixed, possibly try and catch to deal with invalid keyboard input ** //
		userturn = player1.PlayerTurn();

		while (userturn == "error") {
			player1.PlayerTurn();
		}
///////////////////////////////////////////////////////////////////////////////////

		if (player1.BoardToArray(userturn) == true) {	// Check if userturn is a valid board coordinate
			if (playermode == "1") {	// Check if the user has selected single-player
				com.ComAttacked(userturn);	// Check if the attack has hit the computer
			}
			else if(playermode == "2") {	// Check if the user has selected multi-player
				player2.PlayerAttacked(userturn);	// Check if the attack has hit player 2
			}
		}
		player1.EndTurn();	// Clear the console for the next player

		if (playermode == "1"){	// Check if the user has selected single-player
			userturn = com.ComTurn();	// Allow the computer to perform an action

			if (com.BoardToArray(userturn) == true){	// Check if userturn is a valid board coordinate
				player1.PlayerAttacked(userturn);	// Check if the attack has hit player 1
			}
			com.EndTurn();	// Clear the console for the next player
			endgame2 = com.CheckEndGame();	// Check if all computer units have been eliminated
		}
		else if (playermode == "2"){	// Check if the user has selected multi-player
			cout << "Player 2: Turn" << endl;
			player2.getTiles();	// Display player 2's map

///////////////////////////////////////////////////////////////////////////////////
// ** Needs fixed, possibly try and catch to deal with invalid keyboard input ** //
			userturn = player2.PlayerTurn();

			while (userturn == "error") {
				player2.PlayerTurn();
			}
///////////////////////////////////////////////////////////////////////////////////

			if (player2.BoardToArray(userturn) == true) {	// Check if userturn is a valid board coordinate
				player1.PlayerAttacked(userturn);	// Check if the attack has hit player 1
			}
			player2.EndTurn();	// Clear the console for the next player
			endgame2 = player2.CheckEndGame();	// Check if all of player 2's units have been eliminated
		}
	}
	
// *********** Endgame process *********** //

	if (player1.CheckEndGame() == true) {	// Check if player 1 or 2 was eliminated
		cout << "Player 1 has been defeated..." << endl;
	}
	else if(endgame2 == true) {
		cout << "Player 2 has been defeated..." << endl;
	}
	else{
		cout << "Error, Unexpected endgame reached..." << endl;
	}

	cout << "End of the game, Thanks for playing!" << endl;
	cout << "Enter a character to exit the console." << endl;
	char stopchar;	// used at the end to halt the console screen before exiting.
	cin >> stopchar;	// Recieve the keyboard input
	return 0;	// Return 0 to end main
}