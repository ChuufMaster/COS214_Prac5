#include "MeatMaster.h"

void MeatMaster::cook(MealComponent* meal) {
	if (meal->type == 2)
	{
		//wait for certain time
	}else {
		_successor->cook(meal);
	}
}

MeatMaster::MeatMaster(Chef* chef) {
	this->_successor = chef;
}
