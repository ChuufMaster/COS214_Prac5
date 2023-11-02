#include "Table.h"

Table::Table(int numChairs, int x, int y):Tile(x,y) {
	this->numChairs = numChairs;
	this->setSym('T');
}

void Table::addCustomer(Customer c){

	this->customers.insert(customers.end(), c);
}

void Table::attach(Waiter waiter) {
	// this->waiter-> = waiter;
}

void Table::detach(Waiter waiter) {
	// TODO - implement Table::detach
	throw "Not yet implemented";
}

void Table::notify() {
	// TODO - implement Table::notify
	if(this->readyToOrder == this->numOccupied){
		
	}
	throw "Not yet implemented";
}
