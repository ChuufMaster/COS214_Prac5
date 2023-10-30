#ifndef CUSTOMERHAPPY_H
#define CUSTOMERHAPPY_H
#include "CustomerHappinessState.h"

class CustomerHappy : CustomerHappinessState {

public:
	bool _happy;

	bool handle(Customer* c);

	bool getHappiness();
};

#endif
