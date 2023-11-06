#ifndef CUSTOMER_UNHAPPY_H
#define CUSTOMER_UNHAPPY_H

#include "CustomerHappinessState.h"
class CustomerUnhappy : public CustomerHappinessState {

private:
  float _happy;

public:
  CustomerUnhappy();

  bool handle(Customer *c);

  bool getHappiness(Customer *);
};

#endif
