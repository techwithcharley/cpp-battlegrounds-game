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
	int coord[2];	// Temporary variable to store board coordinate system as array index

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
	bool setComUnit(string, char);	// Method to place computer units within the HasUnit array
	void setHasUnit(string, char);	// Method to set members of the HasUnit array
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
	int MoveDistance, i, Health, Units;	// Integer values representing current state of user

public:
	player();	// Constructor for player class
	virtual ~player();	// Destructor for player class
	void setCover(string, bool);	// Method to set the cover value of a specific tile
	void setHasMoved(bool);	// Method to set that the user has moved this turn
	void setMoveDistance(int);	// Method to set the maximum movement distance
	void setHealth(int);	// sets the ho of the unit, ie if it has been hit or not. Always going to be 1 in the current dev stage
	void setUnits(int);	// sets the units in the beginning.
	bool getCover(string);	// Method to get the cover value of a specific tile
	bool getHasMoved();	// returns if it has moved 1= yes
	bool DistanceVerify(string, string);
	bool TerrainVerify(string, string);
	int getHealth();	//function returns the hp value of the unit, if it is 0 the unit is dead.
	int getUnits();	// returns something about the unit number in the vector.
	string PlayerTurn();
	void PlayerAttacked(string);
	bool PlayerMove(string, string);
};

class computer : public Map {
private:
	vector<vector<bool>> ComCover;	// Vector of vectors of booloean values indicating the cover value of each tile
	int ComUnits;	// Integer value representing initial number of units

public:
	computer();	// Constructor for computer class
	virtual ~computer();	// Destructor for computer class
	void setComCover(string, bool);	// Method to set the cover value of a specific tile
	bool getComCover(string);	// Method to get the cover value of a specific tile
	void setComUnits(int);	// Method to place the computer units on the map
	int getComUnits();	// Method to return the initial number of units
	bool TerrainVerify(string, string);	// Method to verify the terrain is valid for the selected unit
	bool DistanceVerify(string, string);	// Method to verify the movement distance is valid
	void ComAttacked(string);	// Method to test if an opponent shot hits a unit
	bool ComMove(string, string);	// Method to allow the computer to move its units
	string ComTurn();	// Method to allow the computer to carry out an action per turn
	string RandomCoord();	// Method to generate a pseudo-random coordinate
};
#endif