#ifndef MAITRED_H
#define MAITRED_H
#include "Tile.h"
#include "TableIterator.h"
#include "Customer.h"

class MaitreD : Tile {

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
