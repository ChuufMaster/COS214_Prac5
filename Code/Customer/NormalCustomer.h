#ifndef NORMALCUSTOMER_H
#define NORMALCUSTOMER_H
#include "Customer.h"

class NormalCustomer :public Customer {

public:
  NormalCustomer(MenuItem m);
  NormalCustomer();
  void decHappiness();
};

#endif
