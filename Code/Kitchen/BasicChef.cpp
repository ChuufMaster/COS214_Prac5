#include "BasicChef.h"

void BasicChef::cook(MealComponent *meal)
{
	if (meal->type == 4)
	{
		return;
	}
}

BasicChef::BasicChef()
{
	_successor = nullptr;
}
