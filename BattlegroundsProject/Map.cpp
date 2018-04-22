#include "Player.h"

Map::Map()
{

}

Map::~Map()
{
	// Still to be implemented
}

void Map::setMapSize()
{
	int map_size;	// Variable to store user-selected map size
	cout << "Enter desired map size (max 9): ";	// Ask user to input desired map size
	cin >> map_size;	// Store keyboard input

	while (map_size > 9) {	// Loop while user input is too large
		cout << "Size too large, please enter new value: ";	// Ask user to input a new size
		cin >> map_size;	// Store new user input
	}
	setTiles_Size(map_size);	// Set data member 'Tiles_Size' to new value
	MapGen();	// Populate 'Tiles' and 'Terrain' vectors with hardcoded values
}

void Map::MapGen()
{
	for (int x = 0; x < Tiles_Size; x++) {	// Iterate through each of the y coordinates
		for (int y = 0; y < Tiles_Size; y++) {	// Iterate through the x coordinates
			if (x > Tiles_Size / 2) {	// Hardcoded terrain types
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

void Map::setTiles(string coordinate, char type)
{
	BoardToArray(coordinate);	// Convert coordinate to array indices
	Tiles[coord[0]][coord[1]] = type;	// Set coordinate to selected character
}

void Map::getTiles()
{
	string alphabet = "  A B C D E F G H I J";	// String of possible letters

	cout << alphabet.substr(0, (Tiles_Size * 2) + 1) << endl;	// Print letters to console

	for (int x = 0; x < Tiles_Size; x++) {	// Iterate through all x coordinates
		cout << x + 1 << " ";    // Print current index + 1 to console for game board
		for (int y = 0; y < Tiles_Size; y++) {	// Iterate through all y coordinates
			if (HasUnit[x][y] != NULL) {	// Check if there is a unit in the current tile
				Tiles[x][y] = HasUnit[x][y];	// Set the value of 'Tiles' to the current 'HasUnit' tile
			}
			cout << Tiles[x][y] << " ";    // Print value stored at the current index to console
		}
		cout << endl;
	}
}

void Map::setTiles_Size(int size)
{
	Tiles_Size = size;	// Set class data member to input value

	// Resize the first of the 'Tiles', 'Terrain', and 'HasUnit' vectors dimensions to the input size
	Tiles.resize(size);
	Terrain.resize(size);
	HasUnit.resize(size);
	for (int i = 0; i < size; i++) {	// Iterate through each element in the vectors
		// Resize the second of the 'Tiles', 'Terrain', and 'HasUnit' vectors dimensions to the input size
		Tiles[i].resize(size);
		Terrain[i].resize(size);
		HasUnit[i].resize(size);
	}
}

int Map::getTiles_Size()
{
	return Tiles_Size;	// Return the value of the data member 'Tiles_Size'
}

void Map::UpdateTiles(string old_position, string new_position)
{
	BoardToArray(old_position);	// Convert the coordinate of the old position to vector indices
	int old_y = coord[0];	// Store the y coordinate of the old position
	int old_x = coord[1];	// Store the x coordinate of the old position
	BoardToArray(new_position);	// Convert the coordinate of the new position to vector indices	
	HasUnit[coord[0]][coord[1]] = HasUnit[old_y][old_x];	// Set the value of 'HasUnit' in the new tile to that of the old position

	if (getTerrain(old_position) == true) {	// Check if the terrain at the old position is land
		Tiles[old_y][old_x] = '^';	// Set the value of 'Tiles' at the old position to land
	}
	else {	// If the terrain is not land, assume water
		Tiles[old_y][old_x] = '~';	// Set the value of 'Tiles' at the old position to water
	}

	if (old_position != new_position) {	// Check if the new and old positions are different
		HasUnit[old_y][old_x] = NULL;	// Set the value of 'HasUnit' at the old position to NULL
	}
}

void Map::setTerrain(string position, bool type)
{
	BoardToArray(position);    // Convert board coordinate to vector index
	Terrain[coord[0]][coord[1]] = type;    // Set value at vector index to variable type

	if (type == true) {
		Tiles[coord[0]][coord[1]] = '^';   // Set value in 'Tiles' to land
	}
	else
		Tiles[coord[0]][coord[1]] = '~';   // Set value in 'Tiles' to water
}

bool Map::getTerrain(string position)
{
	BoardToArray(position);    // Convert board coordinate to vector index
	return Terrain[coord[0]][coord[1]];	// Return value at given index
}

bool Map::TerrainVerify(string old_pos, string new_pos)
{
	switch (getHasUnit(old_pos)) {	// Switch statement based on value of 'HasUnit' at the old position
	case 'I':	// Case for land unit
		if (getTerrain(new_pos) != true) {	// Check if the terrain of the new position is not land
			return false;
		}
		break;

	case 'S':	// Case for sea unit
		if (getTerrain(new_pos) != false) {	// Check if the terrain of the new position is not water
			return false;
		}
		break;

	case NULL:	// Case for no unit
		return false;
		break;
	}
	return true;
}

bool Map::DistanceVerify(string old_pos, string new_pos) // Verifies that the user is only moving one tile
{
	BoardToArray(old_pos);	// Convert old position to vector indices
	int old_y = getCoord(0);	// Store the y coordinate of the old position
	int old_x = getCoord(1);	// Store the x coordinate of the old position
	BoardToArray(new_pos);	// Convert new position to vector indices
	int diff_sum = (getCoord(0) + getCoord(1)) - (old_x + old_y);	// Calculate the difference between the old and new positions

	if ((diff_sum > MoveDistance) || (diff_sum < -1 * MoveDistance)) {	// Check if the difference is within the movement limit
		return false;
	}
	else{
		return true;
	}
}

void Map::setMoveDistance(int dist)
{
	MoveDistance = dist;	// Set the data member to the input value
}

bool Map::setHasUnit(string position, char type)
{
	switch (type){	// Switch statement based on unit type
	case 'I':	// Case for land unit
		if (getTerrain(position) != true){	// Check if the terrain is not land
			return false;

			if (getHasUnit(position) != NULL){	// Check that there is no unit in the position
				return false;
			}
		}
		HasUnit[coord[0]][coord[1]] = type;	// Set the value of 'HasUnit' at the position to the unit type
		return true;
		break;

	case 'S':	// Case for sea unit
		if (getTerrain(position) != false){	// Check if the terrain is not sea
			return false;

			if (getHasUnit(position) != NULL){	// Check that there is no unit in the position
				return false;
			}
		}
		HasUnit[coord[0]][coord[1]] = type;	// Set the value of 'HasUnit' at the position to the unit type
		return true;
		break;

	case 'P':	// Case for air unit
		if (getHasUnit(position) != NULL){
			return false;
		}
		HasUnit[coord[0]][coord[1]] = type;	// Set the value of 'HasUnit' at the position to the unit type
		return true;
		break;

	case NULL:
		HasUnit[coord[0]][coord[1]] = type;	// Set the value of 'HasUnit' at the position to the unit type
		return true;
		break;

	default:
		return false;
	}
}

char Map::getHasUnit(string position)
{
	BoardToArray(position);    // Convert board coordinate to array index
	return HasUnit[coord[0]][coord[1]];	// Return value of 'HasUnit' at the coordinate
}

void Map::setCoord(int coord_y, int coord_x)
{
	coord[0] = coord_y;	// Set the first value of the data member to the y coordinate input
	coord[1] = coord_x;	// Set the second value of the data member to the x coordinate input
}

int Map::getCoord(int index)
{
	return coord[index];	// Returns the value at the selected index
}

bool Map::CheckEndGame()
{
	int count = 0;	// Initialise counter variable
	for (int x = 0; x < getTiles_Size(); x++) {	// Iterate through all x coordinates
		for (int y = 0; y < getTiles_Size(); y++) {	// Iterate through all y coordinates
			if (HasUnit[x][y] != NULL) {	// Check if there is a unit at the current index
				count++;	// Increase the counter value by one
			}
		}
	}
	if (count == 0) {	// If no units are found, the game is finished
		cout << "End Game reached..." << endl;
		return true;
	}
	else {
		return false;
	}
}

bool Map::BoardToArray(string position)
{

	const char* pos_arr = position.c_str();	// Convert input string to a character array (c-string)
	int x = int(pos_arr[0]) - 65;	// Convert first value in array to decimal array coordinate
	int y;	// Initialise variable y
	try {
		y = (stoi(position.substr(1, position.length() - 1))) - 1;	// Convert remainder of string to other array coordinate
	}
	catch(...){	// Catch all errors
		return false;
	}
	if (x < Tiles_Size && x > -1 && y < Tiles_Size && y > -1) {	// Verify that input is within the board limits
			coord[0] = y;	// Store y coordinate in the first value of the coord array
			coord[1] = x;	// Store x coordinate in the second value of the coord array
			return true;
	}
	else {
			return false;
		}
}

void Map::EndTurn()
{
	char stopchar;

	cout << "Enter a character to end turn: ";
	cin >> stopchar;	// Waits for user input
	system("CLS");	// Clear the console
	cout << flush;
}