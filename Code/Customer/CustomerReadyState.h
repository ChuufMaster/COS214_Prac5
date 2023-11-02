#ifndef CUSTOMERREADYSTATE_H
#define CUSTOMERREADYSTATE_H
#include "Customer.h"

class Customer;
class CustomerReadyState {

private:
	bool _readyToOrder;

public:
	CustomerReadyState();

	virtual ~CustomerReadyState();

	virtual bool getReadyToOrder() = 0;

	virtual int handleWaiter(Customer* c) = 0;
};

#endif
