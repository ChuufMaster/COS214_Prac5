#ifndef CUSTOMERREADYSTATE_H
#define CUSTOMERREADYSTATE_H
#include "Customer.h"

class CustomerReadyState {

private:
	bool _readyToOrder;

public:
	CustomerReadyState();

	~CustomerReadyState();

	virtual bool getReadyToOrder() = 0;

	virtual int handleWaiter(Customer* c) = 0;
};

#endif
