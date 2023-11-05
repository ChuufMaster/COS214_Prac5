#include "Table.h"

Table::Table(int numChairs, int x, int y):Tile(x,y) {
	this->numChairs = numChairs;
	this->setSym('T');
}

void Table::addCustomer(Customer* c){

	c->table = this;
	this->customers.insert(customers.end(), c);
}

void Table::attach(Waiter* waiter) {
	this->waiter = waiter;
}

void Table::detach(Waiter* waiter) {
	this->waiter = NULL;
}

void Table::notify() {

	if(this->readyToOrder == this->numOccupied){
		// this->waiter->placeOrder 
		//notify can happen by round, checking if the readyToROder number is equal to the chairs at the table
	}
	throw "Not yet implemented";
}
