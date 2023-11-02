#ifndef CUSTOMERHAPPINESSSTATE_H
#define CUSTOMERHAPPINESSSTATE_H
#include "Customer.h"

class Customer;
class CustomerHappinessState {

private:
	bool _happy;

public:
	CustomerHappinessState();

	virtual ~CustomerHappinessState();

	virtual bool getHappiness() = 0;

	virtual bool handle(Customer* c) = 0;
};

#endif
