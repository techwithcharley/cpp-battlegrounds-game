#include "Player.h"

computer::computer()
{

}

computer::~computer()
{

}

void computer::setComCover(string, bool)
{

}

bool computer::getComCover(string)
{
	return true;
}

void computer::setComUnits(int)
{

}

void computer::ComAttacked(string)
{

}

bool computer::ComMove(string, string)
{
	return true;
}

string computer::ComTurn()
{
	return "NULL";
}

string computer::RandomCoord()
{
	string alphabet = "ABCDEFGHIJ", result;

	int coord_y = rand() % getTiles_Size();
	int coord_x = rand() % getTiles_Size();

	result = alphabet[coord_x] + to_string(coord_y);
	return result;
}