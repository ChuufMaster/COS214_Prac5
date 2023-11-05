#ifndef NORMALCUSTOMER_H
#define NORMALCUSTOMER_H
#include "Customer.h"

class NormalCustomer : Customer {

public:
  NormalCustomer(MenuItem m);
  void decHappiness();
};

#endif
