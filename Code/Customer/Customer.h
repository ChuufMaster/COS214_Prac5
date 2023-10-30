#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerHappinessState.h"
#include "CustomerReadyState.h"

class Customer {

private:
	CustomerHappinessState* _happyState;
	CustomerReadyState* _readyState;

public:
	Customer();

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
