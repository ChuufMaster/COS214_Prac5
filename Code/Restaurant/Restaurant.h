#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Floor.h"
class Restaurant
{

private:
	Restaurant *_restaurant;
	Floor *_floor;

public:
	bool isFull;
	bool isOpen;
	void incOccupancy();
};

#endif
