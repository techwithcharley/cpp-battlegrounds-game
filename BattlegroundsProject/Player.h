//header file for units, will include all member attributes and functions
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Map {
private:
	int Tiles_Size;
	vector<vector<char>> Tiles;		// Char array of map to display map to user
	vector<vector<bool>> Terrain;	// Boolean array of terrain types
	vector<vector<char>> HasUnit;	//  Character array of unit locations on the map
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
	void setHasUnit(string, char);	// Method to set members of the HasUnit array
	char getHasUnit(string);	// Method to test if a specific tile contains a unit
	bool BoardToArray(string);	// Method to convert the game board coordinated to array indices
};

class player : public Map {
private:
	string type; //used to determine the move values, so on and so forth.
	string currentposition, newposition; // string where the position is stored, and used to send to the map to update.
	bool Cover;		//determines whether the unit has a cover value or not
	bool HasMoved; // used in hasmoved to define whether the unit has moved or not this turn
	int MoveDistance, i, Health; //i is used for the array of units needed to populate the map.
	vector <string> Units; // double check dynamic memory allocation for vectors.

public:
	player();
	virtual ~player();
	void setType(char); // land, sea, air
	void setPosition(string, char); // co-ordinate A2 to the int unit, ie unit 2 
	void setCover(bool); // does it have cover y/n
	void setHasMoved(bool); // has it moved y/n
	void setMoveDistance(int); // how much can it move (1)
	void setHealth(int); // sets the ho of the unit, ie if it has been hit or not. Always going to be 1 in the current dev stage
	void setUnits(int); // sets the units in the beginning.
	string getType(); //returns land, sea, air, needs the position?
	string getPosition(); //returns a string co-ordinate A2 
	bool getCover(); // returns a boolean 1= yes
	bool getHasMoved(); // returns if it has moved 1= yes
	int getMoveDistance(); // returns it's move value, always 1 currently.
	int getHealth(); //function returns the hp value of the unit, if it is 0 the unit is dead.
	int getUnits(); // returns something about the unit number in the vector.
	
};
#endif