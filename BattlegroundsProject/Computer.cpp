///////////////////////////////////////////////////////////////
/*
Project - Battlegrounds Game
Module - Computer.cpp
Last updated - 23/04/18
Recent changes - Added setter and getter for Difficulty
Author - James Wilcox
*/
///////////////////////////////////////////////////////////////

#include "Player.h"

computer::computer()
{

}

computer::~computer()
{
	// Still to be implemented
}

bool computer::setDifficulty(string diff)
{
	try{
		Difficulty = stoi(diff);
	}
	catch (...){
		return false;
	}
	return true;
}

int computer::getDifficulty()
{
	return Difficulty;
}

void computer::placeComUnits(int num_units)
{
	robot.setUnits(num_units);	// Set the number of computer units
	string unit_types = "ISPISPISPISPISP";	// String of unit types for dynamic unit numbers
	string coordinate;	// Variable to store generated coordinate

	for (int i = 0; i < robot.getUnits(); i++){	// Loop through all computer units
		coordinate = RandomCoord();	// Generate a coordinate to place unit
		cout << "Type: " << unit_types[i] << endl;	// Output current unit type to the console **testing only**
		while (setHasUnit(coordinate, unit_types[i]) == false){	// Loop while unit placement fails
			coordinate = RandomCoord();	// Generate new coordinate upon failure
		}
	}
}

void computer::ComAttacked(string target)
{
	if (getHasUnit(target) != NULL) {	// Check if a unit is present in the tile
		cout << "Hit!" << endl;	// Output to the console **testing only**
		setHasUnit(target, NULL);	// Set the value of the current 'HasUnit' tile to NULL
		setTiles(target, 'X');	// Set the value of the current 'Tiles' entry to X
	}
	else{
		cout << "Attack missed..." << endl;	// If no unit is present, output to console **testing only**
	}
}

bool computer::ComMove(string old_pos, string new_pos)
{
	if (getHasUnit(old_pos) != NULL) {	// Check if a unit is present in the tile
		if (DistanceVerify(old_pos, new_pos) == true && TerrainVerify(old_pos, new_pos) == true) {	// Verify the terrain and distance
			UpdateTiles(old_pos, new_pos);	// Update the 'Tiles' array with the unit movement
			return true;	// Return that the move was successful
		}
		else {	// If the terrain or distance are invalid
			return false;	// Return that the move was unsuccessful
		}
	}
	else {	// If no unit is present in the tile
		return false;	// Return that the move was unsuccessful
	}
}

string computer::ComTurn()
{
	int action;

	switch (Difficulty) {
	case 1:
		action = rand() % 6;	// Generate a value between 0 and 5
		break;

	case 2:
		action = rand() % 4;	// Generate a value between 0 and 3
		break;

	case 3:
		action = rand() % 3 + 1;	// Generate a value between 1 and 3
		break;
	}
	cout << "action: " << action << endl;	// Output the generated value to the console **testing only**
	string old_coordinate, new_coordinate, target;	// Variables to store coordinates

	switch (action) {	// Switch statement based on generated value
	case 0:
	case 1:	// Unit movement case
		old_coordinate = RandomCoord();	// Generated coordinate for unit to move
		new_coordinate = RandomCoord();	// Generate coordinate to move unit to
		while (ComMove(old_coordinate, new_coordinate) == false) {	// Loop while unit movement fails
			old_coordinate = RandomCoord();	// Generate new coordinate for unit to move
			new_coordinate = RandomCoord();	// Generate new coordinate to move unit to
		}
		cout << "moving..." << endl;	// Output to console if unit movement is successful **testing only**
		return "move";	// Return string
		break;

	case 2:
	case 3:
		target = RandomCoord();	// Generate coordinate to fire at
		cout << "firing at: " << target << endl;
		return target;	// Return target coordinate
		break;

	case 4:
	case 5:
		cout << "ending turn..." << endl;
		return "endturn";	// Return string
		break;

	default:
		cout << "Error, Invalid action..." << endl;
		return "error";	// Return string
		break;
	}
}

string computer::RandomCoord()
{
	string alphabet = "ABCDEFGHIJ", result;	// String of possible board x coordinates

	int tiles_size = getTiles_Size();	// Store game board size in a variable
	int coord_y = rand()%tiles_size+1;	// Generate a value between 1 and game board size
	int coord_x = rand()%tiles_size;	// Generate a value between 0 and game board size

	result = alphabet[coord_x] + to_string(coord_y);	// Concatenate selected letter with generated y coordinate
	return result;	// Return the generated board coordinate
}