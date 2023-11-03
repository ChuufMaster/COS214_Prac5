#ifndef CUSTOMERUNHAPPY_H
#define CUSTOMERUNHAPPY_H
#include "CustomerHappinessState.h"

class CustomerUnhappy : public CustomerHappinessState {

public:
	float _happy;

	bool handle(Customer* c);

	bool getHappiness();
};

#endif
