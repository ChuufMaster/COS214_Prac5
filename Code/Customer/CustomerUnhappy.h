#ifndef CUSTOMERUNHAPPY_H
#define CUSTOMERUNHAPPY_H
#include "CustomerHappinessState.h"

class CustomerUnhappy : CustomerHappinessState {

public:
	bool _happy;

	bool handle(Customer* c);

	bool getHappiness();
};

#endif
