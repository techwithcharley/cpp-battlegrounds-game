#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include <vector>
#include <iostream>	// Used to display information to the user through the console
#include <time.h>	// Used to seed the number generator

using namespace std;

class Map {
private:
	int Tiles_Size;
	vector<vector<char>> Tiles;	// Vector of vectors of characters to be displayed to user
	vector<vector<bool>> Terrain;	// Vector of vectors of boolean values indicating terrain types
	vector<vector<char>> HasUnit;	//  Vector of vectors of characters representing unit locations on the map
	int coord[2], MoveDistance;	// Temporary variable to store board coordinate system as array index

public:
	Map();	// Constructor for Map class
	virtual ~Map();	// Destructor for Map class
	void setMapSize();	// Method to be run once after class creation for user selected tiles size and map generation
	void MapGen();	// Method to populate the characters in the Tiles and Terrain arrays
	void setTiles(string, char);	// Method to change the value of a specific tile
	void getTiles();	// Method to display the Tiles array to the user
	void setTiles_Size(int);	// Method to change the map size manually
	int getTiles_Size();	// Method to return the map size
	void UpdateTiles(string, string);	// Method to update the Tiles array after unit movement
	void setTerrain(string, bool);	// Method to set members of the Terrain array
	bool getTerrain(string);	// Method to access the data of a specific tile's terrain type
	bool TerrainVerify(string, string);	// Method to ensure that a unit is moving to a valid tile
	bool DistanceVerify(string, string);	// Method to ensure that a unit is moving a valid distance
	void setMoveDistance(int);	// Method to set the maximum movement distance for the player
	bool setHasUnit(string, char);	// Method to set members of the HasUnit array
	char getHasUnit(string);	// Method to test if a specific tile contains a unit
	void setCoord(int, int);	// Method to manually set the coord data member
	int getCoord(int);	// Method to access a value within the coord array
	bool CheckEndGame();	// Method to test if the endgame condition has been reached
	bool BoardToArray(string);	// Method to convert the game board coordinates to array indices
	void EndTurn();	// Method to clear the console between user turns
};

class player : public Map {
private:
	vector<vector<bool>> Cover;	// Vector of vectors of boolean values indicating the cover value of each tile
	bool HasMoved;	// Boolean value indicating whether the user has moved this turn
	int Health, Units;	// Integer values representing current state of user

public:
	player();	// Constructor for player class
	virtual ~player();	// Destructor for player class
	void setCover(string, bool);	// Method to set the cover value of a specific tile
	void setHasMoved(bool);	// Method to set that the user has moved this turn
	void setHealth(int);	// sets the health of the unit, ie if it has been hit or not. Always going to be 1 in the current dev stage
	void placeUnits(int);	// sets the units in the beginning.
	void setUnits(int);	// Sets the number of player units
	bool getCover(string);	// Method to get the cover value of a specific tile
	bool getHasMoved();	// returns if the unit has moved
	int getHealth();	//function returns the hp value of the unit, if it is 0 the unit is dead.
	int getUnits();	// returns the number of player units
	string PlayerTurn();	//Method for player to carry out an action per turn
	void PlayerAttacked(string);	// Method to be called when the player is attacked
	bool PlayerMove(string, string);	// Method to enable player units to move
};

class computer : public Map {
private:
	int difficulty;

public:
	player robot;	// Instance of player class to enable code re-use
	computer(int);	// Constructor for computer class
	virtual ~computer();	// Destructor for computer class
	void placeComUnits(int);	// Method to place the computer units on the map
	void ComAttacked(string);	// Method to test if an opponent shot hits a unit
	bool ComMove(string, string);	// Method to allow the computer to move its units
	string ComTurn();	// Method to allow the computer to carry out an action per turn
	string RandomCoord();	// Method to generate a pseudo-random coordinate
};
#endif
