#include "stdafx.h"
#include "Player.h"

player::player() {

	char stopchar;
	// this doesn;t set the tiles correctly?
	setTiles();

	cout << "enter stopchar, map generated for player"  << endl;
	cin >> stopchar;

}
player::~player()
{

}
void player::settype(char z) { // sets 1 land, 1 sea and 1 air unit for now, to change later for more user customisation. 

	char stopchar; 

	switch (z) {

	case 'I':

		type = "I";
		cout << "Land unit is ready to place!" << endl;
		break;

	case 'S':

		type = "S";
		cout << "Sea unit is ready to place!" << endl;
		break;

	case 'P':

		type = "P";
		cout << "Air unit is ready to place!" << endl;
		break;

	case NULL:

		cout << "Failed allocating unit type! " << endl; // for validating the allocation of units.
		cout << "No unit allocated, enter the stopchar" << endl;
		cin >> stopchar;
		break;
	}

	this->type = type;

}
void player::setposition(string coordinate , char z) // sets unit position, via placement of the user, ie co-ordinate A2q  
{
	bool verify = false;
	bool terrainverify = false;

	///////////////////////////////////////////////////////////////////
	verify = BoardToArray(coordinate);
	// needs to validate the coordinate, then check the terrain, for valid, then change the has unit, then needs to update tile. 
	if (verify == true)
	{
		cout << "Coordinate is valid." << endl;

	}
	else
	{
		while (verify == false)
		{
			cout << "Please enter a new coordinate to place the unit" << endl;
			cin >> coordinate;
			verify = BoardToArray(coordinate); // will still need terrain verification.
		}
	}
	// WILL NEED TO MAKE THIS A FUNCTION TO CALL LATER ON
	//////////////////////////////////////////////////////////////////////////////
	switch (z){
		case 'I' : 
			//no need to get the terrain here as it is an air unit.
			//check has unit
			////set has unit 
			//update tile?
			
			break;
		
		case 'S' : 
	
		//verify for sea terrain. 
		//false for sea.
			terrainverify = true;
			terrainverify = getTerrain(coordinate);

			if (terrainverify == false)
			{
				cout << "Terrain is valid for the sea unit." << endl;
			// needs to call something else i guess.... has unit?
			}
			else
			{
				while (terrainverify == true)
				{
					cout << "Terrain for the unit is invalid, please enter a new coordinate" << endl;
					cin >> coordinate;
					// THIS IS THE THING I SAID I NEEDED TO MAKE A FUNCTION.
					verify = BoardToArray(coordinate);
					// needs to validate the coordinate, then check the terrain, for valid, then change the has unit, then needs to update tile. 
					if (verify == true)
					{
						// needs to call some more validation? or update tiles? or has unit?
						terrainverify = getTerrain(coordinate); // terrain verification on the verification of the coordinates?

					}
					else
					{
						while (verify == false)
						{
							cout << "Please enter a new coordinate to place the unit" << endl;
							cin >> coordinate;
							verify = BoardToArray(coordinate); // will still need terrain verification.
							terrainverify = getTerrain(coordinate); // terrain verification on the verification of the coordinates? 
							// line above always gives back a land?
						}
					}
				}
			}
		//set has unit 
		//update tile?
		//needs to check if that is a valid position
		//needs to call mapgen function to set this as a position
			break;

		case 'P' :
	
		
		////set has unit 
		//update tile?
			cout << "End of unit allocation, hand console over to the other player. " << endl;
			break;

		//default: cout << "error" << endl;
			//break;
	}
}

void player::setcover(bool) // does it have cover y/n
{
	cover = 0;
	this->cover = cover;// to be implemented later
						//needs to check if there is cover 
						//cover value needs to be added later as well 
}

void player::sethasmoved(bool) // has it moved y/n
{
	this->move = move; // this function can be called with a true false input put in, within another function and or main?

}

void player::setmove(int) // how much can it move staying at 1 just now. 
{
	int distance = 1;

	this->distance = distance;
}

void player::sethp(int)
{
	int hp = 1;

	this->hp = hp;
}

void player::setunit(int)
{

}

string player::getype() //returns land, sea, air, needs the position to tell??
{
	cout << type << " unit selected. /n"; //relays unit type selected to the user
	return type;
}

string player::getposition() //returns a string co-ordinate A2 
{
	cout << "unit is located at tile: " << currentposition << endl; //shows the unit location to the user and returns for the program/
	return currentposition;
}

bool player::getcover() // returns a boolean 0 = no
{
	if (cover == 1) // if loop to inform the user whether they have taken cover or not.
	{
		cout << "unit has cover! /n";
	}
	else
	{
		cout << "unit has no cover! /n";
	}
	return cover;
}

bool player::gethasmoved() // returns if it has moved 1= if yes
{
	if (move == 1) // if loop to inform the user that that unit has moved or not.
	{
		cout << "player has moved! /n";
	}
	else
	{
		cout << "Unit has not moved! /n";
	}
	return move;
}

int player::getmove() // returns it's move value, always 1 currently.
{
	cout << "unit can still move: " << distance << " tiles /n"; // tells the user the remaining unit movement.

	return distance;
}

int player::gethp()
{
	return hp;
}

int player::getunit(int index)
{
	return index;
}