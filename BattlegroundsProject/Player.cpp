#include "Player.h"

player::player() {

	char stopchar;
	cout << "enter stopchar, map generated for player"  << endl;
	cin >> stopchar;

}
player::~player()
{
	// Still to be implemented
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
void player::settype(char z) { // sets 1 land, 1 sea and 1 air unit for now, to change later for more user customisation. 

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
		char stopchar;
		cin >> stopchar;
		break;
	}

	//this->type = type;

}
void player::setposition(string coordinate , char z) // sets unit position, via placement of the user, ie co-ordinate A2 
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
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void player::setCover(bool covered) // does it have cover y/n
{
	Cover = covered;// to be implemented later
						//needs to check if there is cover 
						//cover value needs to be added later as well 
}

void player::setHasMoved(bool moved) // has it moved y/n
{
	HasMoved = moved; // this function can be called with a true false input put in, within another function and or main?

}

void player::setMoveDistance(int dist) // how much can it move staying at 1 just now. 
{
	MoveDistance = dist;
}

void player::setHealth(int hp)
{
	Health = hp;
}

void player::setUnits(int unit)
{
	Units.resize(unit);
	char unit_type;
	string coordinate;

	for (int z = 0; z < getUnits(); z++) // creates the units for the player, for loop broken? 
	{
		switch (z) {  // switch statement gives values to i in place of the GUI to allow the code to work for now. 

		case 0:
			unit_type = 'I';
			break;

		case 1:
			unit_type = 'S';
			break;

		case 2:
			unit_type = 'P';
			break;
		}

		cout << "Type: " << unit_type << endl;
		cout << "Enter the coordinate you want the unit to be placed at, ie : A1" << endl;
		cin >> coordinate;
		setHasUnit(coordinate, unit_type); //sets the position of this unit
	}
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/*
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
*/
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

bool player::getCover() // returns a boolean 0 = no
{
	if (Cover == true) // if loop to inform the user whether they have taken cover or not.
	{
		cout << "unit has cover! /n";
	}
	else
	{
		cout << "unit has no cover! /n";
	}
	return Cover;
}

bool player::getHasMoved() // returns if it has moved 1= if yes
{
	if (HasMoved == true) // if loop to inform the user that that unit has moved or not.
	{
		cout << "player has moved! /n";
	}
	else
	{
		cout << "Unit has not moved! /n";
	}
	return HasMoved;
}

int player::getMoveDistance() // returns it's move value, always 1 currently.
{
	cout << "unit can still move: " << MoveDistance << " tiles /n"; // tells the user the remaining unit movement.

	return MoveDistance;
}

int player::getHealth()
{
	return Health;
}

int player::getUnits()
{
	return Units.size();
}