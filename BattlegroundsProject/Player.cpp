///////////////////////////////////////////////////////////////
/*
Project - Battlegrounds Game
Module - Player.cpp
Last updated - 22/04/18
Recent changes - Fully commented code script
Author - Andrew Weir
*/
///////////////////////////////////////////////////////////////

#include "Player.h"

player::player() 
{

}

player::~player()
{
	// Still to be implemented
}

void player::setCover(string position, bool value)
{
	BoardToArray(position);	// Convert input position to vector indices
	Cover[getCoord(0)][getCoord(1)] = value;	// Set value at input position to input value
}

void player::setHasMoved(bool moved)
{
	HasMoved = moved;	// Set data member to input value
}

void player::setHealth(int hp)
{
	Health = hp;	// Set data member to input value
}

void player::placeUnits(int unit)
{
	Cover.resize(getTiles_Size());	// Resize first dimension of vector ti data member 'Tiles_Size'
	for (int i = 0; i < getTiles_Size(); i++) {	// Iterate through first dimension entries
		Cover[i].resize(getTiles_Size());	// Resize the second dimension of the vector
	}

	Units = unit;	//Set data member to input value
	char unit_type = NULL;	// Initialise variable to store type of current unit to place
	string coordinate;	// Initialise variable to store keyboard input for position of unit

	for (int z = 0; z < getUnits(); z++)	// Loop to value of data member
	{
		switch (z) {	// Switch statement based on number of units

		case 0:
		case 3:
			unit_type = 'I';	// Set variable to land unit
			break;

		case 1:
		case 4:
			unit_type = 'S';	// Set variable to sea unit
			break;

		case 2:
		case 5:
			unit_type = 'P';	// Set variable to air unit
			break;
		}

		cout << "Type: " << unit_type << endl;	// Output type of unit currently being placed
		cout << "Enter the coordinate you want the unit to be placed at: ";
		cin >> coordinate;	// Store keyboard input in variable
		while (setHasUnit(coordinate, unit_type) == false){	// Loop while unit placement is unsuccessful
			cout << "Placement invalid, please enter a different coordinate: ";	// Prompt user to retry
			cin >> coordinate;	// Store new coordinate in variable
		}
	}
}

void player::setUnits(int num_unit)
{
	Units = num_unit;	// Set data member to input value
}

bool player::getCover(string position)
{
	BoardToArray(position);	// Convert input coordinate to vector indices
	return Cover[getCoord(0)][getCoord(1)];	// Return value stored at vector indices
}

bool player::getHasMoved()
{
	if (HasMoved == true){	// Check if data member has been set true
		cout << "player has moved! \n";
	}
	else{
		cout << "Unit has not moved! \n";
	}
	return HasMoved;	// return value of data member
}

int player::getHealth()
{
	return Health;	// return value of data member
}

int player::getUnits()
{
	return Units;	// return value of data member
}

string player::PlayerTurn()
{
	string playerturn, old_coordinate, new_coordinate, target;	// Initialise variables to store keyboard inputs

	cout << "What would you like to do this turn?" << endl;
	cout << "[1] Move a unit\n[2] fire at the other player\n[3] end turn" << endl;
	cin >> playerturn;	// Store user-selected action in variable

	try{
		stoi(playerturn);	// Verify that the input can be converted to an integer
	}
	catch (...){
		cout << "Error, invalid action..." << endl;
		return "error";
	}

	switch (stoi(playerturn)) {	// Switch statement based on user-selected action
	case 1:	// Case for movement
		cout << "Enter the coordinate of the unit you want to move: ";
		cin >> old_coordinate;
		cout << "Enter the coordinate you want the unit to move to: ";
		cin >> new_coordinate;
		while (PlayerMove(old_coordinate, new_coordinate) == false) {	// Loop while unable to move
			cout << "Enter the coordinate of the unit you want to move: ";
			cin >> old_coordinate;
			cout << "Enter the coordinate you want the unit to move to: ";
			cin >> new_coordinate;
		}
		setHasMoved(true); // sets that the player has moved
		return "move";
		break;

	case 2:	// Case for firing at enemy
		cout << "enter the coordinate to target: ";
		cin >> target;
		return target;	// Return coordinate to fire at
		break;

	case 3:	// Case for ending turn
		cout << "Turn ended..." << endl;
		return "endturn";
		break;

	default:	// Case to catch any errors/ incorrect inputs
		cout << "Invalid command entered..." << endl;
		return "error";
		break;
	}
}

void player::PlayerAttacked(string target)
{  
	if (getHasUnit(target) != NULL) {	// Check if there is a unit in the input tile
		cout << "Hit!" << endl;
		setHasUnit(target, NULL);	// Set the value of 'HasUnit' at the input position to NULL
		setTiles(target, 'X');	// Set the value of 'Tiles' at the input position to X
	}
	else {
		cout << "Attack missed..." << endl;
	}
}

bool player::PlayerMove(string old_pos, string new_pos) // Method for user to move
{
	if (getHasUnit(old_pos) != NULL) {	// Check if there is a unit at the old position
		if (DistanceVerify(old_pos, new_pos) == true && TerrainVerify(old_pos, new_pos) == true) {	// Verify the distance and terrain 
			UpdateTiles(old_pos, new_pos);	// Move the unit from the old to new position
			return true;	// Return that the move was successful
		}
		else {
			cout << "Verification failure, please re-enter coordinates..." << endl;
			return false;	// Return that the move was unsuccessful
		}
	}
	else {
		cout << "no unit present at the coordinate" << endl;
		return false;	// Return that the move was unsuccessful
	}
}