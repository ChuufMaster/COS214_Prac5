#include "MichelinChef.h"

void MichelinChef::cook(MealComponent * meal) {
	if (meal->type == 1)
	{
		//wait certain time
	}else{
		_successor->cook(meal);
	}

}

MichelinChef::MichelinChef(Chef* chef) {
	this->_successor = chef;
}
