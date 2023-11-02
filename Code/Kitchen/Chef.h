#ifndef CHEF_H
#define CHEF_H
#include "MealComponent.h"
class Chef {

private:
	int _cookingTime;
protected:
	Chef *_successor;

public:
	virtual void cook(MealComponent* meal) = 0;

	int getCookingTime();

	void setCookingTime(int cookingTime);
};

#endif
