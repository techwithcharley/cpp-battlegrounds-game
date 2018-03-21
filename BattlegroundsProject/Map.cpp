#include "Player.h"

Map::Map()
{
	int map_size;
	cout << "Enter desired map size (max 9): ";
	cin >> map_size;

	while (map_size > 9) {
		cout << "Size too large, please enter new value: ";
		cin >> map_size;
	}
	setTiles_Size(map_size);
	setTiles();
}

Map::~Map()
{
	// Still to be implemented
}

void Map::setTiles()
{
	for (int y = 0; y < Tiles_Size; y++) {	// Iterate through each of the y coordinates
		for (int x = 0; x < Tiles_Size; x++) {	// Iterate through the x coordinates
			if (x > Tiles_Size / 2) {	// Hardcoded terrain types, to be computer generated later
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
	string alphabet = "  A B C D E F G H I J";

	cout << alphabet.substr(0, (Tiles_Size * 2) + 1) << endl;	// Print letters to console, to be done by GUI later

	for (int x = 0; x < Tiles_Size; x++) {
		cout << x + 1 << " ";    // Print current index + 1 to console for game board, to be done by GUI
		for (int y = 0; y < Tiles_Size; y++) {
			if (HasUnit[x][y] != NULL) {
				Tiles[x][y] = HasUnit[x][y];
			}
			cout << Tiles[x][y] << " ";    // Print value stored at the current index to console, to be done by GUI
		}
		cout << endl;
	}
}

void Map::setTiles_Size(int size)    // Input in the form of a single integer value
{
	Tiles_Size = size;

	Tiles.resize(size);
	Terrain.resize(size);
	HasUnit.resize(size);
	for (int i = 0; i < size; i++) {
		Tiles[i].resize(size);
		Terrain[i].resize(size);
		HasUnit[i].resize(size);
	}
}

int Map::getTiles_Size()
{
	return Tiles_Size;
}

void Map::UpdateTiles(string old_position, string new_position)    // Input in the form of two board coordinates e.g "A3"
{
	BoardToArray(old_position);
	int old_x = coord[0];
	int old_y = coord[1];
	BoardToArray(new_position);
	if (HasUnit[old_x][old_y] != '^' || '~') {
		HasUnit[coord[0]][coord[1]] = HasUnit[old_x][old_y];
	}
	if (getTerrain(old_position) == true) {
		HasUnit[old_x][old_y] = '^';
	}else
		HasUnit[old_x][old_y] = '~';
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