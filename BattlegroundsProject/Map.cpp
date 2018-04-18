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
	int map_size;
	cout << "Enter desired map size (max 9): ";
	cin >> map_size;

	while (map_size > 9) {
		cout << "Size too large, please enter new value: ";
		cin >> map_size;
	}
	setTiles_Size(map_size);
	MapGen();
}

void Map::MapGen()
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

void Map::setTiles(string coordinate, char type)
{
	BoardToArray(coordinate);
	Tiles[coord[0]][coord[1]] = type;
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
	int old_y = coord[0];
	int old_x = coord[1];
	BoardToArray(new_position);
		
	HasUnit[coord[0]][coord[1]] = HasUnit[old_y][old_x];

	if (getTerrain(old_position) == true) {
		Tiles[old_y][old_x] = '^';
	}
	else {
		Tiles[old_y][old_x] = '~';
	}

	if (old_position != new_position) {
		HasUnit[old_y][old_x] = NULL;
	}
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
		return Terrain[coord[0]][coord[1]];
	}
	else if (Terrain[coord[0]][coord[1]] == false){
			return Terrain[coord[0]][coord[1]];    // Return value at current array index
	}
}

bool Map::setHasUnit(string position, char type)    // Input in the form of a board coordinate e.g "A3" and a boolean value
{
	switch (type){
	case 'I':
		if (getTerrain(position) != true){
			return false;

			if (getHasUnit(position) != NULL){
				return false;
			}
		}
		HasUnit[coord[0]][coord[1]] = type;
		return true;
		break;

	case 'S':
		while (getTerrain(position) != false){
			return false;

			while (getHasUnit(position) != NULL){
				return false;
			}
		}
		HasUnit[coord[0]][coord[1]] = type;
		return true;
		break;

	case 'P':
		while (getHasUnit(position) != NULL){
			return false;
		}
		HasUnit[coord[0]][coord[1]] = type;
		return true;
		break;

	case NULL:
		HasUnit[coord[0]][coord[1]] = type;
		return true;
		break;

	default:
		return false;
	}
}

char Map::getHasUnit(string position)    // Input in the form of a board coordinate e.g "A3"
{
	BoardToArray(position);    // Convert board coordinate to array index
	return HasUnit[coord[0]][coord[1]];
}

void Map::setCoord(int coord_y, int coord_x)
{
	coord[0] = coord_y;
	coord[1] = coord_x;
}

int Map::getCoord(int index)
{
	return coord[index];
}

bool Map::CheckEndGame()
{
	int count = 0;
	for (int x = 0; x < getTiles_Size(); x++) {
		for (int y = 0; y < getTiles_Size(); y++) {
			if (HasUnit[x][y] != NULL) {
				count++;
			}
		}
	}
	cout << "Count: " << count << endl;
	if (count == 0) {
		cout << "End Game reached..." << endl;
		return true;
	}
	else {
		return false;
	}
}

bool Map::BoardToArray(string position)    // Input in the form of a board coordinate e.g "A3"
{

	const char* pos_arr = position.c_str();    // Convert input string to a character array (c-string)
	int x = int(pos_arr[0]) - 65; // Convert first value in array to decimal array coordinate
	int y;
	try {
		y = (stoi(position.substr(1, position.length() - 1))) - 1;// Convert remainder of string to other array coordinate
	}
	catch(...){
		return false;
	}
	if (x < Tiles_Size && x > -1 && y < Tiles_Size && y > -1) {    // Verify that input is within the board limits
			coord[0] = y;    // Store values in the coord array
			coord[1] = x;
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
	cin >> stopchar;
	system("CLS");
	cout << flush;
}
