#ifndef CUSTOMER_HAPPINESS_STATE_H
#define CUSTOMER_HAPPINESS_STATE_H
//#include "Customer.h"

class Customer;
class CustomerHappinessState {

private:
  float _happy;

public:
  CustomerHappinessState(float h);

  virtual ~CustomerHappinessState();

  virtual bool getHappiness() = 0;

  virtual bool handle(Customer *c) = 0;
};

#endif
