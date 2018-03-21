//header file for units, will include all member attributes and functions
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

const int Tiles_Size = 5;	// Hardcoded map size

class Map {
private:
	char Tiles[Tiles_Size][Tiles_Size];		// Char array of map to display map to user
	bool Terrain[Tiles_Size][Tiles_Size];	// Boolean array of terrain types
	char HasUnit[Tiles_Size][Tiles_Size];	//  Character array of unit locations on the map
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
	bool cover;		//determines whether the unit has a cover value or not
	bool move; // used in hasmoved to define whether the unit has moved or not this turn
	int distance, i, hp; //i is used for the array of units needed to populate the map.
	vector <string> units[3]; // double check dynamic memory allocation for vectors.

public:
	player();
	virtual ~player();
	void settype(char); // land, sea, air
	void setposition(string, char); // co-ordinate A2 to the int unit, ie unit 2 
	void setcover(bool); // does it have cover y/n
	void sethasmoved(bool); // has it moved y/n
	void setmove(int); // how much can it move (1)
	void sethp(int); // sets the ho of the unit, ie if it has been hit or not. Always going to be 1 in the current dev stage
	void setunit(int); // sets the units in the beginning.
	string getype(); //returns land, sea, air, needs the position?
	string getposition(); //returns a string co-ordinate A2 
	bool getcover(); // returns a boolean 1= yes
	bool gethasmoved(); // returns if it has moved 1= yes
	int getmove(); // returns it's move value, always 1 currently.
	int gethp(); //function returns the hp value of the unit, if it is 0 the unit is dead.
	int getunit(int); // returns something about the unit number in the vector.
	
};
#endif