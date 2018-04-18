#include "Player.h"

computer::computer()
{

}

computer::~computer()
{

}

void computer::setComCover(string position, bool value)
{
	BoardToArray(position);
	ComCover[getCoord(0)][getCoord(1)] = value;
}

bool computer::getComCover(string position)
{
	BoardToArray(position);
	return ComCover[getCoord(0)][getCoord(1)];
}

void computer::setComUnits(int num_units)
{
	ComCover.resize(getTiles_Size());
	for (int i = 0; i < getTiles_Size(); i++) {
		ComCover[i].resize(getTiles_Size());
	}

	ComUnits.resize(num_units);
	string unit_types = "ISPISPISPISPISP";
	char unit_type;
	string coordinate;

	for (int i = 0; i < getComUnits(); i++){
		unit_type = unit_types[i];
		coordinate = RandomCoord();
		cout << "Type: " << unit_type << endl;
		while (setComUnit(coordinate, unit_type) == false){
			coordinate = RandomCoord();
		}
	}
}

int computer::getComUnits()
{
	return ComUnits.size();
}

void computer::ComAttacked(string target)
{
	if (getHasUnit(target) != NULL) {
		setHasUnit(target, NULL);
		setTiles(target, 'X');
	}
}

bool computer::TerrainVerify(string old_pos, string new_pos)
{
	switch (getHasUnit(old_pos)) {
	case 'I':
		if (getTerrain(new_pos) != true) {
			return false;
		}
		break;

	case 'S':
		if (getTerrain(new_pos) != false) {
			return false;
		}
		break;

	case NULL:
		return false;
	}
	return true;
}

bool computer::DistanceVerify(string old_pos, string new_pos)
{
	BoardToArray(old_pos);
	int old_y = getCoord(0);
	int old_x = getCoord(1);
	BoardToArray(new_pos);
	int diff_sum = (getCoord(0) + getCoord(1)) - (old_x + old_y);

	if ((diff_sum > 1) || (diff_sum < -1)) {
		return false;
	}
	return true;
}

bool computer::ComMove(string old_pos, string new_pos)
{
	if (getHasUnit(old_pos) != NULL) {
		if (DistanceVerify(old_pos, new_pos) == true && TerrainVerify(old_pos, new_pos) == true) {
			UpdateTiles(old_pos, new_pos);
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

string computer::ComTurn()
{
	int action = rand() % 3+1;
	cout << "action: " << action << endl;
	string old_coordinate, new_coordinate, target;

	switch (action) {
	case 1:
		old_coordinate = RandomCoord();
		new_coordinate = RandomCoord();
		while (ComMove(old_coordinate, new_coordinate) == false) {
			old_coordinate = RandomCoord();
			new_coordinate = RandomCoord();
		}
		cout << "moving..." << endl;
		return "move";
		break;

	case 2:
		target = RandomCoord();
		cout << "firing..." << endl;
		return target;
		break;

	case 3:
		cout << "ending turn..." << endl;
		return "endturn";
		break;

	default:
		cout << "Error, Invalid action..." << endl;
		return "error";
		break;
	}
}

string computer::RandomCoord()
{
	string alphabet = "ABCDEFGHIJ", result;

	int tiles_size = getTiles_Size();
	int coord_y = rand()%tiles_size;
	int coord_x = rand()%tiles_size;

	result = alphabet[coord_x] + to_string(coord_y);
	return result;
}