#ifndef CUSTOMER_UNHAPPY_H
#define CUSTOMER_UNHAPPY_H

#include "CustomerHappinessState.h"
// class CustomerHappinessState;

class CustomerUnhappy : public CustomerHappinessState {

private:
  float _happy;

public:
  CustomerUnhappy(float h);

  bool handle(Customer *c);

  bool getHappiness();
};

#endif
