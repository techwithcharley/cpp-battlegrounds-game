#include "stdafx.h"
#include "Player.h"

Map::Map()
{
	//setTiles();	// Run initial setTiles on instance creation
}

Map::~Map()
{
	// Still to be implemented
}

void Map::setTiles()
{
	for (int y = 0; y < Tiles_Size; y++) {	// Iterate through each of the y coordinates
		for (int x = 0; x < Tiles_Size; x++) {	// Iterate through the x coordinates
			if (x > 2) {	// Hardcoded terrain types, to be computer generated later
				Tiles[x][y] = '~';	// Set current index values to represent water tiles
				Terrain[x][y] = false;    // Set Terrain value to water
			}
			else {
				Tiles[x][y] = '^';	// Set current index values to represent land tiles
				Terrain[x][y] = true;    // Set Terrain value to land
			}
		}
	}
}

void Map::getTiles()
{
	cout << "  A B C D E" << endl;	// Print letters to console, to be done by GUI later

	for (int x = 0; x < Tiles_Size; x++) {
		cout << x + 1 << " ";    // Print current index + 1 to console for game board, to be done by GUI

		for (int y = 0; y < Tiles_Size; y++) {
			cout << Tiles[x][y] << " ";    // Print value stored at the current index to console, to be done by GUI
		}
		cout << endl;
	}
}

void Map::setTiles_Size(int size)    // Input in the form of a single integer value
{
	// Further expansion for variable map size
	// will be 5, 10, 15 as proposed for the gui.
}

int Map::getTiles_Size()
{
	return Tiles_Size;
}

void Map::UpdateTiles(string old_position, string new_position)    // Input in the form of two board coordinates e.g "A3"
{
	// Still to be implemented

}

void Map::setTerrain(string position, bool type)    // Input in the form of a board coordinate e.g "A3" and a boolean value
{
	BoardToArray(position);    // Convert board coordinate to array index

	Terrain[coord[0]][coord[1]] = type;    // Set value at array index to variable type

	if (type == true) {
		Tiles[coord[0]][coord[1]] = '^';   // Update Tiles array with change
	}
	else
		Tiles[coord[0]][coord[1]] = '~';   // Update Tiles array with change
}

bool Map::getTerrain(string position)    // Input in the form of a board coordinate e.g "A3"
{
	BoardToArray(position);    // Convert board coordinate to array index, should validate the first input? but doesn't?

	if (Terrain[coord[0]][coord[1]] == true) {    // Check if terrain at current array index is land
		cout << "Terrain is land!" << endl;

		return Terrain[coord[0]][coord[1]];
	}
	else if (Terrain[coord[0]][coord[1]] == false)
	{
			cout << "Terrain is water!" << endl;

			return Terrain[coord[0]][coord[1]];    // Return value at current array index
	}
	else
	{
		cout << "error getTerrain" << endl;
	}
}
void Map::setHasUnit(string position, char type)    // Input in the form of a board coordinate e.g "A3" and a boolean value
{
	BoardToArray(position);		// Convert board coordinate to array index


	HasUnit[coord[0]][coord[1]] = type;    // Set value at array index to variable type
}

char Map::getHasUnit(string position)    // Input in the form of a board coordinate e.g "A3"
{
	BoardToArray(position);    // Convert board coordinate to array index

	return HasUnit[coord[0]][coord[1]];

}
bool Map::BoardToArray(string position)    // Input in the form of a board coordinate e.g "A3"
{

	const char* pos_arr = position.c_str();    // Convert input string to a character array (c-string)
	int x = int(pos_arr[0]) - 65; // Convert first value in array to decimal array coordinate
	int y = (stoi(position.substr(1, position.length() - 1))) - 1;// Convert remainder of string to other array coordinate
	if (x < Tiles_Size && x > -1 && y < Tiles_Size && y > -1) {    // Verify that input is within the board limits

			cout << "valid Co-ordinate entered!" << endl;
			coord[0] = y;    // Store values in the coord array
			coord[1] = x;
			return true;
	}
	else {
			cout << "Invalid Co-ordinate entered!" << endl;
			return false;
		}
}


// ADDITIONAL COMMENTS.
/* Currently stuck at the sea verification,  the coordinate from the map generated is apparently always returning true, ie land
even when it shouldn't be. 
How to fix this? 
*/