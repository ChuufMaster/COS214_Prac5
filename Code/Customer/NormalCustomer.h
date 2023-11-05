#ifndef NORMALCUSTOMER_H
#define NORMALCUSTOMER_H
#include "Customer.h"

class NormalCustomer : Customer {

public:
  NormalCustomer(int x, int y, MenuItem m);
  void decHappiness();
};

#endif
