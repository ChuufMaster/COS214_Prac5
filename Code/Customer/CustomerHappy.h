#ifndef CUSTOMER_HAPPY_H
#define CUSTOMER_HAPPY_H

#include "CustomerHappinessState.h"

// class CustomerHappinessState;
class CustomerHappy : public CustomerHappinessState {
private:
  float _happy;

public:
  CustomerHappy();

  bool handle(Customer *c);

  bool getHappiness(Customer* c);
};

#endif
