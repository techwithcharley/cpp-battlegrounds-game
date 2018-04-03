#include "Player.h"

int main() {

	string coordinate; //this is used for validating a co-ordinate input from a user might need to be a pointer 
	string playerturn;  //this is used to determine what the player would like to do with their turn, ie fire, move...
	string firecoordinate; // this is the tile the user selects to fire at
	string old_coordinate, new_coordinate; // these are the coordinates used for the moving of units by players.
	int playernumber = 1; // tells the program which player is currently playing 
	char stopchar; // used at the end to halt the console screen before exiting.
	player player1; // this is the class for player 1
	player player2; //this is the class for player 2
	
	cout << "Player 1: Unit Placement" << endl;
	player1.getTiles();
	player1.setUnits(3);
	player1.getTiles();
	player1.PlayerMove("A5", "A6");
	player1.getTiles();
	cout << "Enter a character to end turn: ";
	cin >> stopchar;
	system("CLS");
	cout << flush;


	cout << endl << "Player 2: Unit Placement" << endl;
	player2.getTiles();
	player2.setUnits(3);
	player2.getTiles();
	cout << "Enter a character to end turn: ";
	cin >> stopchar;
	system("CLS");
	cout << flush;

	while (player1.CheckEndGame() == false && player2.CheckEndGame() == false) {
		
	}

	/*while (player1.CheckEndGame() == false && player2.CheckEndGame() == false)
	{
		cout << "Player 1's turn:" << endl;
		player1.getTiles();

		cout << "Player 1 turn" << endl; //outputs to the console, who's turn it is, NO CHEATING!!!
		playernumber = 0; //sets to player 1
		
		cout << "What would you like to do this turn?" << endl;
		cout << "select a number:/n [1] move a unit. /n [2] fire a shot. " << endl; // maybe add more than fire or move?
		getline(cin, playerturn); // needs validation,

		if (playerturn == "1")
		{
			cout << "Enter the coordinate of the unit you want to move: ";
			cin >> old_coordinate;
			cout << "Enter the coordinate you want the unit to move to: ";
			cin >> new_coordinate;
			player1.UpdateTiles(old_coordinate, new_coordinate);
			player1.setHasMoved(true); // sets that the player will have moved
		}
		else // currently an else due to there only being 2 options.
		{
			cout << " Where would you like to fire?" << endl;
			cout << " Please enter a co-ordinate, such as A3 " << endl; // section needs to check if there is a unit, adn also update hp if there is. something to do wtih cover later on as well. 
			cin >> firecoordinate; // needs a function that changes the tiles from a unit being present to being null.ss
		}

		for (int i = 0; i < player1.getUnits(); i++) //iterates through the other player's units, checking if any of them have hp left.
		{
			int temp;

			temp = player2.gethp();

			if (temp == 0)
			{
				cout << "unit " << i + 1 << "has no hp!" << endl; // tells the user whether a unit has hp or not, change later so that it doesn't say all the dead ones all the time.
				playerhp = 0;
			}
			else
			{
				playerhp = 1;
				continue; // should break the loop when it reaches a unit with hp.
			}
		}
		if (playerhp == 0) // if the player has no hp, it should end the game and display a gg message to the other user.
		{
			gameover = 1;
		}


		playernumber = 1; // changes to player 2

		cout << "Player 2 turn " << endl; //outputs to the console, who's turn it is, NO CHEATING!!!
		playernumber = 0; //sets to player 2

		cout << "What would you like to do this turn?" << endl;
		cout << "select a number:/n [1] move a unit. /n [2] fire a shot." << endl; // maybe add more than fire or move?
		getline(cin, playerturn); // needs validation,

		/*if (playerturn == "2")
		{
			//need something in here to make it obvious which unit to move?
		}
		else // currently an else due to there only being 2 options.
		{
			cout << " Where would you like to fire? " << endl;
			cout << " Please enter a co-ordinate, such as A3 " << endl;
			getline(cin, firecoordinate); // ALSO NEEDS VALIDATION.
		}

		for (int i = 0; i = 2; i++) //iterates through the other player's units, checking if any of them have hp left.
		{
			int temp;

			temp = player1.gethp();

			if (temp == 0)
			{
				cout << "unit " << i + 1 << "has no hp!" << endl; // tells the user whether a unit has hp or not, change later so that it doesn't say all the dead ones all the time.
				playerhp = 0;
			}
			else
			{
				playerhp = 1;
				continue; // should break the loop when it reaches a unit with hp.
			}
		}
		if (playerhp == 0) // if the player has no hp, it should end the game and display a gg message to the other user.
		{
			gameover = 1;
		}


		// end section, displayes the winner message.
	} // end bracket for the while loop

	if (playernumber == 0)
	{
		cout << "Congratulations!!!/n player 1 is the winner! " << endl;
	}
	else
	{
		cout << "Congratulations!!!/n player 2 is the winner! " << endl;
	}
	*/
	cout << "End of the game, Thanks for playing!" << endl;
	cout << "enter a character to exit the console." << endl;
	cin >> stopchar;
	/////////////////////////////////////////////////////////////////////////////
}