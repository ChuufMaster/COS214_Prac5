#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerHappinessState.h"
#include "CustomerReadyState.h"
#include "../New Folder/Tile.h"

class Customer : Tile{

private:
	CustomerHappinessState* _happyState;
	CustomerReadyState* _readyState;

public:
	Customer(int x, int y);

	~Customer();

	bool getHappiness();

	bool getReadyToOrder();

	void setState(CustomerHappinessState* state);

	void setState(CustomerReadyState* state);

	bool happy();

	int readyToOrder();

protected:
	CustomerHappinessState* getHappinessState();

	CustomerReadyState* getReadyState();
};

#endif
