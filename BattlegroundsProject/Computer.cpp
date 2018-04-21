#include "Player.h"

computer::computer()
{

}

computer::~computer()
{
	// Still to be implemented
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
		if (DistanceVerify(old_pos, new_pos) == true && TerrainVerify(old_pos, new_pos) == true) {	// Check that the terrain and distance are valid
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
	int action = rand() % 3+1;	// Generate a value between 1 and 3
	cout << "action: " << action << endl;	// Output the generated value to the console **testing only**
	string old_coordinate, new_coordinate, target;	// Variables to store coordinates

	switch (action) {	// Switch statement based on generated value
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
		target = RandomCoord();	// Generate coordinate to fire at
		cout << "firing..." << endl;
		return target;	// Return target coordinate
		break;

	case 3:
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
	int coord_y = rand()%tiles_size;	// Generate a value between 0 and game board size
	int coord_x = rand()%tiles_size;	// Generate a value between 0 and game board size

	result = alphabet[coord_x] + to_string(coord_y);	// Append selected letter to generated y coordinate
	return result;	// Return the generated board coordinate
}