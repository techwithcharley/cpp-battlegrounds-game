/*#ifndef _MAP_H_
#define _MAP_H_

#include "player.h"
#include <string>
#include <iostream>

using namespace std;

const int Tiles_Size = 5;	// Hardcoded map size

class Map {
private:
	char Tiles[Tiles_Size][Tiles_Size];		// Char array of map to display map to user
	bool Terrain[Tiles_Size][Tiles_Size];	// Boolean array of terrain types
	bool HasUnit[Tiles_Size][Tiles_Size];	// Boolean array of unit locations on the map
	int coord[2];	// Temporary variable to store board coordinate system as array index
	
public:
	Map();	// Constructor
	virtual ~Map(); // Destructor
	void setTiles();	// Method to set the characters in the Tiles array
	void getTiles();	// Method to output the current state of the Tiles array
	void setTiles_Size(int);	// Method for optional expansion to variable map size
	int getTiles_Size();	// Method to return map size;
	void UpdateTiles(string, string);	// Method to update Tiles array between turns
	void setTerrain(string, bool);	// Method to set members of the Terrain array
	bool getTerrain(string);	// Method to access the data of a specific tile's terrain type
	void setHasUnit(string, bool);	// Method to set members of the HasUnit array
	bool getHasUnit(string);	// Method to test if a specific tile contains a unit
	bool BoardToArray(string);	// Method to convert the game board coordinated to array indices
};

#endif*/