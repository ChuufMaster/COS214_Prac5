#ifndef MAITRED_H
#define MAITRED_H
#include "../Floor/Tile.h"
#include "../Floor/TableIterator.h"
#include "Customer.h"

class MaitreD :public Tile {

public:
	Table* _head;
	std::vector<Customer*> Customers;

	MaitreD();

	TableIterator begin();

	TableIterator end();

	void seatCustomer(bool reserved, Customer* Customer);

	void executeRestaurant();

	Customer* spawnCustomer();
};

#endif
