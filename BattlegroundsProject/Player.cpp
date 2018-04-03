#include "Player.h"

player::player() {

	char stopchar;
	cout << "enter stopchar, map generated for player"  << endl;
	cin >> stopchar;

	Cover.resize(getTiles_Size());
	for (int i = 0; i < getTiles_Size(); i++) {
		Cover[i].resize(getTiles_Size());
	}
}
player::~player()
{
	// Still to be implemented
}

void player::setCover(string position, bool value) // does it have cover y/n
{
	BoardToArray(position);
	Cover[coord[0]][coord[1]] = value;
}

void player::setHasMoved(bool moved) // has it moved y/n
{
	HasMoved = moved; // this function can be called with a true false input put in, within another function and or main?
}

void player::setMoveDistance(string old_pos, string new_pos) // how much can it move staying at 1 just now. 
{
	MoveDistance = 1;

}

void player::setHealth(int hp)
{
	Health = hp;
}

void player::setUnits(int unit)
{
	Units.resize(unit);
	char unit_type = NULL;
	string coordinate;

	for (int z = 0; z < getUnits(); z++) 
	{
		switch (z) {

		case 0:
		case 3:
			unit_type = 'I';
			break;

		case 1:
		case 4:
			unit_type = 'S';
			break;

		case 2:
		case 5:
			unit_type = 'P';
			break;
		}

		cout << "Type: " << unit_type << endl;
		cout << "Enter the coordinate you want the unit to be placed at, ie : A1" << endl;
		cin >> coordinate;
		setHasUnit(coordinate, unit_type); //sets the position of this unit
	}
}

bool player::getCover(string position) // returns a boolean 0 = no
{
	BoardToArray(position);
	return Cover[coord[0]][coord[1]];
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

void player::PlayerTurn()
{
}

void player::PlayerAttacked(string target)
{
	if (getHasUnit(target) == 'I' || 'S' || 'P') {
		setHasUnit(target, NULL);
	}
	else {
		cout << "Attack missed..." << endl;
	}
}
