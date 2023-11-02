#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Floor.h"
class Restaurant
{

private:
	//Restaurant *_restaurant; //moved to public
	Floor *_floor;
	int singletonData;//added
	int occupancy;//added

public:
	static Restaurant& _restaurant();/// create singleton instance
	bool isFull;
	bool isOpen;
	void incOccupancy();//updateSingletonData()

protected:
	Restaurant();
	Restaurant(const Restaurant&);
	Restaurant& operator=(const Restaurant&);
	~Restaurant();
};

#endif
