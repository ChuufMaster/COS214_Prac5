#ifndef CUSTOMERHAPPINESSSTATE_H
#define CUSTOMERHAPPINESSSTATE_H
#include "Customer.h"

class Customer;
class CustomerHappinessState {

private:
  float _happy;

public:
  CustomerHappinessState(float h);

  virtual ~CustomerHappinessState();

  virtual bool getHappiness();

  virtual bool handle(Customer *c);
};

#endif
