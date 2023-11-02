#ifndef TABLE_H
#define TABLE_H
#include "Tile.h"
#include "Customer.h"
#include "Waiter.h"

class Table : Tile
{

public:

	bool _isOpen;

	Waiter *waiter;

	bool _isReserved;

public:
	
	std::vector<Customer> customers;

	int tableNumber;

	Table *next;

	Table *previous;

	int numChairs;

	int numOccupied;

	int readyToOrder;

	Table(int numChairs, int x, int y);
	
	void addCustomer(Customer customer);

	void attach(Waiter waiter);

	void detach(Waiter waiter);

	void notify();
};

#endif
