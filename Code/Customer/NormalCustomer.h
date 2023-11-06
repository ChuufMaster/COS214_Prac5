#ifndef NORMALCUSTOMER_H
#define NORMALCUSTOMER_H
#include "Customer.h"

class NormalCustomer : public Customer {

public:
  int customerHappiness = 12;
  NormalCustomer();
};

#endif
