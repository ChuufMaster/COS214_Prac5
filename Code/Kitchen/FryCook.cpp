#include "FryCook.h"

void FryCook::cook(MealComponent *meal) {
	if (meal->type = 3)
	{
		//wait certain time
	}else {
		_successor->cook(meal);
	}
}

FryCook::FryCook(Chef *chef) {
	this->_successor = chef;
}
