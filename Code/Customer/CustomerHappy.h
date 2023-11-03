#ifndef CUSTOMERHAPPY_H
#define CUSTOMERHAPPY_H
#include "CustomerHappinessState.h"

class CustomerHappy : public CustomerHappinessState {

public:

  CustomerHappy(float h);

  float _happy;

  bool handle(Customer *c);

  bool getHappiness();
};

#endif
