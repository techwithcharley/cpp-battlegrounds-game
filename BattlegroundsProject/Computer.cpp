#include "Player.h"

computer::computer()
{

}

computer::~computer()
{

}

void computer::placeComUnits(int num_units)
{
	robot.setUnits(num_units);
	string unit_types = "ISPISPISPISPISP";
	char unit_type;
	string coordinate;

	for (int i = 0; i < robot.getUnits(); i++){
		unit_type = unit_types[i];
		coordinate = RandomCoord();
		cout << "Type: " << unit_type << endl;
		while (setHasUnit(coordinate, unit_type) == false){
			coordinate = RandomCoord();
		}
	}
}

void computer::ComAttacked(string target)
{
	if (getHasUnit(target) != NULL) {
		cout << "Hit!" << endl;
		setHasUnit(target, NULL);
		setTiles(target, 'X');
	}
	else{
		cout << "Attack missed..." << endl;
	}
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